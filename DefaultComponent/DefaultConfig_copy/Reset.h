/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Reset
//!	Generated Date	: Sun, 26, Aug 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/Reset.h
*********************************************************************/

#ifndef Reset_H
#define Reset_H

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

//## package Default

//## class Reset
class Reset : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedReset;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Reset(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Reset();
    
    ////    Additional operations    ////
    
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
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

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
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Reset_Enum {
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
class OMAnimatedReset : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Reset, OMAnimatedReset)
    
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

inline bool Reset::rootState_IN() const {
    return true;
}

inline bool Reset::On_IN() const {
    return rootState_subState == On;
}

inline bool Reset::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Reset.h
*********************************************************************/
