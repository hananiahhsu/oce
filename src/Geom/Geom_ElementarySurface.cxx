// Created on: 1993-03-10
// Created by: JCV
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Geom_ElementarySurface.hxx>

IMPLEMENT_STANDARD_RTTIEXT(Geom_ElementarySurface,Geom_Surface)

//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape Geom_ElementarySurface::Continuity () const
{
  return GeomAbs_CN; 
}

//=======================================================================
//function : IsCNu
//purpose  : 
//=======================================================================

Standard_Boolean Geom_ElementarySurface::IsCNu (const Standard_Integer ) const
{
  return Standard_True; 
}

//=======================================================================
//function : IsCNv
//purpose  : 
//=======================================================================

Standard_Boolean Geom_ElementarySurface::IsCNv (const Standard_Integer ) const
{
  return Standard_True; 
}

//=======================================================================
//function : UReverse
//purpose  : 
//=======================================================================

void Geom_ElementarySurface::UReverse ()
{
  pos.YReverse();
}

//=======================================================================
//function : VReverse
//purpose  : 
//=======================================================================

void Geom_ElementarySurface::VReverse ()
{
  pos.ZReverse();
}
