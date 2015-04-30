/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: Normal
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Normal.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Normal.h"
//#[ ignore
#define Default_Normal_Normal_SERIALIZE OM_NO_OP

#define Default_Normal_Reset_SERIALIZE OM_NO_OP

#define Default_Normal_dec_time_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm1_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm2_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm3_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm4_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm5_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm6_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm7_SERIALIZE OM_NO_OP

#define Default_Normal_is_Norm8_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Normal
Normal::Normal(IOxfActive* theActiveContext) : E_green(0), E_orange(0), E_red(0), E_time(0), N_green(0), N_orange(0), N_red(0), N_time(0), S_green(0), S_orange(0), S_red(0), S_time(0), TURN_LEFT(1), W_green(0), W_orange(0), W_red(0), W_time(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Normal, Normal(), 0, Default_Normal_Normal_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Normal::~Normal() {
    NOTIFY_DESTRUCTOR(~Normal, true);
    cancelTimeouts();
}

void Normal::Reset() {
    NOTIFY_OPERATION(Reset, Reset(), 0, Default_Normal_Reset_SERIALIZE);
    //#[ operation Reset()
    N_red=0;
    N_green=0;     
    N_orange=0;
    S_red=0;
    S_green=0;     
    S_orange=0;
    E_red=0;
    E_green=0;     
    E_orange=0;
    W_red=0;
    W_green=0;     
    W_orange=0;
    
    //#]
}

bool Normal::dec_time() {
    NOTIFY_OPERATION(dec_time, dec_time(), 0, Default_Normal_dec_time_SERIALIZE);
    //#[ operation dec_time()
    N_time--;
    S_time--;
    E_time--;
    W_time--;
    
    //#]
}

bool Normal::is_Norm1() {
    NOTIFY_OPERATION(is_Norm1, is_Norm1(), 0, Default_Normal_is_Norm1_SERIALIZE);
    //#[ operation is_Norm1()
    if(N_time==5 && E_time==0 && S_time==10 && W_time==0)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm2() {
    NOTIFY_OPERATION(is_Norm2, is_Norm2(), 0, Default_Normal_is_Norm2_SERIALIZE);
    //#[ operation is_Norm2()
    if(N_time==0 && E_time==0 && S_time==5 && W_time==15)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm3() {
    NOTIFY_OPERATION(is_Norm3, is_Norm3(), 0, Default_Normal_is_Norm3_SERIALIZE);
    //#[ operation is_Norm3()
    if(N_time==0 && E_time==5 && S_time==0 && W_time==10)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm4() {
    NOTIFY_OPERATION(is_Norm4, is_Norm4(), 0, Default_Normal_is_Norm4_SERIALIZE);
    //#[ operation is_Norm4()
    if(N_time==15 && E_time==0 && S_time==0 && W_time==5)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm5() {
    NOTIFY_OPERATION(is_Norm5, is_Norm5(), 0, Default_Normal_is_Norm5_SERIALIZE);
    //#[ operation is_Norm5()
    if(N_time==10 && E_time==0 && S_time==5 && W_time==0)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm6() {
    NOTIFY_OPERATION(is_Norm6, is_Norm6(), 0, Default_Normal_is_Norm6_SERIALIZE);
    //#[ operation is_Norm6()
    if(N_time==5 && E_time==15 && S_time==0 && W_time==0)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm7() {
    NOTIFY_OPERATION(is_Norm7, is_Norm7(), 0, Default_Normal_is_Norm7_SERIALIZE);
    //#[ operation is_Norm7()
    if(N_time==0 && E_time==10 && S_time==0 && W_time==5)
    return true;
    else
    return false;
    //#]
}

bool Normal::is_Norm8() {
    NOTIFY_OPERATION(is_Norm8, is_Norm8(), 0, Default_Normal_is_Norm8_SERIALIZE);
    //#[ operation is_Norm8()
    if(N_time==0 && E_time==5 && S_time==15 && W_time==0)
    return true;
    else
    return false;
    //#]
}

int Normal::getE_green() const {
    return E_green;
}

void Normal::setE_green(int p_E_green) {
    E_green = p_E_green;
}

int Normal::getE_orange() const {
    return E_orange;
}

void Normal::setE_orange(int p_E_orange) {
    E_orange = p_E_orange;
}

int Normal::getE_red() const {
    return E_red;
}

void Normal::setE_red(int p_E_red) {
    E_red = p_E_red;
}

int Normal::getE_time() const {
    return E_time;
}

void Normal::setE_time(int p_E_time) {
    E_time = p_E_time;
}

int Normal::getN_green() const {
    return N_green;
}

void Normal::setN_green(int p_N_green) {
    N_green = p_N_green;
}

int Normal::getN_orange() const {
    return N_orange;
}

void Normal::setN_orange(int p_N_orange) {
    N_orange = p_N_orange;
}

int Normal::getN_red() const {
    return N_red;
}

void Normal::setN_red(int p_N_red) {
    N_red = p_N_red;
}

int Normal::getN_time() const {
    return N_time;
}

void Normal::setN_time(int p_N_time) {
    N_time = p_N_time;
}

int Normal::getS_green() const {
    return S_green;
}

void Normal::setS_green(int p_S_green) {
    S_green = p_S_green;
}

int Normal::getS_orange() const {
    return S_orange;
}

void Normal::setS_orange(int p_S_orange) {
    S_orange = p_S_orange;
}

int Normal::getS_red() const {
    return S_red;
}

void Normal::setS_red(int p_S_red) {
    S_red = p_S_red;
}

int Normal::getS_time() const {
    return S_time;
}

void Normal::setS_time(int p_S_time) {
    S_time = p_S_time;
}

int Normal::getW_green() const {
    return W_green;
}

void Normal::setW_green(int p_W_green) {
    W_green = p_W_green;
}

int Normal::getW_orange() const {
    return W_orange;
}

void Normal::setW_orange(int p_W_orange) {
    W_orange = p_W_orange;
}

int Normal::getW_red() const {
    return W_red;
}

void Normal::setW_red(int p_W_red) {
    W_red = p_W_red;
}

int Normal::getW_time() const {
    return W_time;
}

void Normal::setW_time(int p_W_time) {
    W_time = p_W_time;
}

int Normal::getTime() const {
    return time;
}

void Normal::setTime(int p_time) {
    time = p_time;
}

bool Normal::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Normal::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
    On_timeout = NULL;
}

void Normal::cancelTimeouts() {
    if(On_timeout != NULL)
        {
            On_timeout->cancel();
            On_timeout = NULL;
        }
}

bool Normal::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(On_timeout == arg)
        {
            On_timeout = NULL;
            res = true;
        }
    return res;
}

int Normal::getTURN_LEFT() const {
    return TURN_LEFT;
}

void Normal::setTURN_LEFT(int p_TURN_LEFT) {
    TURN_LEFT = p_TURN_LEFT;
}

void Normal::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("8");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        //#[ state ROOT.Off.(Entry) 
        Reset();
        N_time=0;
        S_time=0;
        E_time=0;
        W_time=0;
        //#]
        NOTIFY_TRANSITION_TERMINATED("8");
    }
}

IOxfReactive::TakeEventStatus Normal::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case state_1:
        {
            res = state_1_handleEvent();
        }
        break;
        case state_2:
        {
            res = state_2_handleEvent();
        }
        break;
        case state_3:
        {
            res = state_3_handleEvent();
        }
        break;
        case state_4:
        {
            res = state_4_handleEvent();
        }
        break;
        case state_5:
        {
            res = state_5_handleEvent();
        }
        break;
        case state_6:
        {
            res = state_6_handleEvent();
        }
        break;
        case state_7:
        {
            res = state_7_handleEvent();
        }
        break;
        case state_8:
        {
            res = state_8_handleEvent();
        }
        break;
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_NormON_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Normal::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    NOTIFY_TRANSITION_STARTED("11");
    //#[ transition 11 
    N_time=10;
    E_time=5;
    S_time=15;
    W_time=5;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.On.state_1");
    pushNullTransition();
    On_subState = state_1;
    rootState_active = state_1;
    //#[ state ROOT.On.state_1.(Entry) 
    Reset();
    N_green=1;
    S_red=1;
    E_red=1;
    W_orange=1;
    
    //#]
    On_timeout = scheduleTimeout(1000, "ROOT.On.state_1");
    NOTIFY_TRANSITION_TERMINATED("11");
}

void Normal::On_exit() {
    switch (On_subState) {
        case state_1:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_1.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_1");
        }
        break;
        case state_2:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_2.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_2");
        }
        break;
        case state_3:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_3.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_3");
        }
        break;
        case state_4:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_4.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_4");
        }
        break;
        case state_5:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_5.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_5");
        }
        break;
        case state_6:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_6.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_6");
        }
        break;
        case state_7:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_7.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_7");
        }
        break;
        case state_8:
        {
            popNullTransition();
            if(On_timeout != NULL)
                {
                    On_timeout->cancel();
                    On_timeout = NULL;
                }
            //#[ state ROOT.On.state_8.(Exit) 
            dec_time();
            //#]
            NOTIFY_STATE_EXITED("ROOT.On.state_8");
        }
        break;
        default:
            break;
    }
    On_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.On");
}

IOxfReactive::TakeEventStatus Normal::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_NormOFF_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            //#[ state ROOT.Off.(Entry) 
            Reset();
            N_time=0;
            S_time=0;
            E_time=0;
            W_time=0;
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_8_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_8.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_8");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_8");
                    pushNullTransition();
                    On_subState = state_8;
                    rootState_active = state_8;
                    //#[ state ROOT.On.state_8.(Entry) 
                    Reset();
                    N_orange=1;
                    S_red=1;
                    E_red=1;
                    W_green=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_8");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 7 
            if(is_Norm8())
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_8.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_8");
                    //#[ transition 7 
                    N_time=10;
                    E_time=5;
                    S_time=15;
                    W_time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_1");
                    pushNullTransition();
                    On_subState = state_1;
                    rootState_active = state_1;
                    //#[ state ROOT.On.state_1.(Entry) 
                    Reset();
                    N_green=1;
                    S_red=1;
                    E_red=1;
                    W_orange=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_1");
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_7_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_7.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_7");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_7");
                    pushNullTransition();
                    On_subState = state_7;
                    rootState_active = state_7;
                    //#[ state ROOT.On.state_7.(Entry) 
                    Reset();
                    N_red=1;
                    S_orange=1;
                    E_red=1;
                    W_green=1;
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_7");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 6 
            if(is_Norm7())
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_7.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_7");
                    //#[ transition 6 
                    N_time=5;
                    E_time=10;
                    S_time=20;
                    W_time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_8");
                    pushNullTransition();
                    On_subState = state_8;
                    rootState_active = state_8;
                    //#[ state ROOT.On.state_8.(Entry) 
                    Reset();
                    N_orange=1;
                    S_red=1;
                    E_red=1;
                    W_green=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_8");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_6_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_6.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_6");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_6");
                    pushNullTransition();
                    On_subState = state_6;
                    rootState_active = state_6;
                    //#[ state ROOT.On.state_6.(Entry) 
                    Reset();
                    N_red=1;
                    S_green=1;
                    E_red=1;
                    W_orange=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_6");
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 5 
            if(is_Norm6())
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_6.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_6");
                    //#[ transition 5 
                    N_time=5;
                    E_time=15;
                    S_time=5;
                    W_time=10;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_7");
                    pushNullTransition();
                    On_subState = state_7;
                    rootState_active = state_7;
                    //#[ state ROOT.On.state_7.(Entry) 
                    Reset();
                    N_red=1;
                    S_orange=1;
                    E_red=1;
                    W_green=1;
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_7");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_5_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_5.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_5");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_5");
                    pushNullTransition();
                    On_subState = state_5;
                    rootState_active = state_5;
                    //#[ state ROOT.On.state_5.(Entry) 
                    Reset();
                    N_red=1;
                    S_green=1;
                    E_orange=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_5");
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 4 
            if(is_Norm5())
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_5.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_5");
                    //#[ transition 4 
                    N_time=10;
                    E_time=20;
                    S_time=5;
                    W_time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_6");
                    pushNullTransition();
                    On_subState = state_6;
                    rootState_active = state_6;
                    //#[ state ROOT.On.state_6.(Entry) 
                    Reset();
                    N_red=1;
                    S_green=1;
                    E_red=1;
                    W_orange=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_6");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_4_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_4.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_4");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_4");
                    pushNullTransition();
                    On_subState = state_4;
                    rootState_active = state_4;
                    //#[ state ROOT.On.state_4.(Entry) 
                    Reset();
                    N_red=1;
                    S_orange=1;
                    E_green=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_4");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 3 
            if(is_Norm4())
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_4.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_4");
                    //#[ transition 3 
                    N_time=15;
                    E_time=5;
                    S_time=10;
                    W_time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_5");
                    pushNullTransition();
                    On_subState = state_5;
                    rootState_active = state_5;
                    //#[ state ROOT.On.state_5.(Entry) 
                    Reset();
                    N_red=1;
                    S_green=1;
                    E_orange=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_5");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_3_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_3.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_3");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_3");
                    pushNullTransition();
                    On_subState = state_3;
                    rootState_active = state_3;
                    //#[ state ROOT.On.state_3.(Entry) 
                    Reset();
                    N_orange=1;
                    S_red=1;
                    E_green=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_3");
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 2 
            if(is_Norm3())
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_3.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_3");
                    //#[ transition 2 
                    N_time=20;
                    E_time=5;
                    S_time=5;
                    W_time=10;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_4");
                    pushNullTransition();
                    On_subState = state_4;
                    rootState_active = state_4;
                    //#[ state ROOT.On.state_4.(Entry) 
                    Reset();
                    N_red=1;
                    S_orange=1;
                    E_green=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_4");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_2_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_2.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_2");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_2");
                    pushNullTransition();
                    On_subState = state_2;
                    rootState_active = state_2;
                    //#[ state ROOT.On.state_2.(Entry) 
                    Reset();
                    N_green=1;
                    S_red=1;
                    E_orange=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_2");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 1 
            if(is_Norm2())
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_2.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_2");
                    //#[ transition 1 
                    N_time=5;
                    E_time=10;
                    S_time=5;
                    W_time=15;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_3");
                    pushNullTransition();
                    On_subState = state_3;
                    rootState_active = state_3;
                    //#[ state ROOT.On.state_3.(Entry) 
                    Reset();
                    N_orange=1;
                    S_red=1;
                    E_green=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_3");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Normal::state_1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_1.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_1");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_1");
                    pushNullTransition();
                    On_subState = state_1;
                    rootState_active = state_1;
                    //#[ state ROOT.On.state_1.(Entry) 
                    Reset();
                    N_green=1;
                    S_red=1;
                    E_red=1;
                    W_orange=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_1");
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 0 
            if(is_Norm1())
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    popNullTransition();
                    if(On_timeout != NULL)
                        {
                            On_timeout->cancel();
                            On_timeout = NULL;
                        }
                    //#[ state ROOT.On.state_1.(Exit) 
                    dec_time();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On.state_1");
                    //#[ transition 0 
                    N_time=5;
                    E_time=5;
                    S_time=10;
                    W_time=20;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.state_2");
                    pushNullTransition();
                    On_subState = state_2;
                    rootState_active = state_2;
                    //#[ state ROOT.On.state_2.(Entry) 
                    Reset();
                    N_green=1;
                    S_red=1;
                    E_orange=1;
                    W_red=1;
                    
                    //#]
                    On_timeout = scheduleTimeout(1000, "ROOT.On.state_2");
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNormal::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("N_red", x2String(myReal->N_red));
    aomsAttributes->addAttribute("S_red", x2String(myReal->S_red));
    aomsAttributes->addAttribute("E_red", x2String(myReal->E_red));
    aomsAttributes->addAttribute("W_red", x2String(myReal->W_red));
    aomsAttributes->addAttribute("N_orange", x2String(myReal->N_orange));
    aomsAttributes->addAttribute("S_orange", x2String(myReal->S_orange));
    aomsAttributes->addAttribute("E_orange", x2String(myReal->E_orange));
    aomsAttributes->addAttribute("W_orange", x2String(myReal->W_orange));
    aomsAttributes->addAttribute("N_green", x2String(myReal->N_green));
    aomsAttributes->addAttribute("S_green", x2String(myReal->S_green));
    aomsAttributes->addAttribute("E_green", x2String(myReal->E_green));
    aomsAttributes->addAttribute("W_green", x2String(myReal->W_green));
    aomsAttributes->addAttribute("N_time", x2String(myReal->N_time));
    aomsAttributes->addAttribute("S_time", x2String(myReal->S_time));
    aomsAttributes->addAttribute("E_time", x2String(myReal->E_time));
    aomsAttributes->addAttribute("W_time", x2String(myReal->W_time));
    aomsAttributes->addAttribute("TURN_LEFT", x2String(myReal->TURN_LEFT));
}

void OMAnimatedNormal::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Normal::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case Normal::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNormal::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case Normal::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        case Normal::state_2:
        {
            state_2_serializeStates(aomsState);
        }
        break;
        case Normal::state_3:
        {
            state_3_serializeStates(aomsState);
        }
        break;
        case Normal::state_4:
        {
            state_4_serializeStates(aomsState);
        }
        break;
        case Normal::state_5:
        {
            state_5_serializeStates(aomsState);
        }
        break;
        case Normal::state_6:
        {
            state_6_serializeStates(aomsState);
        }
        break;
        case Normal::state_7:
        {
            state_7_serializeStates(aomsState);
        }
        break;
        case Normal::state_8:
        {
            state_8_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNormal::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_8");
}

void OMAnimatedNormal::state_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_7");
}

void OMAnimatedNormal::state_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_6");
}

void OMAnimatedNormal::state_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_5");
}

void OMAnimatedNormal::state_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_4");
}

void OMAnimatedNormal::state_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_3");
}

void OMAnimatedNormal::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_2");
}

void OMAnimatedNormal::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_1");
}

void OMAnimatedNormal::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Normal, Default, Default, false, OMAnimatedNormal)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Normal.cpp
*********************************************************************/
