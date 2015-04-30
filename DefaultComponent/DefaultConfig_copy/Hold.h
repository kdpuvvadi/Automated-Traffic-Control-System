/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Hold
//!	Generated Date	: Fri, 7, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/Hold.h
*********************************************************************/

#ifndef Hold_H
#define Hold_H

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

//## class Hold
class Hold : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHold;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Hold(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Hold();
    
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
    enum Hold_Enum {
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
class OMAnimatedHold : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Hold, OMAnimatedHold)
    
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

inline bool Hold::rootState_IN() const {
    return true;
}

inline bool Hold::On_IN() const {
    return rootState_subState == On;
}

inline bool Hold::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Hold.h
*********************************************************************/
