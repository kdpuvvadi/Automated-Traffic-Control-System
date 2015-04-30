/********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPI
//!	Generated Date	: Wed, 12, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/TPI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TPI.h"
//#[ ignore
#define Default_TPI_TPI_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor TPI
TPI::TPI() {
    NOTIFY_CONSTRUCTOR(TPI, TPI(), 0, Default_TPI_TPI_SERIALIZE);
}

TPI::~TPI() {
    NOTIFY_DESTRUCTOR(~TPI, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTPI::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(TPI, Default, Default, false, OMAnimatedTPI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/TPI.cpp
*********************************************************************/
