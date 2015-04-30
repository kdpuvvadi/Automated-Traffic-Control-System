/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: DefaultConfig_copy_copy
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Normal.h"
//## auto_generated
#include "Traffic_density.h"
//## auto_generated
#include "Traffic_Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Normal * p_Normal;
            Traffic_density * p_Traffic_density;
            Traffic_Main * p_Traffic_Main;
            p_Normal = new Normal;
            p_Normal->startBehavior();
            p_Traffic_density = new Traffic_density;
            p_Traffic_density->startBehavior();
            p_Traffic_Main = new Traffic_Main;
            p_Traffic_Main->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig_copy_copy 
            //#]
            OXF::start();
            delete p_Normal;
            delete p_Traffic_density;
            delete p_Traffic_Main;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\MainDefaultComponent.cpp
*********************************************************************/
