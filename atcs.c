
#include <stdio.h>                         /* standard I/O .h-file */
#include <LPC213x.H>                       /* LPC213x definitions  */
#include <math.h>
#define adc_pin 1<<30
#define pdn_bit 1<<21
#define adcr_start_mask 7<<24
#define adcr_sel_mask 0x000000FF
#define adc0_start 1<<24
#define OutAmpl 600                 /* Output Amplitute (Range  0 - 0.99)     */
#define PI  3.1415926
#define T0_RlFreq  8000             /* Timer 0 Reload Frequency               */
unsigned char chn;
extern void init_serial (void);            /* Initialize Serial Interface     */
int volatile timeval;
unsigned int usec;
int digits[16]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67,0x77,0x7F,0x39,0x3F,0x79,0x71};
char error_msg[4]={0x79, 0x50, 0x5C, 0x50};
char welcome_msg[4]={0x76, 0x79, 0x38, 0x3F};
char stop_msg[4]={0x6D, 0x78, 0x3F, 0x73};
char press_msg[7]={0x73, 0x50, 0x79, 0x6D, 0x46, 0x79, 0x6D};
char alpha_msg[5]={0x5F, 0x7C, 0x58, 0x5D, 0x79};
char auto_mode[4]={0x06, 0x5F, 0x78, 0x5C};
char normal_mode[4]={0x5B, 0x54, 0x3F, 0x50};
char density_mode[4]={0x66, 0x5E, 0x79, 0x54};
char ewGo[4]={0x79, 0x00, 0x3D, 0x5C};
char nsGo[4]={0x54, 0x00, 0x3D, 0x5C};
char ewStop[4]={0x79, 0x00, 0x54, 0x5C};
char nsStop[4]={0x54, 0x00, 0x54, 0x5C};
void init_adc0(unsigned char ch,unsigned char clk_div)
{
	chn=1<<ch;
	PINSEL1= (PINSEL1 & (~(3<<28)))|(1<<(22+(ch*2))); /*Select the AD0.3 of P0.30*/
	PCONP |= 0x00001000; /*Power on the A/D converter 0 */
	AD0CR =(1<<ch) | ( ((clk_div-1))<<8 ) | pdn_bit ; /*configure the A/D control register of A/D 0*/
}
unsigned int read_adc0()
{
	unsigned int i=0;
	AD0CR &= ~(adcr_start_mask|adcr_sel_mask); /*stop the A/D converter by masking the start bits and channel selection bit*/
	AD0CR |=chn; /*Select the A/D channel */
	AD0CR |=adc0_start; /*Start the A/D conversion*/
	while(!(AD0DR & (0x80000000))); /*Wait for the conversion to get over by monitoring the 28th bit of A/D data register*/
	AD0CR &= ~(adcr_start_mask|adcr_sel_mask); /*Stop the conversion by masking the start bits*/
	i=((AD0DR)&(0x0000FFC0))>>6 ; /*Capture the result by shifting the bits to 6 places right*/
	return(i);
}

void display(int val, int n, int key)
{
	unsigned int i;	
	unsigned int value;
	value=(float) (val*1000/0x3ff)*3.3; 	/*Vref = 3.3V*/	
	for(usec=0; usec<=14922; usec++)
	{
		val=value;
		for(i=1; i<=n; i++)
		{
			IOSET1=0x00FF0000;
  			IOSET0=0x000F0000;
  			IOCLR0=1<<(15+i);
			if(key!=0 && i==4)
				IOCLR1=(digits[key])<<16;
			else	
				IOCLR1=((digits[val%10])<<16);
			val=val/10;		 
		}				
	}	
}

int readKey()
{
	int val=((IOPIN1 & 0xF0000000)>>28);
	IOSET1=0x00FF0000;
	IOCLR1=digits[val]<<16;
	return val;
}

