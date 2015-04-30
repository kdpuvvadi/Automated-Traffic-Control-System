
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)MinGW $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES)  $(CPPCompileDebug) -c

#########################################
###### Predefined macros ################
RM=rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Program Files/IBM/Rational/Rhapsody/7.5.2/Share"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/MinGW

ADDITIONAL_OBJS=

OBJS= \
  Controller.o \
  Power_switch.o \
  Hold.o \
  Emergency.o \
  Traffic_Main.o \
  NS_SENSOR.o \
  EW_SENSOR.o \
  controller_density.o \
  Density_sensor.o \
  Traffic_density.o \
  Normal.o \
  TPI.o \
  Public.o \
  Default.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/mingwaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/mingwoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/mingwomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/mingwtomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/mingwaomtrace$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/mingwoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/mingwomcomappl$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/mingwoxf$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






Controller.o : Controller.cpp Controller.h    Default.h 
	@echo Compiling Controller.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Controller.o Controller.cpp




Power_switch.o : Power_switch.cpp Power_switch.h    Default.h Controller.h NS_SENSOR.h EW_SENSOR.h 
	@echo Compiling Power_switch.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Power_switch.o Power_switch.cpp




Hold.o : Hold.cpp Hold.h    Default.h Controller.h 
	@echo Compiling Hold.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Hold.o Hold.cpp




Emergency.o : Emergency.cpp Emergency.h    Default.h Controller.h 
	@echo Compiling Emergency.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Emergency.o Emergency.cpp




Traffic_Main.o : Traffic_Main.cpp Traffic_Main.h    Default.h Emergency.h Hold.h Controller.h Power_switch.h EW_SENSOR.h NS_SENSOR.h 
	@echo Compiling Traffic_Main.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Traffic_Main.o Traffic_Main.cpp




NS_SENSOR.o : NS_SENSOR.cpp NS_SENSOR.h    Default.h Emergency.h 
	@echo Compiling NS_SENSOR.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o NS_SENSOR.o NS_SENSOR.cpp




EW_SENSOR.o : EW_SENSOR.cpp EW_SENSOR.h    Default.h Emergency.h 
	@echo Compiling EW_SENSOR.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o EW_SENSOR.o EW_SENSOR.cpp




controller_density.o : controller_density.cpp controller_density.h    Default.h 
	@echo Compiling controller_density.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o controller_density.o controller_density.cpp




Density_sensor.o : Density_sensor.cpp Density_sensor.h    Default.h controller_density.h 
	@echo Compiling Density_sensor.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Density_sensor.o Density_sensor.cpp




Traffic_density.o : Traffic_density.cpp Traffic_density.h    Default.h controller_density.h Density_sensor.h 
	@echo Compiling Traffic_density.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Traffic_density.o Traffic_density.cpp




Normal.o : Normal.cpp Normal.h    Default.h 
	@echo Compiling Normal.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Normal.o Normal.cpp




TPI.o : TPI.cpp TPI.h    Default.h 
	@echo Compiling TPI.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o TPI.o TPI.cpp




Public.o : Public.cpp Public.h    Default.h 
	@echo Compiling Public.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Public.o Public.cpp




Default.o : Default.cpp Default.h    Controller.h Power_switch.h Hold.h Emergency.h Traffic_Main.h NS_SENSOR.h EW_SENSOR.h controller_density.h Density_sensor.h Traffic_density.h Normal.h 
	@echo Compiling Default.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Default.o Default.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Controller.o
	$(RM) Power_switch.o
	$(RM) Hold.o
	$(RM) Emergency.o
	$(RM) Traffic_Main.o
	$(RM) NS_SENSOR.o
	$(RM) EW_SENSOR.o
	$(RM) controller_density.o
	$(RM) Density_sensor.o
	$(RM) Traffic_density.o
	$(RM) Normal.o
	$(RM) TPI.o
	$(RM) Public.o
	$(RM) Default.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

