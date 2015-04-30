/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Public
//!	Generated Date	: Wed, 12, Sep 2012  
	File Path	: DefaultComponent/DefaultConfig/Public.h
*********************************************************************/

#ifndef Public_H
#define Public_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor Public
class Public {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPublic;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Public();
    
    //## auto_generated
    ~Public();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPublic : virtual public AOMInstance {
    DECLARE_META(Public, OMAnimatedPublic)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Public.h
*********************************************************************/
