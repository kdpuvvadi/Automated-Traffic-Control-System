/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Thu, 13, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Controller_Controller_SERIALIZE OM_NO_OP

#define Default_Controller_Reduce_time_SERIALIZE OM_NO_OP

#define Default_Controller_Reset_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Controller
Controller::Controller(IOxfActive* theActiveContext) : EW_GREEN(0), EW_GREENTIME(0), EW_MSG(" "), EW_ORANGE(0), EW_ORANGETIME(0), EW_RED(0), EW_REDTIME(0), LEFT_GREEN(1), NS_GREEN(0), NS_GREENTIME(0), NS_MSG(" "), NS_ORANGE(0), NS_ORANGETIME(0), NS_RED(0), NS_REDTIME(0), x(false), y(false), z(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Controller, Controller(), 0, Default_Controller_Controller_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Controller::~Controller() {
    NOTIFY_DESTRUCTOR(~Controller, true);
    cancelTimeouts();
}

void Controller::Reduce_time() {
    NOTIFY_OPERATION(Reduce_time, Reduce_time(), 0, Default_Controller_Reduce_time_SERIALIZE);
    //#[ operation Reduce_time()
    if(NS_REDTIME>0)
    NS_REDTIME--;
    if(NS_ORANGETIME>0)
    NS_ORANGETIME--;
    if(NS_GREENTIME>0)
    NS_GREENTIME--;
    if(EW_REDTIME>0)
    EW_REDTIME--;
    if(EW_ORANGETIME>0)
    EW_ORANGETIME--;
    if(EW_GREENTIME>0)
    EW_GREENTIME--;
    //#]
}

void Controller::Reset() {
    NOTIFY_OPERATION(Reset, Reset(), 0, Default_Controller_Reset_SERIALIZE);
    //#[ operation Reset()
    NS_RED=0;
    EW_RED=0; 
    NS_GREEN=0;
    EW_GREEN=0;
    NS_ORANGE=0;
    EW_ORANGE=0;
    
    //#]
}

int Controller::getEW_GREEN() const {
    return EW_GREEN;
}

void Controller::setEW_GREEN(int p_EW_GREEN) {
    EW_GREEN = p_EW_GREEN;
}

int Controller::getEW_GREENTIME() const {
    return EW_GREENTIME;
}

void Controller::setEW_GREENTIME(int p_EW_GREENTIME) {
    EW_GREENTIME = p_EW_GREENTIME;
}

int Controller::getEW_ORANGE() const {
    return EW_ORANGE;
}

void Controller::setEW_ORANGE(int p_EW_ORANGE) {
    EW_ORANGE = p_EW_ORANGE;
}

int Controller::getEW_ORANGETIME() const {
    return EW_ORANGETIME;
}

void Controller::setEW_ORANGETIME(int p_EW_ORANGETIME) {
    EW_ORANGETIME = p_EW_ORANGETIME;
}

int Controller::getEW_RED() const {
    return EW_RED;
}

void Controller::setEW_RED(int p_EW_RED) {
    EW_RED = p_EW_RED;
}

int Controller::getEW_REDTIME() const {
    return EW_REDTIME;
}

void Controller::setEW_REDTIME(int p_EW_REDTIME) {
    EW_REDTIME = p_EW_REDTIME;
}

int Controller::getLEFT_GREEN() const {
    return LEFT_GREEN;
}

void Controller::setLEFT_GREEN(int p_LEFT_GREEN) {
    LEFT_GREEN = p_LEFT_GREEN;
}

int Controller::getNS_GREEN() const {
    return NS_GREEN;
}

void Controller::setNS_GREEN(int p_NS_GREEN) {
    NS_GREEN = p_NS_GREEN;
}

int Controller::getNS_GREENTIME() const {
    return NS_GREENTIME;
}

void Controller::setNS_GREENTIME(int p_NS_GREENTIME) {
    NS_GREENTIME = p_NS_GREENTIME;
}

int Controller::getNS_ORANGE() const {
    return NS_ORANGE;
}

void Controller::setNS_ORANGE(int p_NS_ORANGE) {
    NS_ORANGE = p_NS_ORANGE;
}

int Controller::getNS_ORANGETIME() const {
    return NS_ORANGETIME;
}

void Controller::setNS_ORANGETIME(int p_NS_ORANGETIME) {
    NS_ORANGETIME = p_NS_ORANGETIME;
}

int Controller::getNS_RED() const {
    return NS_RED;
}

void Controller::setNS_RED(int p_NS_RED) {
    NS_RED = p_NS_RED;
}

int Controller::getNS_REDTIME() const {
    return NS_REDTIME;
}

void Controller::setNS_REDTIME(int p_NS_REDTIME) {
    NS_REDTIME = p_NS_REDTIME;
}

bool Controller::getX() const {
    return x;
}

void Controller::setX(bool p_x) {
    x = p_x;
}

bool Controller::getY() const {
    return y;
}

void Controller::setY(bool p_y) {
    y = p_y;
}

bool Controller::getZ() const {
    return z;
}

void Controller::setZ(bool p_z) {
    z = p_z;
}

bool Controller::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Timing_subState = OMNonState;
    Timing_active = OMNonState;
    Timing_timeout = NULL;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_10_lastState = OMNonState;
    state_10_timeout = NULL;
}

