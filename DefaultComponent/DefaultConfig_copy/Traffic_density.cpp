/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Traffic_density
//!	Generated Date	: Mon, 3, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/Traffic_density.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Traffic_density.h"
//#[ ignore
#define Default_Traffic_density_Traffic_density_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Traffic_density
Traffic_density::Traffic_density(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Traffic_density, Traffic_density(), 0, Default_Traffic_density_Traffic_density_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsController_density.setShouldDelete(false);
        }
        {
            itsDensity_sensor.setShouldDelete(false);
        }
    }
    initRelations();
}

Traffic_density::~Traffic_density() {
    NOTIFY_DESTRUCTOR(~Traffic_density, true);
}

controller_density* Traffic_density::getItsController_density() const {
    return (controller_density*) &itsController_density;
}

Density_sensor* Traffic_density::getItsDensity_sensor() const {
    return (Density_sensor*) &itsDensity_sensor;
}

bool Traffic_density::startBehavior() {
    bool done = true;
    done &= itsController_density.startBehavior();
    done &= itsDensity_sensor.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Traffic_density::initRelations() {
    itsDensity_sensor.setItsController_density(&itsController_density);
}

void Traffic_density::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsController_density.setActiveContext(theActiveContext, false);
        itsDensity_sensor.setActiveContext(theActiveContext, false);
    }
}

void Traffic_density::destroy() {
    itsController_density.destroy();
    itsDensity_sensor.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTraffic_density::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController_density", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsController_density);
    aomsRelations->addRelation("itsDensity_sensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDensity_sensor);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Traffic_density, Default, Default, false, OMAnimatedTraffic_density)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Traffic_density.cpp
*********************************************************************/
