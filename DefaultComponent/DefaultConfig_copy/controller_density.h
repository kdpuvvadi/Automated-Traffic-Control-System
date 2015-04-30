/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: controller_density
//!	Generated Date	: Wed, 6, Mar 2013  
	File Path	: DefaultComponent/DefaultConfig_copy/controller_density.h
*********************************************************************/

#ifndef controller_density_H
#define controller_density_H

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
//## package Default

//## class controller_density
class controller_density : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcontroller_density;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    controller_density(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~controller_density();
    
    ////    Operations    ////
    
    //## operation Reset()
    void Reset();
    
    //## operation is_Change1()
    bool is_Change1();
    
    //## operation is_Change2()
    bool is_Change2();
    
    //## operation set_status(bool)
    void set_status(bool n);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getEW_green() const;
    
    //## auto_generated
    void setEW_green(int p_EW_green);
    
    //## auto_generated
    int getEW_orange() const;
    
    //## auto_generated
    void setEW_orange(int p_EW_orange);
    
    //## auto_generated
    int getEW_red() const;
    
    //## auto_generated
    void setEW_red(int p_EW_red);
    
    //## auto_generated
    int getNS_green() const;
    
    //## auto_generated
    void setNS_green(int p_NS_green);
    
    //## auto_generated
    int getNS_orange() const;
    
    //## auto_generated
    void setNS_orange(int p_NS_orange);
    
    //## auto_generated
    int getNS_red() const;
    
    //## auto_generated
    void setNS_red(int p_NS_red);
    
    //## auto_generated
    bool getD() const;
    
    //## auto_generated
    void setD(bool p_d);
    
    //## auto_generated
    int getTime() const;
    
    //## auto_generated
    void setTime(int p_time);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int EW_green;		//## attribute EW_green
    
    int EW_orange;		//## attribute EW_orange
    
    int EW_red;		//## attribute EW_red
    
    int NS_green;		//## attribute NS_green
    
    int NS_orange;		//## attribute NS_orange
    
    int NS_red;		//## attribute NS_red
    
    bool d;		//## attribute d
    
    int time;		//## attribute time
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    int getFree_left() const;
    
    //## auto_generated
    void setFree_left(int p_free_left);

protected :

    int free_left;		//## attribute free_left

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;
    
    //## statechart_method
    void state_2_entDef();
    
    //## statechart_method
    void state_2_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_handleEvent();
    
    // den2_11:
    //## statechart_method
    inline bool den2_11_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den2_11_handleEvent();
    
    // den2_10:
    //## statechart_method
    inline bool den2_10_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den2_10_handleEvent();
    
    // den2_01:
    //## statechart_method
    inline bool den2_01_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den2_01_handleEvent();
    
    // den2_00:
    //## statechart_method
    inline bool den2_00_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den2_00_handleEvent();
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    //## statechart_method
    void state_1_entDef();
    
    //## statechart_method
    void state_1_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_handleEvent();
    
    // den1_11:
    //## statechart_method
    inline bool den1_11_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den1_11_handleEvent();
    
    // den1_10:
    //## statechart_method
    inline bool den1_10_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den1_10_handleEvent();
    
    // den1_01:
    //## statechart_method
    inline bool den1_01_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den1_01_handleEvent();
    
    // den1_00:
    //## statechart_method
    inline bool den1_00_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus den1_00_handleEvent();
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;

protected :

//#[ ignore
    enum controller_density_Enum {
        OMNonState = 0,
        state_2 = 1,
        den2_11 = 2,
        den2_10 = 3,
        den2_01 = 4,
        den2_00 = 5,
        state_1 = 6,
        den1_11 = 7,
        den1_10 = 8,
        den1_01 = 9,
        den1_00 = 10,
        Off = 11
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_2_subState;
    
    IOxfTimeout* state_2_timeout;
    
    int state_1_subState;
    
    IOxfTimeout* state_1_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcontroller_density : virtual public AOMInstance {
    DECLARE_REACTIVE_META(controller_density, OMAnimatedcontroller_density)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den2_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den2_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den2_01_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den2_00_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den1_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den1_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den1_01_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void den1_00_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool controller_density::rootState_IN() const {
    return true;
}

inline bool controller_density::state_2_IN() const {
    return rootState_subState == state_2;
}

inline bool controller_density::den2_11_IN() const {
    return state_2_subState == den2_11;
}

inline bool controller_density::den2_10_IN() const {
    return state_2_subState == den2_10;
}

inline bool controller_density::den2_01_IN() const {
    return state_2_subState == den2_01;
}

inline bool controller_density::den2_00_IN() const {
    return state_2_subState == den2_00;
}

inline bool controller_density::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool controller_density::den1_11_IN() const {
    return state_1_subState == den1_11;
}

inline bool controller_density::den1_10_IN() const {
    return state_1_subState == den1_10;
}

inline bool controller_density::den1_01_IN() const {
    return state_1_subState == den1_01;
}

inline bool controller_density::den1_00_IN() const {
    return state_1_subState == den1_00;
}

inline bool controller_density::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/controller_density.h
*********************************************************************/
