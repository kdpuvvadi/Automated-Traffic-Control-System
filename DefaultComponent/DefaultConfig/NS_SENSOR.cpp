/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NS_SENSOR
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/NS_SENSOR.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "NS_SENSOR.h"
//## link itsEmergency
#include "Emergency.h"
//#[ ignore
#define Default_NS_SENSOR_NS_SENSOR_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class NS_SENSOR
NS_SENSOR::NS_SENSOR(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(NS_SENSOR, NS_SENSOR(), 0, Default_NS_SENSOR_NS_SENSOR_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsEmergency = NULL;
    initStatechart();
}

NS_SENSOR::~NS_SENSOR() {
    NOTIFY_DESTRUCTOR(~NS_SENSOR, true);
    cleanUpRelations();
}

Emergency* NS_SENSOR::getItsEmergency() const {
    return itsEmergency;
}

void NS_SENSOR::setItsEmergency(Emergency* p_Emergency) {
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

bool NS_SENSOR::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void NS_SENSOR::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
}

void NS_SENSOR::cleanUpRelations() {
    if(itsEmergency != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEmergency");
            itsEmergency = NULL;
        }
}

void NS_SENSOR::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus NS_SENSOR::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_NSsensorON_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case NS_Off:
        {
            if(IS_EVENT_TYPE_OF(ev_NSsense_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.On.NS_Off");
                    NOTIFY_STATE_ENTERED("ROOT.On.NS_On");
                    On_subState = NS_On;
                    rootState_active = NS_On;
                    //#[ state ROOT.On.NS_On.(Entry) 
                    itsEmergency->Em_check(false);
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
        case NS_On:
        {
            if(IS_EVENT_TYPE_OF(ev_NSsense_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.On.NS_On");
                    //#[ transition 5 
                    itsEmergency->GEN(ev_Emergency);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On.NS_Off");
                    On_subState = NS_Off;
                    rootState_active = NS_Off;
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

void NS_SENSOR::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.On.NS_Off");
    On_subState = NS_Off;
    rootState_active = NS_Off;
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus NS_SENSOR::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev_NSsensorOFF_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            switch (On_subState) {
                case NS_Off:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.NS_Off");
                }
                break;
                case NS_On:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.NS_On");
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
void OMAnimatedNS_SENSOR::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEmergency", false, true);
    if(myReal->itsEmergency)
        {
            aomsRelations->ADD_ITEM(myReal->itsEmergency);
        }
}

void OMAnimatedNS_SENSOR::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case NS_SENSOR::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case NS_SENSOR::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNS_SENSOR::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case NS_SENSOR::NS_Off:
        {
            NS_Off_serializeStates(aomsState);
        }
        break;
        case NS_SENSOR::NS_On:
        {
            NS_On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNS_SENSOR::NS_On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.NS_On");
}

void OMAnimatedNS_SENSOR::NS_Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.NS_Off");
}

void OMAnimatedNS_SENSOR::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(NS_SENSOR, Default, Default, false, OMAnimatedNS_SENSOR)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/NS_SENSOR.cpp
*********************************************************************/
