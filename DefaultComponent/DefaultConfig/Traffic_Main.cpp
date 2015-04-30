/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Traffic_Main
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Traffic_Main.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Traffic_Main.h"
//#[ ignore
#define Default_Traffic_Main_Traffic_Main_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Traffic_Main
Traffic_Main::Traffic_Main(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Traffic_Main, Traffic_Main(), 0, Default_Traffic_Main_Traffic_Main_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsEmergency.setShouldDelete(false);
        }
        {
            itsHold.setShouldDelete(false);
        }
        {
            itsController.setShouldDelete(false);
        }
        {
            itsPower_switch.setShouldDelete(false);
        }
        {
            itsEW_SENSOR.setShouldDelete(false);
        }
        {
            itsNS_SENSOR.setShouldDelete(false);
        }
    }
    initRelations();
}

Traffic_Main::~Traffic_Main() {
    NOTIFY_DESTRUCTOR(~Traffic_Main, true);
}

Controller* Traffic_Main::getItsController() const {
    return (Controller*) &itsController;
}

EW_SENSOR* Traffic_Main::getItsEW_SENSOR() const {
    return (EW_SENSOR*) &itsEW_SENSOR;
}

Emergency* Traffic_Main::getItsEmergency() const {
    return (Emergency*) &itsEmergency;
}

Hold* Traffic_Main::getItsHold() const {
    return (Hold*) &itsHold;
}

NS_SENSOR* Traffic_Main::getItsNS_SENSOR() const {
    return (NS_SENSOR*) &itsNS_SENSOR;
}

Power_switch* Traffic_Main::getItsPower_switch() const {
    return (Power_switch*) &itsPower_switch;
}

bool Traffic_Main::startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= itsEW_SENSOR.startBehavior();
    done &= itsEmergency.startBehavior();
    done &= itsHold.startBehavior();
    done &= itsNS_SENSOR.startBehavior();
    done &= itsPower_switch.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Traffic_Main::initRelations() {
    itsEmergency.setItsController(&itsController);
    itsHold.setItsController(&itsController);
    itsPower_switch.setItsController(&itsController);
    itsPower_switch.setItsNS_SENSOR(&itsNS_SENSOR);
    itsPower_switch.setItsEW_SENSOR(&itsEW_SENSOR);
    itsNS_SENSOR.setItsEmergency(&itsEmergency);
    itsEW_SENSOR.setItsEmergency(&itsEmergency);
}

void Traffic_Main::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsEmergency.setActiveContext(theActiveContext, false);
        itsHold.setActiveContext(theActiveContext, false);
        itsController.setActiveContext(theActiveContext, false);
        itsPower_switch.setActiveContext(theActiveContext, false);
        itsEW_SENSOR.setActiveContext(theActiveContext, false);
        itsNS_SENSOR.setActiveContext(theActiveContext, false);
    }
}

void Traffic_Main::destroy() {
    itsController.destroy();
    itsEW_SENSOR.destroy();
    itsEmergency.destroy();
    itsHold.destroy();
    itsNS_SENSOR.destroy();
    itsPower_switch.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTraffic_Main::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEmergency", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsEmergency);
    aomsRelations->addRelation("itsHold", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHold);
    aomsRelations->addRelation("itsController", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsController);
    aomsRelations->addRelation("itsPower_switch", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPower_switch);
    aomsRelations->addRelation("itsEW_SENSOR", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsEW_SENSOR);
    aomsRelations->addRelation("itsNS_SENSOR", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNS_SENSOR);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Traffic_Main, Default, Default, false, OMAnimatedTraffic_Main)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Traffic_Main.cpp
*********************************************************************/
