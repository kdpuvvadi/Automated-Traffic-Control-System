/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: KD
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy_copy
	Model Element	: Default
//!	Generated Date	: Tue, 19, Mar 2013  
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "Controller.h"
//## auto_generated
#include "controller_density.h"
//## auto_generated
#include "Density_sensor.h"
//## auto_generated
#include "Emergency.h"
//## auto_generated
#include "EW_SENSOR.h"
//## auto_generated
#include "Hold.h"
//## auto_generated
#include "NS_SENSOR.h"
//## auto_generated
#include "Power_switch.h"
//## auto_generated
#include "Traffic_density.h"
//## auto_generated
#include "Traffic_Main.h"
//## auto_generated
#include <iostream.h>
//## auto_generated
#include "Normal.h"
//#[ ignore
#define ev_Start_SERIALIZE OM_NO_OP

#define ev_Start_UNSERIALIZE OM_NO_OP

#define ev_Start_CONSTRUCTOR ev_Start()

#define ev_Stop_SERIALIZE OM_NO_OP

#define ev_Stop_UNSERIALIZE OM_NO_OP

#define ev_Stop_CONSTRUCTOR ev_Stop()

#define ev_On_SERIALIZE OM_NO_OP

#define ev_On_UNSERIALIZE OM_NO_OP

#define ev_On_CONSTRUCTOR ev_On()

#define ev_Off_SERIALIZE OM_NO_OP

#define ev_Off_UNSERIALIZE OM_NO_OP

#define ev_Off_CONSTRUCTOR ev_Off()

#define ev_Emergency_SERIALIZE OM_NO_OP

#define ev_Emergency_UNSERIALIZE OM_NO_OP

#define ev_Emergency_CONSTRUCTOR ev_Emergency()

#define ev_Hold_SERIALIZE OM_NO_OP

#define ev_Hold_UNSERIALIZE OM_NO_OP

#define ev_Hold_CONSTRUCTOR ev_Hold()

#define ev_Manual_SERIALIZE OM_NO_OP

#define ev_Manual_UNSERIALIZE OM_NO_OP

#define ev_Manual_CONSTRUCTOR ev_Manual()

#define ev_NSsensorON_SERIALIZE OM_NO_OP

#define ev_NSsensorON_UNSERIALIZE OM_NO_OP

#define ev_NSsensorON_CONSTRUCTOR ev_NSsensorON()

#define ev_NSsensorOFF_SERIALIZE OM_NO_OP

#define ev_NSsensorOFF_UNSERIALIZE OM_NO_OP

#define ev_NSsensorOFF_CONSTRUCTOR ev_NSsensorOFF()

#define ev_EWsensorON_SERIALIZE OM_NO_OP

#define ev_EWsensorON_UNSERIALIZE OM_NO_OP

#define ev_EWsensorON_CONSTRUCTOR ev_EWsensorON()

#define ev_EWsensorOFF_SERIALIZE OM_NO_OP

#define ev_EWsensorOFF_UNSERIALIZE OM_NO_OP

#define ev_EWsensorOFF_CONSTRUCTOR ev_EWsensorOFF()

#define ev_EWopen_SERIALIZE OM_NO_OP

#define ev_EWopen_UNSERIALIZE OM_NO_OP

#define ev_EWopen_CONSTRUCTOR ev_EWopen()

#define ev_NSopen_SERIALIZE OM_NO_OP

#define ev_NSopen_UNSERIALIZE OM_NO_OP

#define ev_NSopen_CONSTRUCTOR ev_NSopen()

#define ev_EmergNS_SERIALIZE OM_NO_OP

#define ev_EmergNS_UNSERIALIZE OM_NO_OP

#define ev_EmergNS_CONSTRUCTOR ev_EmergNS()

#define ev_EmergEW_SERIALIZE OM_NO_OP

#define ev_EmergEW_UNSERIALIZE OM_NO_OP

#define ev_EmergEW_CONSTRUCTOR ev_EmergEW()

#define ev_EWsense_SERIALIZE OM_NO_OP

#define ev_EWsense_UNSERIALIZE OM_NO_OP

#define ev_EWsense_CONSTRUCTOR ev_EWsense()

#define ev_NSsense_SERIALIZE OM_NO_OP

#define ev_NSsense_UNSERIALIZE OM_NO_OP

