#ifndef BASIC_H
#define BASIC_H

#include "MyType.h"
// Conversion en base 2
// à partir d'un nopmbre entier (16bits)
//
char * ConvertDeciToBinary( WORD value_to_convert );



void Basic( unsigned char * BufFile, char * Listing, bool IsBasic, bool CrLf );




#endif