void display_msg(char *e_msg, int n)
{
	char i;	
	
	for(i=1; i<=n; i++)
	{
		IOSET1=0x00FF0000;
  		IOSET0=0x000F0000;
  		IOCLR0=1<<(20-i);
		IOCLR1=(*(e_msg+i-1))<<16;
		for(usec=0; usec<=1000; usec++);						
	}		
}

int main (void) {
  unsigned int val;
  unsigned int key;
  unsigned long int i=0;
  unsigned int sec;
  unsigned int densityEW, densityNS;
  
  char ch;
  IODIR1  = 0x0FFF0000;                     /*  P1.16..23 defined as Outputs  */
  IODIR0  = 0x000F0000;

  	while(1)
  	{								
		while(i<=1000)
		{
			display_msg(welcome_msg, 4);
			i++;			
		}		
		while(i<=2000)
		{
			display_msg(auto_mode, 4);
			i++;
		}	
		while(i<=3000)
		{
			display_msg(normal_mode, 4);
			i++;
		}		
		while(i<=4000)
		{
			display_msg(density_mode, 4);
			i++;
		}

		// user input 1 for auto, 2 for normal, 4 for density
		key=readKey();
		for(sec=0; sec<1492000; sec++);		
		if(key==1)	// auto mode starts here
		{
			key=0;
// In auto mode signals will be automatically  changing from E(east-west) to S(south-north)
			while(1)
			{
				sec=0;
				while(sec<=4000)
				{
					display_msg(ewGo, 4);
					sec++;
				}
				sec=0;
				while(sec<=4000)
				{
					display_msg(nsStop, 4);
					sec++;
				}
				sec=0;
				while(sec<=4000)
				{
					display_msg(nsGo, 4);
					sec++;
				}
				sec=0;
				while(sec<=4000)
				{
					display_msg(ewStop, 4);
					sec++;
				}
			}
		}
		// auto mode ends here

		else	// Normal mode starts here
		if(key==2)
		{
			key=0;
			// In normal mode signals will be changed on pressing 1 (for east-west) or 2 (for north-south)

			while(1)
			{
				key=readKey();
				for(sec=0; sec<1492000; sec++);
				if(key==1)
				{
					sec=0;
					while(sec<=4000)					  
					{
						display_msg(ewGo, 4);
						sec++;
					}
					sec=0;
					while(sec<=4000)
					{
						display_msg(nsStop, 4);
						sec++;
					}	
				}
				else if(key==2)
				{
					sec=0;
					while(sec<=4000)
					{
						display_msg(nsGo, 4);
						sec++;
					}
					sec=0;
					while(sec<=4000)
					{
						display_msg(ewStop, 4);
						sec++;
					}
				}
				else if(key==8)
				{
					break;
				}		
			}
		}
		//normal mode ends here

		else	// Density mode starts here		
		if(key==4)
		{
			key=0;
// In density mode signals will be changed on sensing the density in E-W(POT 1) or N-S(POT 2) direction.

			while(1)
			{
				init_adc0(2,3);
				densityEW=read_adc0();
				display(densityEW, 4, 4);
				for(sec=0; sec<1492000; sec++);

				init_adc0(3,3);
				densityNS=read_adc0();
				display(densityNS, 4, 4);
				for(sec=0; sec<1492000; sec++);

				if(densityEW==densityNS)
					densityEW++;

				if(densityEW>densityNS)
				{
					sec=0;
					while(sec<=4000)					  
					{
						display_msg(ewGo, 4);
						sec++;
					}
					sec=0;
					while(sec<=4000)
					{
						display_msg(nsStop, 4);
						sec++;
					}	
				}
				if(densityEW<densityNS)
				{
					sec=0;
					while(sec<=4000)
					{
						display_msg(nsGo, 4);
						sec++;
					}
					sec=0;
					while(sec<=4000)
					{
						display_msg(ewStop, 4);
						sec++;
					}
				}
			}
		}
		//density mode ends here	  
	} 	
}
