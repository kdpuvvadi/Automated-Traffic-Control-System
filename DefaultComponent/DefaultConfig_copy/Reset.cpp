/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Reset
//!	Generated Date	: Sun, 26, Aug 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/Reset.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Reset.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Reset_Reset_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Reset
Reset::Reset(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Reset, Reset(), 0, Default_Reset_Reset_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Reset::~Reset() {
    NOTIFY_DESTRUCTOR(~Reset, true);
    cleanUpRelations();
}

Controller* Reset::getItsController() const {
    return itsController;
}

void Reset::setItsController(Controller* p_Controller) {
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

bool Reset::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Reset::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Reset::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Reset::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus Reset::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_Reset_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        case On:
        {
            if(IS_EVENT_TYPE_OF(ev_Reset_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.On");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
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
void OMAnimatedReset::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}

void OMAnimatedReset::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Reset::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Reset::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedReset::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedReset::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Reset, Default, Default, false, OMAnimatedReset)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Reset.cpp
*********************************************************************/
