/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: Density_sensor
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Density_sensor.h
*********************************************************************/

#ifndef Density_sensor_H
#define Density_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsController_density
class controller_density;

//## package Default

//## class Density_sensor
class Density_sensor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDensity_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Density_sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Density_sensor();
    
    ////    Operations    ////
    
    //## operation compare()
    void compare();
    
    //## operation density()
    void density();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getEW() const;
    
    //## auto_generated
    void setEW(int p_EW);
    
    //## auto_generated
    int getNS() const;
    
    //## auto_generated
    void setNS(int p_NS);
    
    //## auto_generated
    controller_density* getItsController_density() const;
    
    //## auto_generated
    void setItsController_density(controller_density* p_controller_density);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int EW;		//## attribute EW
    
    int NS;		//## attribute NS
    
    ////    Relations and components    ////
    
    controller_density* itsController_density;		//## link itsController_density
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // On:
    //## statechart_method
    inline bool On_IN() const;

protected :

//#[ ignore
    enum Density_sensor_Enum {
        OMNonState = 0,
        On = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDensity_sensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Density_sensor, OMAnimatedDensity_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Density_sensor::rootState_IN() const {
    return true;
}

inline bool Density_sensor::On_IN() const {
    return rootState_subState == On;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Density_sensor.h
*********************************************************************/
