/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Power_switch
//!	Generated Date	: Fri, 7, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Power_switch.h
*********************************************************************/

#ifndef Power_switch_H
#define Power_switch_H

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
//## link itsController
class Controller;

//## link itsEW_SENSOR
class EW_SENSOR;

//## link itsNS_SENSOR
class NS_SENSOR;

//## package Default

//## class Power_switch
class Power_switch : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPower_switch;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Power_switch(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Power_switch();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    EW_SENSOR* getItsEW_SENSOR() const;
    
    //## auto_generated
    void setItsEW_SENSOR(EW_SENSOR* p_EW_SENSOR);
    
    //## auto_generated
    NS_SENSOR* getItsNS_SENSOR() const;
    
    //## auto_generated
    void setItsNS_SENSOR(NS_SENSOR* p_NS_SENSOR);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    EW_SENSOR* itsEW_SENSOR;		//## link itsEW_SENSOR
    
    NS_SENSOR* itsNS_SENSOR;		//## link itsNS_SENSOR
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // On:
    //## statechart_method
    inline bool On_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;

protected :

//#[ ignore
    enum Power_switch_Enum {
        OMNonState = 0,
        On = 1,
        Off = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPower_switch : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Power_switch, OMAnimatedPower_switch)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Power_switch::rootState_IN() const {
    return true;
}

inline bool Power_switch::On_IN() const {
    return rootState_subState == On;
}

inline bool Power_switch::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Power_switch.h
*********************************************************************/