void Controller::cancelTimeouts() {
    if(Timing_timeout != NULL)
        {
            Timing_timeout->cancel();
            Timing_timeout = NULL;
        }
    if(state_10_timeout != NULL)
        {
            state_10_timeout->cancel();
            state_10_timeout = NULL;
        }
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Timing_timeout == arg)
        {
            Timing_timeout = NULL;
            res = true;
        }
    if(state_10_timeout == arg)
        {
            state_10_timeout = NULL;
            res = true;
        }
    return res;
}

char* Controller::getEW_MSG() const {
    return EW_MSG;
}

void Controller::setEW_MSG(char* p_EW_MSG) {
    EW_MSG = p_EW_MSG;
}

char* Controller::getNS_MSG() const {
    return NS_MSG;
}

void Controller::setNS_MSG(char* p_NS_MSG) {
    NS_MSG = p_NS_MSG;
}

void Controller::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        //#[ state ROOT.Off.(Entry) 
        Reset();
        NS_REDTIME=0;
        NS_ORANGETIME=0;
        NS_GREENTIME=0;
        EW_REDTIME=0;
        EW_ORANGETIME=0;
        EW_GREENTIME=0;
        NS_MSG=" ";
        EW_MSG=" ";
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_Start_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case On:
        {
            res = On_processEvent();
        }
        break;
        case Manual_mode:
        {
            if(IS_EVENT_TYPE_OF(ev_Manual_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    //#[ state ROOT.Manual_mode.(Exit) 
                    NS_ORANGE=0;
                    EW_ORANGE=0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Manual_mode");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    Timing_entDef();
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10");
                    state_10_entHist();
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        case Emerg_ns:
        {
            if(IS_EVENT_TYPE_OF(ev_EmergNS_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.Emerg_ns");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    Timing_entDef();
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10");
                    state_10_entHist();
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            
        }
        break;
        case Emerg_ew:
        {
            if(IS_EVENT_TYPE_OF(ev_EmergEW_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.Emerg_ew");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    Timing_entDef();
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10");
                    state_10_entHist();
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Controller::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    rootState_active = On;
    state_10_entDef();
    Timing_entDef();
}

void Controller::On_exit() {
    state_10_exit();
    Timing_exit();
    
    NOTIFY_STATE_EXITED("ROOT.On");
}

IOxfReactive::TakeEventStatus Controller::On_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(state_10_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(On))
                {
                    return res;
                }
        }
    if(Timing_processEvent() > 0)
        {
            res = eventConsumed;
            if(!IS_IN(On))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Controller::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_EmergEW_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.Emerg_ew");
            rootState_subState = Emerg_ew;
            rootState_active = Emerg_ew;
            //#[ state ROOT.Emerg_ew.(Entry) 
            Reset();
            NS_RED=1;
            EW_GREEN=1;
            NS_REDTIME=0;
            NS_ORANGETIME=0;
            NS_GREENTIME=0;
            EW_REDTIME=0;
            EW_ORANGETIME=0;
            EW_GREENTIME=0;
            NS_MSG="EMRGNCY";
            EW_MSG="GO FAST";
            //#]
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev_EmergNS_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("14");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.Emerg_ns");
            rootState_subState = Emerg_ns;
            rootState_active = Emerg_ns;
            //#[ state ROOT.Emerg_ns.(Entry) 
            Reset();
            EW_RED=1;
            NS_GREEN=1;
            NS_REDTIME=0;
            NS_ORANGETIME=0;
            NS_GREENTIME=0;
            EW_REDTIME=0;
            EW_ORANGETIME=0;
            EW_GREENTIME=0;
            NS_MSG="GO FAST";
            EW_MSG="EMRGNCY";
            //#]
            NOTIFY_TRANSITION_TERMINATED("14");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev_Manual_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.Manual_mode");
            rootState_subState = Manual_mode;
            rootState_active = Manual_mode;
            //#[ state ROOT.Manual_mode.(Entry) 
            Reset();
            NS_ORANGE=1;
            EW_ORANGE=1;
            NS_MSG="MANUAL";
            EW_MSG="MANUAL";
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev_Stop_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            //#[ state ROOT.Off.(Entry) 
            Reset();
            NS_REDTIME=0;
            NS_ORANGETIME=0;
            NS_GREENTIME=0;
            EW_REDTIME=0;
            EW_ORANGETIME=0;
            EW_GREENTIME=0;
            NS_MSG=" ";
            EW_MSG=" ";
            //#]
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

void Controller::Timing_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On.Timing");
    NOTIFY_TRANSITION_STARTED("12");
    NOTIFY_STATE_ENTERED("ROOT.On.Timing.Time");
    Timing_subState = Time;
    Timing_active = Time;
    Timing_timeout = scheduleTimeout(1000, "ROOT.On.Timing.Time");
    NOTIFY_TRANSITION_TERMINATED("12");
}

void Controller::Timing_exit() {
    if(Timing_subState == Time)
        {
            if(Timing_timeout != NULL)
                {
                    Timing_timeout->cancel();
                    Timing_timeout = NULL;
                }
            //#[ state ROOT.On.Timing.Time.(Exit) 
            Reduce_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.Timing.Time");
        }
    Timing_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.On.Timing");
}

IOxfReactive::TakeEventStatus Controller::Timing_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(Timing_active == Time)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Timing_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("13");
                            if(Timing_timeout != NULL)
                                {
                                    Timing_timeout->cancel();
                                    Timing_timeout = NULL;
                                }
                            //#[ state ROOT.On.Timing.Time.(Exit) 
                            Reduce_time();
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.On.Timing.Time");
                            NOTIFY_STATE_ENTERED("ROOT.On.Timing.Time");
                            Timing_subState = Time;
                            Timing_active = Time;
                            Timing_timeout = scheduleTimeout(1000, "ROOT.On.Timing.Time");
                            NOTIFY_TRANSITION_TERMINATED("13");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void Controller::state_10_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On.state_10");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_000");
    state_10_subState = On_000;
    state_10_active = On_000;
    //#[ state ROOT.On.state_10.On_000.(Entry) 
    if(x==false && y==false && z==false)
    {
    Reset();
    NS_RED=1;
    EW_GREEN=1;
    NS_REDTIME=5;
    EW_GREENTIME=5;
    NS_MSG="  STOP";
    EW_MSG="  GO";
    }
    //#]
    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_000");
    NOTIFY_TRANSITION_TERMINATED("9");
}

void Controller::state_10_exit() {
    state_10_lastState = state_10_subState;
    switch (state_10_subState) {
        case On_000:
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_000");
            state_10_lastState = On_000;
        }
        break;
        case On_001:
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_001");
            state_10_lastState = On_001;
        }
        break;
        case On_011:
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_011");
            state_10_lastState = On_011;
        }
        break;
        case On_100:
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_100");
            state_10_lastState = On_100;
        }
        break;
        case On_110:
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_110");
            state_10_lastState = On_110;
        }
        break;
        case On_111:
        {
            if(state_10_timeout != NULL)
                {
                    state_10_timeout->cancel();
                    state_10_timeout = NULL;
                }
            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_111");
            state_10_lastState = On_111;
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.On.state_10");
}

void Controller::state_10_entHist() {
    if(state_10_lastState != OMNonState)
        {
            state_10_subState = state_10_lastState;
            switch (state_10_subState) {
                case On_000:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_000");
                    state_10_subState = On_000;
                    state_10_active = On_000;
                    //#[ state ROOT.On.state_10.On_000.(Entry) 
                    if(x==false && y==false && z==false)
                    {
                    Reset();
                    NS_RED=1;
                    EW_GREEN=1;
                    NS_REDTIME=5;
                    EW_GREENTIME=5;
                    NS_MSG="  STOP";
                    EW_MSG="  GO";
                    }
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_000");
                }
                break;
                case On_001:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_001");
                    state_10_subState = On_001;
                    state_10_active = On_001;
                    //#[ state ROOT.On.state_10.On_001.(Entry) 
                    if(x==false && y==false && z==true)
                    {
                    Reset();
                    NS_ORANGE=1;
                    EW_ORANGE=1;
                    NS_ORANGETIME=5;
                    EW_ORANGETIME=5;
                    NS_MSG=" READY";
                    EW_MSG="  WAIT";
                    }
                    
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_001");
                }
                break;
                case On_011:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_011");
                    state_10_subState = On_011;
                    state_10_active = On_011;
                    //#[ state ROOT.On.state_10.On_011.(Entry) 
                    if(x==false && y==true && z==true)
                    {
                    Reset();
                    EW_RED=1;
                    NS_GREEN=1;
                    EW_REDTIME=10;
                    NS_GREENTIME=10;
                    EW_MSG="  STOP";
                    NS_MSG="   GO";
                    }
                    
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_011");
                }
                break;
                case On_100:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_100");
                    state_10_subState = On_100;
                    state_10_active = On_100;
                    //#[ state ROOT.On.state_10.On_100.(Entry) 
                    if(x==true && y==false && z==false)
                    {
                    Reset();
                    NS_RED=1;
                    EW_GREEN=1;
                    NS_REDTIME=10;
                    EW_GREENTIME=10;
                    NS_MSG="  STOP";
                    EW_MSG="  GO";
                    }
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_100");
                }
                break;
                case On_110:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_110");
                    state_10_subState = On_110;
                    state_10_active = On_110;
                    //#[ state ROOT.On.state_10.On_110.(Entry) 
                    if(x==true && y==true && z==false)
                    {
                    Reset();
                    NS_ORANGE=1;
                    EW_ORANGE=1;
                    NS_ORANGETIME=5;
                    EW_ORANGETIME=5;
                    NS_MSG="  WAIT";
                    EW_MSG=" READY";
                    }
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_110");
                }
                break;
                case On_111:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_111");
                    state_10_subState = On_111;
                    state_10_active = On_111;
                    //#[ state ROOT.On.state_10.On_111.(Entry) 
                    if(x==true && y==true && z==true)
                    {
                    Reset();
                    EW_RED=1;
                    NS_GREEN=1;
                    EW_REDTIME=5;
                    NS_GREENTIME=5;
                    EW_MSG="  STOP";
                    NS_MSG="   GO";
                    }
                    //#]
                    state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_111");
                }
                break;
                default:
                    break;
            }
        }
    else
        {
            OMNotifier::notifyToOutput("\nInternal Error - No last state in history\n\n");
        }
}

