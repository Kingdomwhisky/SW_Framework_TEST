#ifndef _GLOBAL_H
#define _GLOBAL_H

#include "stdio.h"
#include "stdlib.h"
//#include "math.h"

//Data Type define
typedef unsigned char BYTE;     //8 Bit
typedef unsigned short HWORD;    //16 Bit
typedef unsigned int  WORD;     //32 Bit
typedef unsigned long long DWORD;    //64 Bit ?



#define MAXOF(a, b)                             (((a) > (b)) ? (a) : (b))
#define MINOF(a, b)                             (((a) < (b)) ? (a) : (b))
#define MIDOF(a,b,c)                            (MAXOF(a,b)>c?MAXOF(MINOF(a,b),c):MINOF(MAXOF(a,b),c))

//Self add
#define  Max(x,y)        ((x > y) ? x : y)

#endif
