/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Emergency
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Emergency.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Emergency.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Emergency_Emergency_SERIALIZE OM_NO_OP

#define Default_Emergency_Em_check_SERIALIZE aomsmethod->addAttribute("p", x2String(p));
//#]

//## package Default

//## class Emergency
Emergency::Emergency(IOxfActive* theActiveContext) : Em_flag(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Emergency, Emergency(), 0, Default_Emergency_Emergency_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Emergency::~Emergency() {
    NOTIFY_DESTRUCTOR(~Emergency, true);
    cleanUpRelations();
}

void Emergency::Em_check(bool p) {
    NOTIFY_OPERATION(Em_check, Em_check(bool), 1, Default_Emergency_Em_check_SERIALIZE);
    //#[ operation Em_check(bool)
    Em_flag=p;
    //#]
}

bool Emergency::getEm_flag() const {
    return Em_flag;
}

void Emergency::setEm_flag(bool p_Em_flag) {
    Em_flag = p_Em_flag;
}

Controller* Emergency::getItsController() const {
    return itsController;
}

void Emergency::setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

bool Emergency::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Emergency::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
}

void Emergency::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Emergency::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus Emergency::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_Emergency_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        case NSopen:
        {
            if(IS_EVENT_TYPE_OF(ev_EWopen_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.On.NSopen");
                    NOTIFY_STATE_ENTERED("ROOT.On.EWopen");
                    On_subState = EWopen;
                    rootState_active = EWopen;
                    //#[ state ROOT.On.EWopen.(Entry) 
                    if(Em_flag==true)
                    {
                    itsController->GEN(ev_EmergEW);
                    }
                    else
                    GEN(ev_NSopen);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = On_handleEvent();
                }
        }
        break;
        case EWopen:
        {
            if(IS_EVENT_TYPE_OF(ev_NSopen_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.On.EWopen");
                    NOTIFY_STATE_ENTERED("ROOT.On.NSopen");
                    On_subState = NSopen;
                    rootState_active = NSopen;
                    //#[ state ROOT.On.NSopen.(Entry) 
                    if(Em_flag==false)
                    {
                    itsController->GEN(ev_EmergNS);
                    }
                    else
                    GEN(ev_EWopen);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = On_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

void Emergency::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.On.NSopen");
    On_subState = NSopen;
    rootState_active = NSopen;
    //#[ state ROOT.On.NSopen.(Entry) 
    if(Em_flag==false)
    {
    itsController->GEN(ev_EmergNS);
    }
    else
    GEN(ev_EWopen);
    //#]
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus Emergency::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_Emergency_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            switch (On_subState) {
                case NSopen:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.NSopen");
                }
                break;
                case EWopen:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.EWopen");
                }
                break;
                default:
                    break;
            }
            On_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.On");
            //#[ transition 1 
            if(Em_flag==false)
            {
            itsController->GEN(ev_EmergNS);
            }
            if(Em_flag==true)
            {
            itsController->GEN(ev_EmergEW);
            }
            //#]
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEmergency::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Em_flag", x2String(myReal->Em_flag));
}

void OMAnimatedEmergency::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}

void OMAnimatedEmergency::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Emergency::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Emergency::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEmergency::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case Emergency::NSopen:
        {
            NSopen_serializeStates(aomsState);
        }
        break;
        case Emergency::EWopen:
        {
            EWopen_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEmergency::NSopen_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.NSopen");
}

void OMAnimatedEmergency::EWopen_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.EWopen");
}

void OMAnimatedEmergency::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Emergency, Default, Default, false, OMAnimatedEmergency)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Emergency.cpp
*********************************************************************/
