/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EW_SENSOR
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/EW_SENSOR.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "EW_SENSOR.h"
//## link itsEmergency
#include "Emergency.h"
//#[ ignore
#define Default_EW_SENSOR_EW_SENSOR_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class EW_SENSOR
EW_SENSOR::EW_SENSOR(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(EW_SENSOR, EW_SENSOR(), 0, Default_EW_SENSOR_EW_SENSOR_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsEmergency = NULL;
    initStatechart();
}

EW_SENSOR::~EW_SENSOR() {
    NOTIFY_DESTRUCTOR(~EW_SENSOR, true);
    cleanUpRelations();
}

Emergency* EW_SENSOR::getItsEmergency() const {
    return itsEmergency;
}

void EW_SENSOR::setItsEmergency(Emergency* p_Emergency) {
    itsEmergency = p_Emergency;
    if(p_Emergency != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEmergency", p_Emergency, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEmergency");
        }
}

bool EW_SENSOR::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void EW_SENSOR::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
}

void EW_SENSOR::cleanUpRelations() {
    if(itsEmergency != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEmergency");
            itsEmergency = NULL;
        }
}

void EW_SENSOR::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus EW_SENSOR::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_EWsensorON_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case EW_Off:
        {
            if(IS_EVENT_TYPE_OF(ev_EWsense_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.On.EW_Off");
                    NOTIFY_STATE_ENTERED("ROOT.On.EW_On");
                    On_subState = EW_On;
                    rootState_active = EW_On;
                    //#[ state ROOT.On.EW_On.(Entry) 
                    itsEmergency->Em_check(true);
                    itsEmergency->GEN(ev_Emergency);
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
        case EW_On:
        {
            if(IS_EVENT_TYPE_OF(ev_EWsense_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.On.EW_On");
                    //#[ transition 5 
                    itsEmergency->GEN(ev_Emergency);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.EW_Off");
                    On_subState = EW_Off;
                    rootState_active = EW_Off;
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

void EW_SENSOR::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.On.EW_Off");
    On_subState = EW_Off;
    rootState_active = EW_Off;
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus EW_SENSOR::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_EWsensorOFF_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            switch (On_subState) {
                case EW_Off:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.EW_Off");
                }
                break;
                case EW_On:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.EW_On");
                }
                break;
                default:
                    break;
            }
            On_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.On");
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEW_SENSOR::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEmergency", false, true);
    if(myReal->itsEmergency)
        {
            aomsRelations->ADD_ITEM(myReal->itsEmergency);
        }
}

void OMAnimatedEW_SENSOR::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case EW_SENSOR::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case EW_SENSOR::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEW_SENSOR::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case EW_SENSOR::EW_Off:
        {
            EW_Off_serializeStates(aomsState);
        }
        break;
        case EW_SENSOR::EW_On:
        {
            EW_On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedEW_SENSOR::EW_On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.EW_On");
}

void OMAnimatedEW_SENSOR::EW_Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.EW_Off");
}

void OMAnimatedEW_SENSOR::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(EW_SENSOR, Default, Default, false, OMAnimatedEW_SENSOR)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/EW_SENSOR.cpp
*********************************************************************/