IOxfReactive::TakeEventStatus Controller::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        case On_000:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_000");
                            //#[ transition 3 
                            z=true;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_001");
                            state_10_subState = On_001;
                            state_10_active = On_001;
                            //#[ state ROOT.On.state_10.On_001.(Entry) 
                            if(x==false && y==false && z==true)
                            {
                            Reset();
                            NS_ORANGE=1;
                            EW_ORANGE=1;
                            NS_ORANGETIME=5;
                            EW_ORANGETIME=5;
                            NS_MSG=" READY";
                            EW_MSG="  WAIT";
                            }
                            
                            //#]
                            state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_001");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case On_001:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_001");
                            //#[ transition 4 
                            y=true;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_011");
                            state_10_subState = On_011;
                            state_10_active = On_011;
                            //#[ state ROOT.On.state_10.On_011.(Entry) 
                            if(x==false && y==true && z==true)
                            {
                            Reset();
                            EW_RED=1;
                            NS_GREEN=1;
                            EW_REDTIME=10;
                            NS_GREENTIME=10;
                            EW_MSG="  STOP";
                            NS_MSG="   GO";
                            }
                            
                            //#]
                            state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_011");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case On_011:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_011");
                            //#[ transition 5 
                            x=true;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_111");
                            state_10_subState = On_111;
                            state_10_active = On_111;
                            //#[ state ROOT.On.state_10.On_111.(Entry) 
                            if(x==true && y==true && z==true)
                            {
                            Reset();
                            EW_RED=1;
                            NS_GREEN=1;
                            EW_REDTIME=5;
                            NS_GREENTIME=5;
                            EW_MSG="  STOP";
                            NS_MSG="   GO";
                            }
                            //#]
                            state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_111");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case On_100:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_100");
                            //#[ transition 8 
                            x=false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_000");
                            state_10_subState = On_000;
                            state_10_active = On_000;
                            //#[ state ROOT.On.state_10.On_000.(Entry) 
                            if(x==false && y==false && z==false)
                            {
                            Reset();
                            NS_RED=1;
                            EW_GREEN=1;
                            NS_REDTIME=5;
                            EW_GREENTIME=5;
                            NS_MSG="  STOP";
                            EW_MSG="  GO";
                            }
                            //#]
                            state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_000");
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case On_110:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_110");
                            //#[ transition 7 
                            y=false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_100");
                            state_10_subState = On_100;
                            state_10_active = On_100;
                            //#[ state ROOT.On.state_10.On_100.(Entry) 
                            if(x==true && y==false && z==false)
                            {
                            Reset();
                            NS_RED=1;
                            EW_GREEN=1;
                            NS_REDTIME=10;
                            EW_GREENTIME=10;
                            NS_MSG="  STOP";
                            EW_MSG="  GO";
                            }
                            //#]
                            state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_100");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case On_111:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_10_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            if(state_10_timeout != NULL)
                                {
                                    state_10_timeout->cancel();
                                    state_10_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On.state_10.On_111");
                            //#[ transition 6 
                            z=false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On.state_10.On_110");
                            state_10_subState = On_110;
                            state_10_active = On_110;
                            //#[ state ROOT.On.state_10.On_110.(Entry) 
                            if(x==true && y==true && z==false)
                            {
                            Reset();
                            NS_ORANGE=1;
                            EW_ORANGE=1;
                            NS_ORANGETIME=5;
                            EW_ORANGETIME=5;
                            NS_MSG="  WAIT";
                            EW_MSG=" READY";
                            }
                            //#]
                            state_10_timeout = scheduleTimeout(5000, "ROOT.On.state_10.On_110");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("NS_RED", x2String(myReal->NS_RED));
    aomsAttributes->addAttribute("EW_RED", x2String(myReal->EW_RED));
    aomsAttributes->addAttribute("NS_ORANGE", x2String(myReal->NS_ORANGE));
    aomsAttributes->addAttribute("EW_ORANGE", x2String(myReal->EW_ORANGE));
    aomsAttributes->addAttribute("NS_GREEN", x2String(myReal->NS_GREEN));
    aomsAttributes->addAttribute("EW_GREEN", x2String(myReal->EW_GREEN));
    aomsAttributes->addAttribute("LEFT_GREEN", x2String(myReal->LEFT_GREEN));
    aomsAttributes->addAttribute("x", x2String(myReal->x));
    aomsAttributes->addAttribute("y", x2String(myReal->y));
    aomsAttributes->addAttribute("z", x2String(myReal->z));
    aomsAttributes->addAttribute("NS_REDTIME", x2String(myReal->NS_REDTIME));
    aomsAttributes->addAttribute("NS_ORANGETIME", x2String(myReal->NS_ORANGETIME));
    aomsAttributes->addAttribute("NS_GREENTIME", x2String(myReal->NS_GREENTIME));
    aomsAttributes->addAttribute("EW_REDTIME", x2String(myReal->EW_REDTIME));
    aomsAttributes->addAttribute("EW_ORANGETIME", x2String(myReal->EW_ORANGETIME));
    aomsAttributes->addAttribute("EW_GREENTIME", x2String(myReal->EW_GREENTIME));
    aomsAttributes->addAttribute("NS_MSG", x2String(myReal->NS_MSG));
    aomsAttributes->addAttribute("EW_MSG", x2String(myReal->EW_MSG));
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Controller::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case Controller::Manual_mode:
        {
            Manual_mode_serializeStates(aomsState);
        }
        break;
        case Controller::Emerg_ns:
        {
            Emerg_ns_serializeStates(aomsState);
        }
        break;
        case Controller::Emerg_ew:
        {
            Emerg_ew_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    state_10_serializeStates(aomsState);
    Timing_serializeStates(aomsState);
}

void OMAnimatedController::Timing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.Timing");
    if(myReal->Timing_subState == Controller::Time)
        {
            Time_serializeStates(aomsState);
        }
}

