/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Display
//!	Generated Date	: Sun, 26, Aug 2012  
	File Path	: DefaultComponent/DefaultConfig_copy/Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Display.h"
//#[ ignore
#define Default_Display_Display_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Display
Display::Display(IOxfActive* theActiveContext) : EW_GREEN(0), EW_ORANGE(0), EW_RED(0), LEFT_GREEN(0), NS_GREEN(0), NS_ORANGE(0), NS_RED(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Display, Display(), 0, Default_Display_Display_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Display::~Display() {
    NOTIFY_DESTRUCTOR(~Display, true);
}

int Display::getEW_GREEN() const {
    return EW_GREEN;
}

void Display::setEW_GREEN(int p_EW_GREEN) {
    EW_GREEN = p_EW_GREEN;
}

int Display::getEW_ORANGE() const {
    return EW_ORANGE;
}

void Display::setEW_ORANGE(int p_EW_ORANGE) {
    EW_ORANGE = p_EW_ORANGE;
}

int Display::getEW_RED() const {
    return EW_RED;
}

void Display::setEW_RED(int p_EW_RED) {
    EW_RED = p_EW_RED;
}

int Display::getLEFT_GREEN() const {
    return LEFT_GREEN;
}

void Display::setLEFT_GREEN(int p_LEFT_GREEN) {
    LEFT_GREEN = p_LEFT_GREEN;
}

int Display::getNS_GREEN() const {
    return NS_GREEN;
}

void Display::setNS_GREEN(int p_NS_GREEN) {
    NS_GREEN = p_NS_GREEN;
}

int Display::getNS_ORANGE() const {
    return NS_ORANGE;
}

void Display::setNS_ORANGE(int p_NS_ORANGE) {
    NS_ORANGE = p_NS_ORANGE;
}

int Display::getNS_RED() const {
    return NS_RED;
}

void Display::setNS_RED(int p_NS_RED) {
    NS_RED = p_NS_RED;
}

bool Display::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Display::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Display::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Display::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        case Off:
        {
            if(IS_EVENT_TYPE_OF(ev_Change_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.On_00");
                    rootState_subState = On_00;
                    rootState_active = On_00;
                    //#[ state ROOT.On_00.(Entry) 
                    NS_RED=1;
                    EW_GREEN=1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        case On_00:
        {
            if(IS_EVENT_TYPE_OF(ev_Change_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state ROOT.On_00.(Exit) 
                    NS_RED=0;
                    EW_GREEN=0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On_00");
                    //#[ transition 2 
                    tm(5000);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On_01");
                    rootState_subState = On_01;
                    rootState_active = On_01;
                    //#[ state ROOT.On_01.(Entry) 
                    NS_ORANGE=1;
                    EW_GREEN=1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        case On_01:
        {
            if(IS_EVENT_TYPE_OF(ev_Change_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    //#[ state ROOT.On_01.(Exit) 
                    NS_ORANGE=0;
                    EW_GREEN=0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On_01");
                    //#[ transition 3 
                    tm(5000);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On_11");
                    rootState_subState = On_11;
                    rootState_active = On_11;
                    //#[ state ROOT.On_11.(Entry) 
                    NS_GREEN=1;
                    EW_RED=1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        case On_11:
        {
            if(IS_EVENT_TYPE_OF(ev_Change_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    //#[ state ROOT.On_11.(Exit) 
                    NS_GREEN=0;
                    EW_RED=0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On_11");
                    //#[ transition 4 
                    tm(5000);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On_10");
                    rootState_subState = On_10;
                    rootState_active = On_10;
                    //#[ state ROOT.On_10.(Entry) 
                    NS_GREEN=1;
                    EW_ORANGE=1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        case On_10:
        {
            if(IS_EVENT_TYPE_OF(ev_Change_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    //#[ state ROOT.On_10.(Exit) 
                    NS_GREEN=0;
                    EW_ORANGE=0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.On_10");
                    //#[ transition 5 
                    tm(5000);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On_00");
                    rootState_subState = On_00;
                    rootState_active = On_00;
                    //#[ state ROOT.On_00.(Entry) 
                    NS_RED=1;
                    EW_GREEN=1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
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
void OMAnimatedDisplay::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("NS_RED", x2String(myReal->NS_RED));
    aomsAttributes->addAttribute("EW_RED", x2String(myReal->EW_RED));
    aomsAttributes->addAttribute("NS_ORANGE", x2String(myReal->NS_ORANGE));
    aomsAttributes->addAttribute("EW_ORANGE", x2String(myReal->EW_ORANGE));
    aomsAttributes->addAttribute("NS_GREEN", x2String(myReal->NS_GREEN));
    aomsAttributes->addAttribute("EW_GREEN", x2String(myReal->EW_GREEN));
    aomsAttributes->addAttribute("LEFT_GREEN", x2String(myReal->LEFT_GREEN));
}

void OMAnimatedDisplay::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Display::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case Display::On_00:
        {
            On_00_serializeStates(aomsState);
        }
        break;
        case Display::On_01:
        {
            On_01_serializeStates(aomsState);
        }
        break;
        case Display::On_11:
        {
            On_11_serializeStates(aomsState);
        }
        break;
        case Display::On_10:
        {
            On_10_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDisplay::On_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On_11");
}

void OMAnimatedDisplay::On_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On_10");
}

void OMAnimatedDisplay::On_01_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On_01");
}

void OMAnimatedDisplay::On_00_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On_00");
}

void OMAnimatedDisplay::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(Display, Default, Default, false, OMAnimatedDisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Display.cpp
*********************************************************************/
