/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: Public
//!	Generated Date	: Wed, 6, Mar 2013  
	File Path	: DefaultComponent/DefaultConfig_copy/Public.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Public.h"
//#[ ignore
#define Default_Public_Public_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Public
Public::Public() {
    NOTIFY_CONSTRUCTOR(Public, Public(), 0, Default_Public_Public_SERIALIZE);
}

Public::~Public() {
    NOTIFY_DESTRUCTOR(~Public, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPublic::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Public, Default, Default, false, OMAnimatedPublic)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/Public.cpp
*********************************************************************/
