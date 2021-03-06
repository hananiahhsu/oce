// Created on: 1991-08-30
// Created by: Christian CAILLET
// Copyright (c) 1991-1999 Matra Datavision
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

//   StepFile_Read.hxx

//   routine assurant l'enchainement des operations de lecture d'un fichier
//   STEP dans un StepModel, en fonction d'une cle de reconnaissance
//   Retour de la fonction :
//     0 si OK  (le StepModel a ete charge)
//    -1 si abandon car fichier pas pu etre ouvert
//     1 si erreur en cours de lecture


#ifndef StepFile_Read_HeaderFile
#define StepFile_Read_HeaderFile

#include <iostream> 
//# include <stepread.h>  : sauf recfile_modeprint, declare ici
# include <StepData_StepModel.hxx>
# include <StepData_FileRecognizer.hxx>
# include <StepData_Protocol.hxx>

Standard_EXPORT void StepFile_ReadTrace (const Standard_Integer mode);
// Modal : 0 pas de trace, 1 trace LoadModel, 2 & 3 + trace interne lex-yac

//! Working function reading STEP file or stream.
//! @param theName - name of the file or stream
//! @param theIStream - pointer to stream to read; if null, file theName will be opened
//! @param theModel - STEP model
//! @param theProtocol - STEP protocol object
//! @return 0 on success, -1 if stream fails, 1 in case of parsing error
Standard_EXPORT Standard_Integer StepFile_Read (const char* theName,
                                                std::istream* theIStream,
                                                const Handle(StepData_StepModel)& theModel,
                                                const Handle(StepData_Protocol)& theProtocol);

#endif