void OMAnimatedController::Time_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.Timing.Time");
}

void OMAnimatedController::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10");
    switch (myReal->state_10_subState) {
        case Controller::On_000:
        {
            On_000_serializeStates(aomsState);
        }
        break;
        case Controller::On_001:
        {
            On_001_serializeStates(aomsState);
        }
        break;
        case Controller::On_011:
        {
            On_011_serializeStates(aomsState);
        }
        break;
        case Controller::On_100:
        {
            On_100_serializeStates(aomsState);
        }
        break;
        case Controller::On_110:
        {
            On_110_serializeStates(aomsState);
        }
        break;
        case Controller::On_111:
        {
            On_111_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::On_111_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10.On_111");
}

void OMAnimatedController::On_110_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10.On_110");
}

void OMAnimatedController::On_100_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10.On_100");
}

void OMAnimatedController::On_011_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10.On_011");
}

void OMAnimatedController::On_001_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10.On_001");
}

void OMAnimatedController::On_000_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_10.On_000");
}

void OMAnimatedController::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedController::Manual_mode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Manual_mode");
}

void OMAnimatedController::Emerg_ns_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Emerg_ns");
}

void OMAnimatedController::Emerg_ew_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Emerg_ew");
}
//#]

IMPLEMENT_REACTIVE_META_P(Controller, Default, Default, false, OMAnimatedController)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/
