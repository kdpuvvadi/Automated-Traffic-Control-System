/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Traffic_Main
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Traffic_Main.h
*********************************************************************/

#ifndef Traffic_Main_H
#define Traffic_Main_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsController
#include "Controller.h"
//## classInstance itsEmergency
#include "Emergency.h"
//## classInstance itsEW_SENSOR
#include "EW_SENSOR.h"
//## classInstance itsHold
#include "Hold.h"
//## classInstance itsNS_SENSOR
#include "NS_SENSOR.h"
//## classInstance itsPower_switch
#include "Power_switch.h"
//## package Default

//## class Traffic_Main
class Traffic_Main : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTraffic_Main;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Traffic_Main(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Traffic_Main();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    EW_SENSOR* getItsEW_SENSOR() const;
    
    //## auto_generated
    Emergency* getItsEmergency() const;
    
    //## auto_generated
    Hold* getItsHold() const;
    
    //## auto_generated
    NS_SENSOR* getItsNS_SENSOR() const;
    
    //## auto_generated
    Power_switch* getItsPower_switch() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    Controller itsController;		//## classInstance itsController
    
    EW_SENSOR itsEW_SENSOR;		//## classInstance itsEW_SENSOR
    
    Emergency itsEmergency;		//## classInstance itsEmergency
    
    Hold itsHold;		//## classInstance itsHold
    
    NS_SENSOR itsNS_SENSOR;		//## classInstance itsNS_SENSOR
    
    Power_switch itsPower_switch;		//## classInstance itsPower_switch
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTraffic_Main : virtual public AOMInstance {
    DECLARE_META(Traffic_Main, OMAnimatedTraffic_Main)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Traffic_Main.h
*********************************************************************/
