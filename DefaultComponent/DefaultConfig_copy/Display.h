/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Display
//!	Generated Date	: Sun, 26, Aug 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

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
//## package Default

//## class Display
class Display : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Display(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Display();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getEW_GREEN() const;
    
    //## auto_generated
    void setEW_GREEN(int p_EW_GREEN);
    
    //## auto_generated
    int getEW_ORANGE() const;
    
    //## auto_generated
    void setEW_ORANGE(int p_EW_ORANGE);
    
    //## auto_generated
    int getEW_RED() const;
    
    //## auto_generated
    void setEW_RED(int p_EW_RED);
    
    //## auto_generated
    int getLEFT_GREEN() const;
    
    //## auto_generated
    void setLEFT_GREEN(int p_LEFT_GREEN);
    
    //## auto_generated
    int getNS_GREEN() const;
    
    //## auto_generated
    void setNS_GREEN(int p_NS_GREEN);
    
    //## auto_generated
    int getNS_ORANGE() const;
    
    //## auto_generated
    void setNS_ORANGE(int p_NS_ORANGE);
    
    //## auto_generated
    int getNS_RED() const;
    
    //## auto_generated
    void setNS_RED(int p_NS_RED);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int EW_GREEN;		//## attribute EW_GREEN
    
    int EW_ORANGE;		//## attribute EW_ORANGE
    
    int EW_RED;		//## attribute EW_RED
    
    int LEFT_GREEN;		//## attribute LEFT_GREEN
    
    int NS_GREEN;		//## attribute NS_GREEN
    
    int NS_ORANGE;		//## attribute NS_ORANGE
    
    int NS_RED;		//## attribute NS_RED
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // On_11:
    //## statechart_method
    inline bool On_11_IN() const;
    
    // On_10:
    //## statechart_method
    inline bool On_10_IN() const;
    
    // On_01:
    //## statechart_method
    inline bool On_01_IN() const;
    
    // On_00:
    //## statechart_method
    inline bool On_00_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Display_Enum {
        OMNonState = 0,
        On_11 = 1,
        On_10 = 2,
        On_01 = 3,
        On_00 = 4,
        Off = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisplay : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Display, OMAnimatedDisplay)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_01_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_00_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Display::rootState_IN() const {
    return true;
}

inline bool Display::On_11_IN() const {
    return rootState_subState == On_11;
}

inline bool Display::On_10_IN() const {
    return rootState_subState == On_10;
}

inline bool Display::On_01_IN() const {
    return rootState_subState == On_01;
}

inline bool Display::On_00_IN() const {
    return rootState_subState == On_00;
}

inline bool Display::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Display.h
*********************************************************************/
