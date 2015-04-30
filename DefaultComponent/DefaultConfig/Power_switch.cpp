/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Power_switch
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Power_switch.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Power_switch.h"
//## link itsController
#include "Controller.h"
//## link itsEW_SENSOR
#include "EW_SENSOR.h"
//## link itsNS_SENSOR
#include "NS_SENSOR.h"
//#[ ignore
#define Default_Power_switch_Power_switch_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Power_switch
Power_switch::Power_switch(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Power_switch, Power_switch(), 0, Default_Power_switch_Power_switch_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    itsEW_SENSOR = NULL;
    itsNS_SENSOR = NULL;
    initStatechart();
}

Power_switch::~Power_switch() {
    NOTIFY_DESTRUCTOR(~Power_switch, true);
    cleanUpRelations();
}

Controller* Power_switch::getItsController() const {
    return itsController;
}

void Power_switch::setItsController(Controller* p_Controller) {
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

EW_SENSOR* Power_switch::getItsEW_SENSOR() const {
    return itsEW_SENSOR;
}

void Power_switch::setItsEW_SENSOR(EW_SENSOR* p_EW_SENSOR) {
    itsEW_SENSOR = p_EW_SENSOR;
    if(p_EW_SENSOR != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEW_SENSOR", p_EW_SENSOR, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEW_SENSOR");
        }
}

NS_SENSOR* Power_switch::getItsNS_SENSOR() const {
    return itsNS_SENSOR;
}

void Power_switch::setItsNS_SENSOR(NS_SENSOR* p_NS_SENSOR) {
    itsNS_SENSOR = p_NS_SENSOR;
    if(p_NS_SENSOR != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNS_SENSOR", p_NS_SENSOR, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNS_SENSOR");
        }
}

bool Power_switch::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Power_switch::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Power_switch::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
    if(itsEW_SENSOR != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEW_SENSOR");
            itsEW_SENSOR = NULL;
        }
    if(itsNS_SENSOR != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNS_SENSOR");
            itsNS_SENSOR = NULL;
        }
}

void Power_switch::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Power_switch::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_On_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    itsController->GEN(ev_Start);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state ROOT.On.(Entry) 
                    itsNS_SENSOR->GEN(ev_NSsensorON);
                    itsEW_SENSOR->GEN(ev_EWsensorON);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case On:
        {
            if(IS_EVENT_TYPE_OF(ev_Off_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state ROOT.On.(Exit) 
                    itsNS_SENSOR->GEN(ev_NSsensorOFF);
                    itsEW_SENSOR->GEN(ev_EWsensorOFF);
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On");
                    //#[ transition 2 
                    itsController->GEN(ev_Stop);
                    //#]
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
void OMAnimatedPower_switch::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    aomsRelations->addRelation("itsNS_SENSOR", false, true);
    if(myReal->itsNS_SENSOR)
        {
            aomsRelations->ADD_ITEM(myReal->itsNS_SENSOR);
        }
    aomsRelations->addRelation("itsEW_SENSOR", false, true);
    if(myReal->itsEW_SENSOR)
        {
            aomsRelations->ADD_ITEM(myReal->itsEW_SENSOR);
        }
}

void OMAnimatedPower_switch::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Power_switch::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Power_switch::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPower_switch::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedPower_switch::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Power_switch, Default, Default, false, OMAnimatedPower_switch)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Power_switch.cpp
*********************************************************************/
