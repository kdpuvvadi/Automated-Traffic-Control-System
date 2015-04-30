/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Hold
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Hold.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Hold.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Hold_Hold_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Hold
Hold::Hold(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Hold, Hold(), 0, Default_Hold_Hold_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
}

Hold::~Hold() {
    NOTIFY_DESTRUCTOR(~Hold, true);
    cleanUpRelations();
}

Controller* Hold::getItsController() const {
    return itsController;
}

void Hold::setItsController(Controller* p_Controller) {
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

bool Hold::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Hold::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Hold::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Hold::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus Hold::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_Hold_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state ROOT.On.(Entry) 
                    itsController->GEN(ev_Manual);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        case On:
        {
            if(IS_EVENT_TYPE_OF(ev_Hold_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state ROOT.On.(Exit) 
                    itsController->GEN(ev_Manual);
                    //#]
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
void OMAnimatedHold::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}

void OMAnimatedHold::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Hold::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Hold::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHold::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedHold::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Hold, Default, Default, false, OMAnimatedHold)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Hold.cpp
*********************************************************************/
