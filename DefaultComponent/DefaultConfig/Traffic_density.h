/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Traffic_density
//!	Generated Date	: Tue, 4, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Traffic_density.h
*********************************************************************/

#ifndef Traffic_density_H
#define Traffic_density_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsController_density
#include "controller_density.h"
//## classInstance itsDensity_sensor
#include "Density_sensor.h"
//## package Default

//## class Traffic_density
class Traffic_density : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTraffic_density;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Traffic_density(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Traffic_density();
    
    ////    Additional operations    ////
    
    //## auto_generated
    controller_density* getItsController_density() const;
    
    //## auto_generated
    Density_sensor* getItsDensity_sensor() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    controller_density itsController_density;		//## classInstance itsController_density
    
    Density_sensor itsDensity_sensor;		//## classInstance itsDensity_sensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTraffic_density : virtual public AOMInstance {
    DECLARE_META(Traffic_density, OMAnimatedTraffic_density)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Traffic_density.h
*********************************************************************/
