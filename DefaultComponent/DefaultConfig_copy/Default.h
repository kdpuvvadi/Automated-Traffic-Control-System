/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Default
//!	Generated Date	: Wed, 6, Mar 2013  
	File Path	: DefaultComponent/DefaultConfig_copy/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Controller;

//## auto_generated
class Density_sensor;

//## auto_generated
class EW_SENSOR;

//## auto_generated
class Emergency;

//## auto_generated
class Hold;

//## auto_generated
class NS_SENSOR;

//## auto_generated
class Normal;

//## auto_generated
class Power_switch;

//## auto_generated
class Traffic_Main;

//## auto_generated
class Traffic_density;

//## auto_generated
class controller_density;

//#[ ignore
#define ev_Start_Default_id 18601

#define ev_Stop_Default_id 18602

#define ev_On_Default_id 18603

#define ev_Off_Default_id 18604

#define ev_Emergency_Default_id 18605

#define ev_Hold_Default_id 18606

#define ev_Manual_Default_id 18607

#define ev_NSsensorON_Default_id 18608

#define ev_NSsensorOFF_Default_id 18609

#define ev_EWsensorON_Default_id 18610

#define ev_EWsensorOFF_Default_id 18611

#define ev_EWopen_Default_id 18612

#define ev_NSopen_Default_id 18613

#define ev_EmergNS_Default_id 18614

#define ev_EmergEW_Default_id 18615

#define ev_EWsense_Default_id 18616

#define ev_NSsense_Default_id 18617

#define ev_Den_Default_id 18618

#define ev_DenON_Default_id 18619

#define ev_NormON_Default_id 18620

#define ev_NormOFF_Default_id 18621

#define event_22_Default_id 18622

#define event_36_Default_id 18623

#define ev_DenOFF_Default_id 18624
//#]

//## package Default



//## event ev_Start()
class ev_Start : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Start;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Start();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Start : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Start)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Stop()
class ev_Stop : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Stop;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Stop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Stop : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Stop)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_On()
class ev_On : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_On;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_On();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_On : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_On)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Off()
class ev_Off : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Off;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Off();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Off : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Off)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Emergency()
class ev_Emergency : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Emergency;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Emergency();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Emergency : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Emergency)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Hold()
class ev_Hold : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Hold;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Hold();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Hold : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Hold)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Manual()
class ev_Manual : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Manual;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Manual();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Manual : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Manual)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_NSsensorON()
class ev_NSsensorON : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_NSsensorON;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_NSsensorON();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_NSsensorON : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_NSsensorON)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_NSsensorOFF()
class ev_NSsensorOFF : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_NSsensorOFF;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_NSsensorOFF();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_NSsensorOFF : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_NSsensorOFF)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_EWsensorON()
class ev_EWsensorON : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_EWsensorON;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_EWsensorON();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_EWsensorON : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_EWsensorON)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_EWsensorOFF()
class ev_EWsensorOFF : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_EWsensorOFF;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_EWsensorOFF();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_EWsensorOFF : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_EWsensorOFF)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_EWopen()
class ev_EWopen : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_EWopen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_EWopen();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_EWopen : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_EWopen)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_NSopen()
class ev_NSopen : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_NSopen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_NSopen();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_NSopen : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_NSopen)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_EmergNS()
class ev_EmergNS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_EmergNS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_EmergNS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_EmergNS : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_EmergNS)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_EmergEW()
class ev_EmergEW : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_EmergEW;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_EmergEW();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_EmergEW : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_EmergEW)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_EWsense()
class ev_EWsense : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_EWsense;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_EWsense();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_EWsense : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_EWsense)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_NSsense()
class ev_NSsense : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_NSsense;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_NSsense();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_NSsense : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_NSsense)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_Den()
class ev_Den : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_Den;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_Den();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_Den : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_Den)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_DenON()
class ev_DenON : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_DenON;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_DenON();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_DenON : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_DenON)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_NormON()
class ev_NormON : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_NormON;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_NormON();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_NormON : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_NormON)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_NormOFF()
class ev_NormOFF : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_NormOFF;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_NormOFF();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_NormOFF : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_NormOFF)
};
//#]
#endif // _OMINSTRUMENT

//## event event_22()
class event_22 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevent_22;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    event_22();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevent_22 : virtual public AOMEvent {
    DECLARE_META_EVENT(event_22)
};
//#]
#endif // _OMINSTRUMENT

//## event event_36()
class event_36 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevent_36;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    event_36();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevent_36 : virtual public AOMEvent {
    DECLARE_META_EVENT(event_36)
};
//#]
#endif // _OMINSTRUMENT

//## event ev_DenOFF()
class ev_DenOFF : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev_DenOFF;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev_DenOFF();
    
    ////    Framework operations    ////
    
    //## statechart_method
    bool isTypeOf(short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev_DenOFF : virtual public AOMEvent {
    DECLARE_META_EVENT(ev_DenOFF)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Default.h
*********************************************************************/
