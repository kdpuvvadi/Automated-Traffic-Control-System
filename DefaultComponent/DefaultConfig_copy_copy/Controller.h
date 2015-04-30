/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: Controller
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

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
//## package Default

//## class Controller
class Controller : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Controller(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Controller();
    
    ////    Operations    ////
    
    //## operation Reduce_time()
    void Reduce_time();
    
    //## operation Reset()
    void Reset();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getEW_GREEN() const;
    
    //## auto_generated
    void setEW_GREEN(int p_EW_GREEN);
    
    //## auto_generated
    int getEW_GREENTIME() const;
    
    //## auto_generated
    void setEW_GREENTIME(int p_EW_GREENTIME);
    
    //## auto_generated
    int getEW_ORANGE() const;
    
    //## auto_generated
    void setEW_ORANGE(int p_EW_ORANGE);
    
    //## auto_generated
    int getEW_ORANGETIME() const;
    
    //## auto_generated
    void setEW_ORANGETIME(int p_EW_ORANGETIME);
    
    //## auto_generated
    int getEW_RED() const;
    
    //## auto_generated
    void setEW_RED(int p_EW_RED);
    
    //## auto_generated
    int getEW_REDTIME() const;
    
    //## auto_generated
    void setEW_REDTIME(int p_EW_REDTIME);
    
    //## auto_generated
    int getLEFT_GREEN() const;
    
    //## auto_generated
    void setLEFT_GREEN(int p_LEFT_GREEN);
    
    //## auto_generated
    int getNS_GREEN() const;
    
    //## auto_generated
    void setNS_GREEN(int p_NS_GREEN);
    
    //## auto_generated
    int getNS_GREENTIME() const;
    
    //## auto_generated
    void setNS_GREENTIME(int p_NS_GREENTIME);
    
    //## auto_generated
    int getNS_ORANGE() const;
    
    //## auto_generated
    void setNS_ORANGE(int p_NS_ORANGE);
    
    //## auto_generated
    int getNS_ORANGETIME() const;
    
    //## auto_generated
    void setNS_ORANGETIME(int p_NS_ORANGETIME);
    
    //## auto_generated
    int getNS_RED() const;
    
    //## auto_generated
    void setNS_RED(int p_NS_RED);
    
    //## auto_generated
    int getNS_REDTIME() const;
    
    //## auto_generated
    void setNS_REDTIME(int p_NS_REDTIME);
    
    //## auto_generated
    bool getX() const;
    
    //## auto_generated
    void setX(bool p_x);
    
    //## auto_generated
    bool getY() const;
    
    //## auto_generated
    void setY(bool p_y);
    
    //## auto_generated
    bool getZ() const;
    
    //## auto_generated
    void setZ(bool p_z);
    
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
    
    int EW_GREEN;		//## attribute EW_GREEN
    
    int EW_GREENTIME;		//## attribute EW_GREENTIME
    
    int EW_ORANGE;		//## attribute EW_ORANGE
    
    int EW_ORANGETIME;		//## attribute EW_ORANGETIME
    
    int EW_RED;		//## attribute EW_RED
    
    int EW_REDTIME;		//## attribute EW_REDTIME
    
    int LEFT_GREEN;		//## attribute LEFT_GREEN
    
    int NS_GREEN;		//## attribute NS_GREEN
    
    int NS_GREENTIME;		//## attribute NS_GREENTIME
    
    int NS_ORANGE;		//## attribute NS_ORANGE
    
    int NS_ORANGETIME;		//## attribute NS_ORANGETIME
    
    int NS_RED;		//## attribute NS_RED
    
    int NS_REDTIME;		//## attribute NS_REDTIME
    
    bool x;		//## attribute x
    
    bool y;		//## attribute y
    
    bool z;		//## attribute z
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    char* getEW_MSG() const;
    
    //## auto_generated
    void setEW_MSG(char* p_EW_MSG);
    
    //## auto_generated
    char* getNS_MSG() const;
    
    //## auto_generated
    void setNS_MSG(char* p_NS_MSG);

protected :

    char* EW_MSG;		//## attribute EW_MSG
    
    char* NS_MSG;		//## attribute NS_MSG

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
    IOxfReactive::TakeEventStatus On_processEvent();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent();
    
    // Timing:
    //## statechart_method
    inline bool Timing_IN() const;
    
    //## statechart_method
    void Timing_entDef();
    
    //## statechart_method
    void Timing_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Timing_processEvent();
    
    // Time:
    //## statechart_method
    inline bool Time_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    void state_10_exit();
    
    //## statechart_method
    void state_10_entHist();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // On_111:
    //## statechart_method
    inline bool On_111_IN() const;
    
    // On_110:
    //## statechart_method
    inline bool On_110_IN() const;
    
    // On_100:
    //## statechart_method
    inline bool On_100_IN() const;
    
    // On_011:
    //## statechart_method
    inline bool On_011_IN() const;
    
    // On_001:
    //## statechart_method
    inline bool On_001_IN() const;
    
    // On_000:
    //## statechart_method
    inline bool On_000_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    // Manual_mode:
    //## statechart_method
    inline bool Manual_mode_IN() const;
    
    // Emerg_ns:
    //## statechart_method
    inline bool Emerg_ns_IN() const;
    
    // Emerg_ew:
    //## statechart_method
    inline bool Emerg_ew_IN() const;

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        On = 1,
        Timing = 2,
        Time = 3,
        state_10 = 4,
        On_111 = 5,
        On_110 = 6,
        On_100 = 7,
        On_011 = 8,
        On_001 = 9,
        On_000 = 10,
        Off = 11,
        Manual_mode = 12,
        Emerg_ns = 13,
        Emerg_ew = 14
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Timing_subState;
    
    int Timing_active;
    
    IOxfTimeout* Timing_timeout;
    
    int state_10_subState;
    
    int state_10_active;
    
    int state_10_lastState;
    
    IOxfTimeout* state_10_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Timing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Time_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_111_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_110_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_100_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_011_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_001_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_000_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Manual_mode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Emerg_ns_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Emerg_ew_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::On_IN() const {
    return rootState_subState == On;
}

inline bool Controller::Timing_IN() const {
    return On_IN();
}

inline bool Controller::Time_IN() const {
    return Timing_subState == Time;
}

inline bool Controller::state_10_IN() const {
    return On_IN();
}

inline bool Controller::On_111_IN() const {
    return state_10_subState == On_111;
}

inline bool Controller::On_110_IN() const {
    return state_10_subState == On_110;
}

inline bool Controller::On_100_IN() const {
    return state_10_subState == On_100;
}

inline bool Controller::On_011_IN() const {
    return state_10_subState == On_011;
}

inline bool Controller::On_001_IN() const {
    return state_10_subState == On_001;
}

inline bool Controller::On_000_IN() const {
    return state_10_subState == On_000;
}

inline bool Controller::Off_IN() const {
    return rootState_subState == Off;
}

inline bool Controller::Manual_mode_IN() const {
    return rootState_subState == Manual_mode;
}

inline bool Controller::Emerg_ns_IN() const {
    return rootState_subState == Emerg_ns;
}

inline bool Controller::Emerg_ew_IN() const {
    return rootState_subState == Emerg_ew;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Controller.h
*********************************************************************/
