#ifndef __USERDATA_H
#define __USERDATA_H

#include "./Global.h"



typedef struct
{
    WORD uskLightVakue;    // Light
    WORD usTemprature;     // Temprature
    WORD usHumidity;       // Humidity

    BYTE ucHPos;
    BYTE ucVPos;    

    BYTE ucLightOn : 1;
    BYTE ucHumiOn  : 1;
    //...
    BYTE ucCoderMode : 3;


    /* User data */
}StructUserDataType;



typedef struct
{
    WORD usTimerCounter;    //0 ~ 65535

    BYTE usRunMode : 1;

    /* System data */
}StructSystemDataType;





#endif