#define ev_NSsense_CONSTRUCTOR ev_NSsense()

#define ev_Den_SERIALIZE OM_NO_OP

#define ev_Den_UNSERIALIZE OM_NO_OP

#define ev_Den_CONSTRUCTOR ev_Den()

#define ev_DenON_SERIALIZE OM_NO_OP

#define ev_DenON_UNSERIALIZE OM_NO_OP

#define ev_DenON_CONSTRUCTOR ev_DenON()

#define ev_NormON_SERIALIZE OM_NO_OP

#define ev_NormON_UNSERIALIZE OM_NO_OP

#define ev_NormON_CONSTRUCTOR ev_NormON()

#define ev_NormOFF_SERIALIZE OM_NO_OP

#define ev_NormOFF_UNSERIALIZE OM_NO_OP

#define ev_NormOFF_CONSTRUCTOR ev_NormOFF()

#define event_22_SERIALIZE OM_NO_OP

#define event_22_UNSERIALIZE OM_NO_OP

#define event_22_CONSTRUCTOR event_22()

#define event_36_SERIALIZE OM_NO_OP

#define event_36_UNSERIALIZE OM_NO_OP

#define event_36_CONSTRUCTOR event_36()

#define ev_DenOFF_SERIALIZE OM_NO_OP

#define ev_DenOFF_UNSERIALIZE OM_NO_OP

#define ev_DenOFF_CONSTRUCTOR ev_DenOFF()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* aomsAttributes);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* aomsAttributes) {
}
#endif // _OMINSTRUMENT

//## event ev_Start()
ev_Start::ev_Start() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Start)
    setId(ev_Start_Default_id);
}

bool ev_Start::isTypeOf(short id) const {
    return (ev_Start_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Start, Default, Default, ev_Start())

//## event ev_Stop()
ev_Stop::ev_Stop() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Stop)
    setId(ev_Stop_Default_id);
}

bool ev_Stop::isTypeOf(short id) const {
    return (ev_Stop_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Stop, Default, Default, ev_Stop())

//## event ev_On()
ev_On::ev_On() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_On)
    setId(ev_On_Default_id);
}

bool ev_On::isTypeOf(short id) const {
    return (ev_On_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_On, Default, Default, ev_On())

//## event ev_Off()
ev_Off::ev_Off() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Off)
    setId(ev_Off_Default_id);
}

bool ev_Off::isTypeOf(short id) const {
    return (ev_Off_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Off, Default, Default, ev_Off())

//## event ev_Emergency()
ev_Emergency::ev_Emergency() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Emergency)
    setId(ev_Emergency_Default_id);
}

bool ev_Emergency::isTypeOf(short id) const {
    return (ev_Emergency_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Emergency, Default, Default, ev_Emergency())

//## event ev_Hold()
ev_Hold::ev_Hold() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Hold)
    setId(ev_Hold_Default_id);
}

bool ev_Hold::isTypeOf(short id) const {
    return (ev_Hold_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Hold, Default, Default, ev_Hold())

//## event ev_Manual()
ev_Manual::ev_Manual() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Manual)
    setId(ev_Manual_Default_id);
}

bool ev_Manual::isTypeOf(short id) const {
    return (ev_Manual_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Manual, Default, Default, ev_Manual())

//## event ev_NSsensorON()
ev_NSsensorON::ev_NSsensorON() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_NSsensorON)
    setId(ev_NSsensorON_Default_id);
}

bool ev_NSsensorON::isTypeOf(short id) const {
    return (ev_NSsensorON_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_NSsensorON, Default, Default, ev_NSsensorON())

//## event ev_NSsensorOFF()
ev_NSsensorOFF::ev_NSsensorOFF() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_NSsensorOFF)
    setId(ev_NSsensorOFF_Default_id);
}

bool ev_NSsensorOFF::isTypeOf(short id) const {
    return (ev_NSsensorOFF_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_NSsensorOFF, Default, Default, ev_NSsensorOFF())

//## event ev_EWsensorON()
ev_EWsensorON::ev_EWsensorON() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_EWsensorON)
    setId(ev_EWsensorON_Default_id);
}

