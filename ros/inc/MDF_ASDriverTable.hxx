// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ASDriverTable_HeaderFile
#define _MDF_ASDriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MDF_ASDriverTable_HeaderFile
#include <Handle_MDF_ASDriverTable.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MDF_TypeASDriverMap_HeaderFile
#include <MDF_TypeASDriverMap.hxx>
#endif
#ifndef _MDF_TypeDriverListMapOfASDriverTable_HeaderFile
#include <MDF_TypeDriverListMapOfASDriverTable.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_MDF_ASDriver_HeaderFile
#include <Handle_MDF_ASDriver.hxx>
#endif
#ifndef _Handle_MDF_ASDriverHSequence_HeaderFile
#include <Handle_MDF_ASDriverHSequence.hxx>
#endif
#ifndef _Handle_MDF_ListNodeOfDriverListOfASDriverTable_HeaderFile
#include <Handle_MDF_ListNodeOfDriverListOfASDriverTable.hxx>
#endif
#ifndef _Handle_MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable_HeaderFile
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
class MDF_ASDriver;
class MDF_ASDriverHSequence;
class MDF_TypeASDriverMap;
class MDF_DriverListOfASDriverTable;
class MDF_ListNodeOfDriverListOfASDriverTable;
class MDF_ListIteratorOfDriverListOfASDriverTable;
class MDF_TypeDriverListMapOfASDriverTable;
class MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable;
class Standard_Type;



class MDF_ASDriverTable : public MMgt_TShared {

public:

  
  Standard_EXPORT   MDF_ASDriverTable();
  
  Standard_EXPORT     void SetDriver(const Handle(MDF_ASDriver)& anHDriver) ;
  
  Standard_EXPORT     void SetDrivers(const Handle(MDF_ASDriverHSequence)& aDriverHSeq) ;
  
  Standard_EXPORT    const MDF_TypeASDriverMap& GetDrivers(const Standard_Integer aVersion = 0) ;
  
  Standard_EXPORT     Standard_Boolean GetDriver(const Handle(Standard_Type)& aType,Handle(MDF_ASDriver)& anHDriver,const Standard_Integer aVersion = 0) const;




  DEFINE_STANDARD_RTTI(MDF_ASDriverTable)

protected:




private: 


Standard_Integer myVersion;
MDF_TypeASDriverMap myMap;
MDF_TypeDriverListMapOfASDriverTable myMapOfLst;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif