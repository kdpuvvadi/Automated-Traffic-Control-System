/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: controller_density
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\controller_density.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "controller_density.h"
//#[ ignore
#define Default_controller_density_controller_density_SERIALIZE OM_NO_OP

#define Default_controller_density_Reset_SERIALIZE OM_NO_OP

#define Default_controller_density_is_Change1_SERIALIZE OM_NO_OP

#define Default_controller_density_is_Change2_SERIALIZE OM_NO_OP

#define Default_controller_density_set_status_SERIALIZE aomsmethod->addAttribute("n", x2String(n));
//#]

//## package Default

//## class controller_density
controller_density::controller_density(IOxfActive* theActiveContext) : EW_green(0), EW_orange(0), EW_red(0), NS_green(0), NS_orange(0), NS_red(0), d(true), free_left(1) {
    NOTIFY_REACTIVE_CONSTRUCTOR(controller_density, controller_density(), 0, Default_controller_density_controller_density_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

controller_density::~controller_density() {
    NOTIFY_DESTRUCTOR(~controller_density, true);
    cancelTimeouts();
}

void controller_density::Reset() {
    NOTIFY_OPERATION(Reset, Reset(), 0, Default_controller_density_Reset_SERIALIZE);
    //#[ operation Reset()
    NS_red=0;
    NS_orange=0;
    NS_green=0;
    EW_red=0;
    EW_orange=0;
    EW_green=0;
    //#]
}

bool controller_density::is_Change1() {
    NOTIFY_OPERATION(is_Change1, is_Change1(), 0, Default_controller_density_is_Change1_SERIALIZE);
    //#[ operation is_Change1()
    if(time==0)           
    return(true);
    else
    return(false);
    //#]
}

bool controller_density::is_Change2() {
    NOTIFY_OPERATION(is_Change2, is_Change2(), 0, Default_controller_density_is_Change2_SERIALIZE);
    //#[ operation is_Change2()
    if(time==0)           
    return(true);
    else
    return(false);
    //#]
}

void controller_density::set_status(bool n) {
    NOTIFY_OPERATION(set_status, set_status(bool), 1, Default_controller_density_set_status_SERIALIZE);
    //#[ operation set_status(bool)
    d=n;
    //#]
}

int controller_density::getEW_green() const {
    return EW_green;
}

void controller_density::setEW_green(int p_EW_green) {
    EW_green = p_EW_green;
}

int controller_density::getEW_orange() const {
    return EW_orange;
}

void controller_density::setEW_orange(int p_EW_orange) {
    EW_orange = p_EW_orange;
}

int controller_density::getEW_red() const {
    return EW_red;
}

void controller_density::setEW_red(int p_EW_red) {
    EW_red = p_EW_red;
}

int controller_density::getNS_green() const {
    return NS_green;
}

void controller_density::setNS_green(int p_NS_green) {
    NS_green = p_NS_green;
}

int controller_density::getNS_orange() const {
    return NS_orange;
}

void controller_density::setNS_orange(int p_NS_orange) {
    NS_orange = p_NS_orange;
}

int controller_density::getNS_red() const {
    return NS_red;
}

void controller_density::setNS_red(int p_NS_red) {
    NS_red = p_NS_red;
}

bool controller_density::getD() const {
    return d;
}

void controller_density::setD(bool p_d) {
    d = p_d;
}

int controller_density::getTime() const {
    return time;
}

void controller_density::setTime(int p_time) {
    time = p_time;
}

bool controller_density::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void controller_density::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_timeout = NULL;
    state_1_subState = OMNonState;
    state_1_timeout = NULL;
}

void controller_density::cancelTimeouts() {
    if(state_2_timeout != NULL)
        {
            state_2_timeout->cancel();
            state_2_timeout = NULL;
        }
    if(state_1_timeout != NULL)
        {
            state_1_timeout->cancel();
            state_1_timeout = NULL;
        }
}

bool controller_density::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_2_timeout == arg)
        {
            state_2_timeout = NULL;
            res = true;
        }
    if(state_1_timeout == arg)
        {
            state_1_timeout = NULL;
            res = true;
        }
    return res;
}

int controller_density::getFree_left() const {
    return free_left;
}

void controller_density::setFree_left(int p_free_left) {
    free_left = p_free_left;
}

void controller_density::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("10");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        //#[ state ROOT.Off.(Entry) 
        Reset();
        time=0;
        //#]
        NOTIFY_TRANSITION_TERMINATED("10");
    }
}

IOxfReactive::TakeEventStatus controller_density::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_DenON_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    state_1_entDef();
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
        }
        break;
        case den1_00:
        {
            res = den1_00_handleEvent();
        }
        break;
        case den1_01:
        {
            res = den1_01_handleEvent();
        }
        break;
        case den1_11:
        {
            res = den1_11_handleEvent();
        }
        break;
        case den1_10:
        {
            res = den1_10_handleEvent();
        }
        break;
        case den2_00:
        {
            res = den2_00_handleEvent();
        }
        break;
        case den2_01:
        {
            res = den2_01_handleEvent();
        }
        break;
        case den2_11:
        {
            res = den2_11_handleEvent();
        }
        break;
        case den2_10:
        {
            res = den2_10_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void controller_density::state_2_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_2");
    rootState_subState = state_2;
    NOTIFY_TRANSITION_STARTED("1");
    //#[ transition 1 
    time=20;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_00");
    pushNullTransition();
    state_2_subState = den2_00;
    rootState_active = den2_00;
    //#[ state ROOT.state_2.den2_00.(Entry) 
    if(d==false)
    GEN(ev_Den);
    Reset();
    EW_red=1;
    NS_green=1;
    //#]
    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_00");
    NOTIFY_TRANSITION_TERMINATED("1");
}

void controller_density::state_2_exit() {
    switch (state_2_subState) {
        case den2_00:
        {
            popNullTransition();
            if(state_2_timeout != NULL)
                {
                    state_2_timeout->cancel();
                    state_2_timeout = NULL;
                }
            //#[ state ROOT.state_2.den2_00.(Exit) 
            --time;
            is_Change2();
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_2.den2_00");
        }
        break;
        case den2_01:
        {
            popNullTransition();
            if(state_2_timeout != NULL)
                {
                    state_2_timeout->cancel();
                    state_2_timeout = NULL;
                }
            //#[ state ROOT.state_2.den2_01.(Exit) 
            time--;
            is_Change2();
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_2.den2_01");
        }
        break;
        case den2_11:
        {
            popNullTransition();
            if(state_2_timeout != NULL)
                {
                    state_2_timeout->cancel();
                    state_2_timeout = NULL;
                }
            //#[ state ROOT.state_2.den2_11.(Exit) 
            time--;
            is_Change2();
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_2.den2_11");
        }
        break;
        case den2_10:
        {
            popNullTransition();
            if(state_2_timeout != NULL)
                {
                    state_2_timeout->cancel();
                    state_2_timeout = NULL;
                }
            //#[ state ROOT.state_2.den2_10.(Exit) 
            time--;
            is_Change2();
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_2.den2_10");
        }
        break;
        default:
            break;
    }
    state_2_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_2");
}

IOxfReactive::TakeEventStatus controller_density::state_2_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_DenOFF_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("23");
            state_2_exit();
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            //#[ state ROOT.Off.(Entry) 
            Reset();
            time=0;
            //#]
            NOTIFY_TRANSITION_TERMINATED("23");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev_Den_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("12");
            state_2_exit();
            state_1_entDef();
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den2_11_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_2_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_11.(Exit) 
                    time--;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_11");
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_11");
                    pushNullTransition();
                    state_2_subState = den2_11;
                    rootState_active = den2_11;
                    //#[ state ROOT.state_2.den2_11.(Entry) 
                    Reset();
                    NS_red=1;
                    EW_green=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_11");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 8 
            if(is_Change2())
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_11.(Exit) 
                    time--;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_11");
                    //#[ transition 8 
                    time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_10");
                    pushNullTransition();
                    state_2_subState = den2_10;
                    rootState_active = den2_10;
                    //#[ state ROOT.state_2.den2_10.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_10");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_2_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den2_10_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_2_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_10.(Exit) 
                    time--;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_10");
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_10");
                    pushNullTransition();
                    state_2_subState = den2_10;
                    rootState_active = den2_10;
                    //#[ state ROOT.state_2.den2_10.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_10");
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 9 
            if(is_Change2())
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_10.(Exit) 
                    time--;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_10");
                    //#[ transition 9 
                    time=20;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_00");
                    pushNullTransition();
                    state_2_subState = den2_00;
                    rootState_active = den2_00;
                    //#[ state ROOT.state_2.den2_00.(Entry) 
                    if(d==false)
                    GEN(ev_Den);
                    Reset();
                    EW_red=1;
                    NS_green=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_00");
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_2_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den2_01_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_2_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_01.(Exit) 
                    time--;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_01");
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_01");
                    pushNullTransition();
                    state_2_subState = den2_01;
                    rootState_active = den2_01;
                    //#[ state ROOT.state_2.den2_01.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_01");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 7 
            if(is_Change2())
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_01.(Exit) 
                    time--;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_01");
                    //#[ transition 7 
                    time=10;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_11");
                    pushNullTransition();
                    state_2_subState = den2_11;
                    rootState_active = den2_11;
                    //#[ state ROOT.state_2.den2_11.(Entry) 
                    Reset();
                    NS_red=1;
                    EW_green=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_11");
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_2_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den2_00_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_2_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_00.(Exit) 
                    --time;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_00");
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_00");
                    pushNullTransition();
                    state_2_subState = den2_00;
                    rootState_active = den2_00;
                    //#[ state ROOT.state_2.den2_00.(Entry) 
                    if(d==false)
                    GEN(ev_Den);
                    Reset();
                    EW_red=1;
                    NS_green=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_00");
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 6 
            if(is_Change2())
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    if(state_2_timeout != NULL)
                        {
                            state_2_timeout->cancel();
                            state_2_timeout = NULL;
                        }
                    //#[ state ROOT.state_2.den2_00.(Exit) 
                    --time;
                    is_Change2();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_2.den2_00");
                    //#[ transition 6 
                    time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_2.den2_01");
                    pushNullTransition();
                    state_2_subState = den2_01;
                    rootState_active = den2_01;
                    //#[ state ROOT.state_2.den2_01.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.state_2.den2_01");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_2_handleEvent();
        }
    return res;
}

void controller_density::state_1_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_1");
    rootState_subState = state_1;
    NOTIFY_TRANSITION_STARTED("0");
    //#[ transition 0 
    time=20;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_00");
    pushNullTransition();
    state_1_subState = den1_00;
    rootState_active = den1_00;
    //#[ state ROOT.state_1.den1_00.(Entry) 
    if(d==true)
    GEN(ev_Den);
    Reset();
    NS_red=1;
    EW_green=1;
    //#]
    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_00");
    NOTIFY_TRANSITION_TERMINATED("0");
}

void controller_density::state_1_exit() {
    switch (state_1_subState) {
        case den1_00:
        {
            popNullTransition();
            if(state_1_timeout != NULL)
                {
                    state_1_timeout->cancel();
                    state_1_timeout = NULL;
                }
            //#[ state ROOT.state_1.den1_00.(Exit) 
            time--;
            is_Change1();
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_1.den1_00");
        }
        break;
        case den1_01:
        {
            popNullTransition();
            if(state_1_timeout != NULL)
                {
                    state_1_timeout->cancel();
                    state_1_timeout = NULL;
                }
            //#[ state ROOT.state_1.den1_01.(Exit) 
            time--;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_1.den1_01");
        }
        break;
        case den1_11:
        {
            popNullTransition();
            if(state_1_timeout != NULL)
                {
                    state_1_timeout->cancel();
                    state_1_timeout = NULL;
                }
            //#[ state ROOT.state_1.den1_11.(Exit) 
            time--;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_1.den1_11");
        }
        break;
        case den1_10:
        {
            popNullTransition();
            if(state_1_timeout != NULL)
                {
                    state_1_timeout->cancel();
                    state_1_timeout = NULL;
                }
            //#[ state ROOT.state_1.den1_10.(Exit) 
            time--;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_1.den1_10");
        }
        break;
        default:
            break;
    }
    state_1_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_1");
}

IOxfReactive::TakeEventStatus controller_density::state_1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_DenOFF_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("22");
            state_1_exit();
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            //#[ state ROOT.Off.(Entry) 
            Reset();
            time=0;
            //#]
            NOTIFY_TRANSITION_TERMINATED("22");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev_Den_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("11");
            state_1_exit();
            state_2_entDef();
            NOTIFY_TRANSITION_TERMINATED("11");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den1_11_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_1_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_11.(Exit) 
                    time--;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_11");
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_11");
                    pushNullTransition();
                    state_1_subState = den1_11;
                    rootState_active = den1_11;
                    //#[ state ROOT.state_1.den1_11.(Entry) 
                    Reset();
                    EW_red=1;
                    NS_green=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_11");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 4 
            if(is_Change1())
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_11.(Exit) 
                    time--;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_11");
                    //#[ transition 4 
                    time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_10");
                    pushNullTransition();
                    state_1_subState = den1_10;
                    rootState_active = den1_10;
                    //#[ state ROOT.state_1.den1_10.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_10");
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den1_10_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_1_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_10.(Exit) 
                    time--;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_10");
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_10");
                    pushNullTransition();
                    state_1_subState = den1_10;
                    rootState_active = den1_10;
                    //#[ state ROOT.state_1.den1_10.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_10");
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 5 
            if(is_Change1())
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_10.(Exit) 
                    time--;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_10");
                    //#[ transition 5 
                    time=20;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_00");
                    pushNullTransition();
                    state_1_subState = den1_00;
                    rootState_active = den1_00;
                    //#[ state ROOT.state_1.den1_00.(Entry) 
                    if(d==true)
                    GEN(ev_Den);
                    Reset();
                    NS_red=1;
                    EW_green=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_00");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den1_01_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_1_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_01.(Exit) 
                    time--;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_01");
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_01");
                    pushNullTransition();
                    state_1_subState = den1_01;
                    rootState_active = den1_01;
                    //#[ state ROOT.state_1.den1_01.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_01");
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 3 
            if(is_Change1())
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_01.(Exit) 
                    time--;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_01");
                    //#[ transition 3 
                    time=10;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_11");
                    pushNullTransition();
                    state_1_subState = den1_11;
                    rootState_active = den1_11;
                    //#[ state ROOT.state_1.den1_11.(Entry) 
                    Reset();
                    EW_red=1;
                    NS_green=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_11");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus controller_density::den1_00_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_1_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_00.(Exit) 
                    time--;
                    is_Change1();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_00");
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_00");
                    pushNullTransition();
                    state_1_subState = den1_00;
                    rootState_active = den1_00;
                    //#[ state ROOT.state_1.den1_00.(Entry) 
                    if(d==true)
                    GEN(ev_Den);
                    Reset();
                    NS_red=1;
                    EW_green=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_00");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 2 
            if(is_Change1())
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    if(state_1_timeout != NULL)
                        {
                            state_1_timeout->cancel();
                            state_1_timeout = NULL;
                        }
                    //#[ state ROOT.state_1.den1_00.(Exit) 
                    time--;
                    is_Change1();
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_1.den1_00");
                    //#[ transition 2 
                    time=5;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_1.den1_01");
                    pushNullTransition();
                    state_1_subState = den1_01;
                    rootState_active = den1_01;
                    //#[ state ROOT.state_1.den1_01.(Entry) 
                    Reset();
                    NS_orange=1;
                    EW_orange=1;
                    //#]
                    state_1_timeout = scheduleTimeout(1000, "ROOT.state_1.den1_01");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedcontroller_density::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("NS_red", x2String(myReal->NS_red));
    aomsAttributes->addAttribute("NS_green", x2String(myReal->NS_green));
    aomsAttributes->addAttribute("NS_orange", x2String(myReal->NS_orange));
    aomsAttributes->addAttribute("EW_orange", x2String(myReal->EW_orange));
    aomsAttributes->addAttribute("EW_green", x2String(myReal->EW_green));
    aomsAttributes->addAttribute("EW_red", x2String(myReal->EW_red));
    aomsAttributes->addAttribute("d", x2String(myReal->d));
    aomsAttributes->addAttribute("free_left", x2String(myReal->free_left));
}

void OMAnimatedcontroller_density::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case controller_density::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case controller_density::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        case controller_density::state_2:
        {
            state_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedcontroller_density::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_2");
    switch (myReal->state_2_subState) {
        case controller_density::den2_00:
        {
            den2_00_serializeStates(aomsState);
        }
        break;
        case controller_density::den2_01:
        {
            den2_01_serializeStates(aomsState);
        }
        break;
        case controller_density::den2_11:
        {
            den2_11_serializeStates(aomsState);
        }
        break;
        case controller_density::den2_10:
        {
            den2_10_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedcontroller_density::den2_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_2.den2_11");
}

void OMAnimatedcontroller_density::den2_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_2.den2_10");
}

void OMAnimatedcontroller_density::den2_01_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_2.den2_01");
}

void OMAnimatedcontroller_density::den2_00_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_2.den2_00");
}

void OMAnimatedcontroller_density::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
    switch (myReal->state_1_subState) {
        case controller_density::den1_00:
        {
            den1_00_serializeStates(aomsState);
        }
        break;
        case controller_density::den1_01:
        {
            den1_01_serializeStates(aomsState);
        }
        break;
        case controller_density::den1_11:
        {
            den1_11_serializeStates(aomsState);
        }
        break;
        case controller_density::den1_10:
        {
            den1_10_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedcontroller_density::den1_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.den1_11");
}

void OMAnimatedcontroller_density::den1_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.den1_10");
}

void OMAnimatedcontroller_density::den1_01_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.den1_01");
}

void OMAnimatedcontroller_density::den1_00_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.den1_00");
}

void OMAnimatedcontroller_density::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(controller_density, Default, Default, false, OMAnimatedcontroller_density)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\controller_density.cpp
*********************************************************************/
