/*********************************************************************
	Rhapsody	: 7.5.2 
	Login		: Administrator
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig_copy
	Model Element	: TPI
//!	Generated Date	: Wed, 6, Mar 2013  
	File Path	: DefaultComponent/DefaultConfig_copy/TPI.h
*********************************************************************/

#ifndef TPI_H
#define TPI_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor TPI
class TPI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTPI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TPI();
    
    //## auto_generated
    ~TPI();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTPI : virtual public AOMInstance {
    DECLARE_META(TPI, OMAnimatedTPI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig_copy/TPI.h
*********************************************************************/