bool ev_EWsensorON::isTypeOf(short id) const {
    return (ev_EWsensorON_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_EWsensorON, Default, Default, ev_EWsensorON())

//## event ev_EWsensorOFF()
ev_EWsensorOFF::ev_EWsensorOFF() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_EWsensorOFF)
    setId(ev_EWsensorOFF_Default_id);
}

bool ev_EWsensorOFF::isTypeOf(short id) const {
    return (ev_EWsensorOFF_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_EWsensorOFF, Default, Default, ev_EWsensorOFF())

//## event ev_EWopen()
ev_EWopen::ev_EWopen() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_EWopen)
    setId(ev_EWopen_Default_id);
}

bool ev_EWopen::isTypeOf(short id) const {
    return (ev_EWopen_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_EWopen, Default, Default, ev_EWopen())

//## event ev_NSopen()
ev_NSopen::ev_NSopen() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_NSopen)
    setId(ev_NSopen_Default_id);
}

bool ev_NSopen::isTypeOf(short id) const {
    return (ev_NSopen_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_NSopen, Default, Default, ev_NSopen())

//## event ev_EmergNS()
ev_EmergNS::ev_EmergNS() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_EmergNS)
    setId(ev_EmergNS_Default_id);
}

bool ev_EmergNS::isTypeOf(short id) const {
    return (ev_EmergNS_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_EmergNS, Default, Default, ev_EmergNS())

//## event ev_EmergEW()
ev_EmergEW::ev_EmergEW() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_EmergEW)
    setId(ev_EmergEW_Default_id);
}

bool ev_EmergEW::isTypeOf(short id) const {
    return (ev_EmergEW_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_EmergEW, Default, Default, ev_EmergEW())

//## event ev_EWsense()
ev_EWsense::ev_EWsense() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_EWsense)
    setId(ev_EWsense_Default_id);
}

bool ev_EWsense::isTypeOf(short id) const {
    return (ev_EWsense_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_EWsense, Default, Default, ev_EWsense())

//## event ev_NSsense()
ev_NSsense::ev_NSsense() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_NSsense)
    setId(ev_NSsense_Default_id);
}

bool ev_NSsense::isTypeOf(short id) const {
    return (ev_NSsense_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_NSsense, Default, Default, ev_NSsense())

//## event ev_Den()
ev_Den::ev_Den() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_Den)
    setId(ev_Den_Default_id);
}

bool ev_Den::isTypeOf(short id) const {
    return (ev_Den_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_Den, Default, Default, ev_Den())

//## event ev_DenON()
ev_DenON::ev_DenON() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_DenON)
    setId(ev_DenON_Default_id);
}

bool ev_DenON::isTypeOf(short id) const {
    return (ev_DenON_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_DenON, Default, Default, ev_DenON())

//## event ev_NormON()
ev_NormON::ev_NormON() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_NormON)
    setId(ev_NormON_Default_id);
}

bool ev_NormON::isTypeOf(short id) const {
    return (ev_NormON_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_NormON, Default, Default, ev_NormON())

//## event ev_NormOFF()
ev_NormOFF::ev_NormOFF() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_NormOFF)
    setId(ev_NormOFF_Default_id);
}

bool ev_NormOFF::isTypeOf(short id) const {
    return (ev_NormOFF_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_NormOFF, Default, Default, ev_NormOFF())

//## event event_22()
event_22::event_22() {
    NOTIFY_EVENT_CONSTRUCTOR(event_22)
    setId(event_22_Default_id);
}

bool event_22::isTypeOf(short id) const {
    return (event_22_Default_id==id);
}

IMPLEMENT_META_EVENT_P(event_22, Default, Default, event_22())

//## event event_36()
event_36::event_36() {
    NOTIFY_EVENT_CONSTRUCTOR(event_36)
    setId(event_36_Default_id);
}

bool event_36::isTypeOf(short id) const {
    return (event_36_Default_id==id);
}

IMPLEMENT_META_EVENT_P(event_36, Default, Default, event_36())

//## event ev_DenOFF()
ev_DenOFF::ev_DenOFF() {
    NOTIFY_EVENT_CONSTRUCTOR(ev_DenOFF)
    setId(ev_DenOFF_Default_id);
}

bool ev_DenOFF::isTypeOf(short id) const {
    return (ev_DenOFF_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ev_DenOFF, Default, Default, ev_DenOFF())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig_copy_copy\Default.cpp
*********************************************************************/
