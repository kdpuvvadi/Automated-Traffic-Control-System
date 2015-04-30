/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: Density_sensor
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Density_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Density_sensor.h"
//## link itsController_density
#include "controller_density.h"
//#[ ignore
#define Default_Density_sensor_Density_sensor_SERIALIZE OM_NO_OP

#define Default_Density_sensor_compare_SERIALIZE OM_NO_OP

#define Default_Density_sensor_density_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Density_sensor
Density_sensor::Density_sensor(IOxfActive* theActiveContext) : EW(0), NS(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Density_sensor, Density_sensor(), 0, Default_Density_sensor_Density_sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController_density = NULL;
    initStatechart();
}

Density_sensor::~Density_sensor() {
    NOTIFY_DESTRUCTOR(~Density_sensor, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Density_sensor::compare() {
    NOTIFY_OPERATION(compare, compare(), 0, Default_Density_sensor_compare_SERIALIZE);
    //#[ operation compare()
    if(NS>EW)  
    itsController_density->set_status(true);
    else
    itsController_density->set_status(false);
    //#]
}

void Density_sensor::density() {
    NOTIFY_OPERATION(density, density(), 0, Default_Density_sensor_density_SERIALIZE);
    //#[ operation density()
    NS=rand()%50; 
    EW=rand()%50;
    
    //#]
}

int Density_sensor::getEW() const {
    return EW;
}

void Density_sensor::setEW(int p_EW) {
    EW = p_EW;
}

int Density_sensor::getNS() const {
    return NS;
}

void Density_sensor::setNS(int p_NS) {
    NS = p_NS;
}

controller_density* Density_sensor::getItsController_density() const {
    return itsController_density;
}

void Density_sensor::setItsController_density(controller_density* p_controller_density) {
    itsController_density = p_controller_density;
    if(p_controller_density != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController_density", p_controller_density, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController_density");
        }
}

bool Density_sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Density_sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Density_sensor::cleanUpRelations() {
    if(itsController_density != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController_density");
            itsController_density = NULL;
        }
}

void Density_sensor::cancelTimeouts() {
    if(rootState_timeout != NULL)
        {
            rootState_timeout->cancel();
            rootState_timeout = NULL;
        }
}

bool Density_sensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Density_sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.On");
        rootState_subState = On;
        rootState_active = On;
        //#[ state ROOT.On.(Entry) 
        density();
        compare();
        //#]
        rootState_timeout = scheduleTimeout(40000, "ROOT.On");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Density_sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(rootState_active == On)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            if(rootState_timeout != NULL)
                                {
                                    rootState_timeout->cancel();
                                    rootState_timeout = NULL;
                                }
                            NOTIFY_STATE_EXITED("ROOT.On");
                            NOTIFY_STATE_ENTERED("ROOT.On");
                            rootState_subState = On;
                            rootState_active = On;
                            //#[ state ROOT.On.(Entry) 
                            density();
                            compare();
                            //#]
                            rootState_timeout = scheduleTimeout(40000, "ROOT.On");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDensity_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("NS", x2String(myReal->NS));
    aomsAttributes->addAttribute("EW", x2String(myReal->EW));
}

void OMAnimatedDensity_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_density", false, true);
    if(myReal->itsController_density)
        {
            aomsRelations->ADD_ITEM(myReal->itsController_density);
        }
}

void OMAnimatedDensity_sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Density_sensor::On)
        {
            On_serializeStates(aomsState);
        }
}

void OMAnimatedDensity_sensor::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}
//#]

IMPLEMENT_REACTIVE_META_P(Density_sensor, Default, Default, false, OMAnimatedDensity_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Density_sensor.cpp
*********************************************************************/
