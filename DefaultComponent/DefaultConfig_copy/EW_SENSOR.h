/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: EW_SENSOR
//!	Generated Date	: Fri, 7, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/EW_SENSOR.h
*********************************************************************/

#ifndef EW_SENSOR_H
#define EW_SENSOR_H

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

//## class EW_SENSOR
class EW_SENSOR : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEW_SENSOR;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EW_SENSOR(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~EW_SENSOR();
    
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
    
    // EW_On:
    //## statechart_method
    inline bool EW_On_IN() const;
    
    // EW_Off:
    //## statechart_method
    inline bool EW_Off_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;

protected :

//#[ ignore
    enum EW_SENSOR_Enum {
        OMNonState = 0,
        On = 1,
        EW_On = 2,
        EW_Off = 3,
        Off = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int On_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEW_SENSOR : virtual public AOMInstance {
    DECLARE_REACTIVE_META(EW_SENSOR, OMAnimatedEW_SENSOR)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EW_On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EW_Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool EW_SENSOR::rootState_IN() const {
    return true;
}

inline bool EW_SENSOR::On_IN() const {
    return rootState_subState == On;
}

inline bool EW_SENSOR::EW_On_IN() const {
    return On_subState == EW_On;
}

inline bool EW_SENSOR::EW_Off_IN() const {
    return On_subState == EW_Off;
}

inline bool EW_SENSOR::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/EW_SENSOR.h
*********************************************************************/
