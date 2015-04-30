/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: Emergency
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Emergency.h
*********************************************************************/

#ifndef Emergency_H
#define Emergency_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsController
class Controller;

//## package Default

//## class Emergency
class Emergency : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmergency;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Emergency(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Emergency();
    
    ////    Operations    ////
    
    //## operation Em_check(bool)
    void Em_check(bool p);
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getEm_flag() const;
    
    //## auto_generated
    void setEm_flag(bool p_Em_flag);
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool Em_flag;		//## attribute Em_flag
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
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
    
    // NSopen:
    //## statechart_method
    inline bool NSopen_IN() const;
    
    // EWopen:
    //## statechart_method
    inline bool EWopen_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;

protected :

//#[ ignore
    enum Emergency_Enum {
        OMNonState = 0,
        On = 1,
        NSopen = 2,
        EWopen = 3,
        Off = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int On_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmergency : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Emergency, OMAnimatedEmergency)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NSopen_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EWopen_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Emergency::rootState_IN() const {
    return true;
}

inline bool Emergency::On_IN() const {
    return rootState_subState == On;
}

inline bool Emergency::NSopen_IN() const {
    return On_subState == NSopen;
}

inline bool Emergency::EWopen_IN() const {
    return On_subState == EWopen;
}

inline bool Emergency::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Emergency.h
*********************************************************************/
