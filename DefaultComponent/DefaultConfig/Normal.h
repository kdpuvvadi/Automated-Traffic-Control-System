/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Normal
//!	Generated Date	: Fri, 14, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Normal.h
*********************************************************************/

#ifndef Normal_H
#define Normal_H

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

//## class Normal
class Normal : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNormal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Normal(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Normal();
    
    ////    Operations    ////
    
    //## operation Reset()
    void Reset();
    
    //## operation dec_time()
    bool dec_time();
    
    //## operation is_Norm1()
    bool is_Norm1();
    
    //## operation is_Norm2()
    bool is_Norm2();
    
    //## operation is_Norm3()
    bool is_Norm3();
    
    //## operation is_Norm4()
    bool is_Norm4();
    
    //## operation is_Norm5()
    bool is_Norm5();
    
    //## operation is_Norm6()
    bool is_Norm6();
    
    //## operation is_Norm7()
    bool is_Norm7();
    
    //## operation is_Norm8()
    bool is_Norm8();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getE_green() const;
    
    //## auto_generated
    void setE_green(int p_E_green);
    
    //## auto_generated
    int getE_orange() const;
    
    //## auto_generated
    void setE_orange(int p_E_orange);
    
    //## auto_generated
    int getE_red() const;
    
    //## auto_generated
    void setE_red(int p_E_red);
    
    //## auto_generated
    int getE_time() const;
    
    //## auto_generated
    void setE_time(int p_E_time);
    
    //## auto_generated
    int getN_green() const;
    
    //## auto_generated
    void setN_green(int p_N_green);
    
    //## auto_generated
    int getN_orange() const;
    
    //## auto_generated
    void setN_orange(int p_N_orange);
    
    //## auto_generated
    int getN_red() const;
    
    //## auto_generated
    void setN_red(int p_N_red);
    
    //## auto_generated
    int getN_time() const;
    
    //## auto_generated
    void setN_time(int p_N_time);
    
    //## auto_generated
    int getS_green() const;
    
    //## auto_generated
    void setS_green(int p_S_green);
    
    //## auto_generated
    int getS_orange() const;
    
    //## auto_generated
    void setS_orange(int p_S_orange);
    
    //## auto_generated
    int getS_red() const;
    
    //## auto_generated
    void setS_red(int p_S_red);
    
    //## auto_generated
    int getS_time() const;
    
    //## auto_generated
    void setS_time(int p_S_time);
    
    //## auto_generated
    int getW_green() const;
    
    //## auto_generated
    void setW_green(int p_W_green);
    
    //## auto_generated
    int getW_orange() const;
    
    //## auto_generated
    void setW_orange(int p_W_orange);
    
    //## auto_generated
    int getW_red() const;
    
    //## auto_generated
    void setW_red(int p_W_red);
    
    //## auto_generated
    int getW_time() const;
    
    //## auto_generated
    void setW_time(int p_W_time);
    
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
    
    int E_green;		//## attribute E_green
    
    int E_orange;		//## attribute E_orange
    
    int E_red;		//## attribute E_red
    
    int E_time;		//## attribute E_time
    
    int N_green;		//## attribute N_green
    
    int N_orange;		//## attribute N_orange
    
    int N_red;		//## attribute N_red
    
    int N_time;		//## attribute N_time
    
    int S_green;		//## attribute S_green
    
    int S_orange;		//## attribute S_orange
    
    int S_red;		//## attribute S_red
    
    int S_time;		//## attribute S_time
    
    int W_green;		//## attribute W_green
    
    int W_orange;		//## attribute W_orange
    
    int W_red;		//## attribute W_red
    
    int W_time;		//## attribute W_time
    
    int time;		//## attribute time
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    int getTURN_LEFT() const;
    
    //## auto_generated
    void setTURN_LEFT(int p_TURN_LEFT);

protected :

    int TURN_LEFT;		//## attribute TURN_LEFT

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
    void On_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent();
    
    // state_8:
    //## statechart_method
    inline bool state_8_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_8_handleEvent();
    
    // state_7:
    //## statechart_method
    inline bool state_7_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_7_handleEvent();
    
    // state_6:
    //## statechart_method
    inline bool state_6_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_6_handleEvent();
    
    // state_5:
    //## statechart_method
    inline bool state_5_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_handleEvent();
    
    // state_4:
    //## statechart_method
    inline bool state_4_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_handleEvent();
    
    // state_3:
    //## statechart_method
    inline bool state_3_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_3_handleEvent();
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_handleEvent();
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_handleEvent();
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;

protected :

//#[ ignore
    enum Normal_Enum {
        OMNonState = 0,
        On = 1,
        state_8 = 2,
        state_7 = 3,
        state_6 = 4,
        state_5 = 5,
        state_4 = 6,
        state_3 = 7,
        state_2 = 8,
        state_1 = 9,
        Off = 10
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int On_subState;
    
    IOxfTimeout* On_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNormal : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Normal, OMAnimatedNormal)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Normal::rootState_IN() const {
    return true;
}

inline bool Normal::On_IN() const {
    return rootState_subState == On;
}

inline bool Normal::state_8_IN() const {
    return On_subState == state_8;
}

inline bool Normal::state_7_IN() const {
    return On_subState == state_7;
}

inline bool Normal::state_6_IN() const {
    return On_subState == state_6;
}

inline bool Normal::state_5_IN() const {
    return On_subState == state_5;
}

inline bool Normal::state_4_IN() const {
    return On_subState == state_4;
}

inline bool Normal::state_3_IN() const {
    return On_subState == state_3;
}

inline bool Normal::state_2_IN() const {
    return On_subState == state_2;
}

inline bool Normal::state_1_IN() const {
    return On_subState == state_1;
}

inline bool Normal::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Normal.h
*********************************************************************/
