/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NS_SENSOR
//!	Generated Date	: Fri, 7, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/NS_SENSOR.h
*********************************************************************/

#ifndef NS_SENSOR_H
#define NS_SENSOR_H

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
//## link itsEmergency
class Emergency;

//## package Default

//## class NS_SENSOR
class NS_SENSOR : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNS_SENSOR;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    NS_SENSOR(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~NS_SENSOR();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Emergency* getItsEmergency() const;
    
    //## auto_generated
    void setItsEmergency(Emergency* p_Emergency);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Emergency* itsEmergency;		//## link itsEmergency
    
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
    
    //## statechart_method
    void On_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent();
    
    // NS_On:
    //## statechart_method
    inline bool NS_On_IN() const;
    
    // NS_Off:
    //## statechart_method
    inline bool NS_Off_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;

protected :

//#[ ignore
    enum NS_SENSOR_Enum {
        OMNonState = 0,
        On = 1,
        NS_On = 2,
        NS_Off = 3,
        Off = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int On_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNS_SENSOR : virtual public AOMInstance {
    DECLARE_REACTIVE_META(NS_SENSOR, OMAnimatedNS_SENSOR)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NS_On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NS_Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool NS_SENSOR::rootState_IN() const {
    return true;
}

inline bool NS_SENSOR::On_IN() const {
    return rootState_subState == On;
}

inline bool NS_SENSOR::NS_On_IN() const {
    return On_subState == NS_On;
}

inline bool NS_SENSOR::NS_Off_IN() const {
    return On_subState == NS_Off;
}

inline bool NS_SENSOR::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/NS_SENSOR.h
*********************************************************************/
