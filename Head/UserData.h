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


struct GPIOSEL1_BITS   // Bits Description
{  
    HWORD GPIO0 : 2;    // 1:0 Select input qualification type for GPIO0
    HWORD GPIO1 : 2;    // 3:2 Select input qualification type for GPIO1
    HWORD GPIO2 : 2;    // 5:4 Select input qualification type for GPIO2
    HWORD GPIO3 : 2;    // 7:6 Select input qualification type for GPIO3
    HWORD GPIO4 : 2;    // 9:8 Select input qualification type for GPIO4
    HWORD GPIO5 : 2;    // 11:10 Select input qualification type for GPIO5
    HWORD GPIO6 : 2;    // 13:12 Select input qualification type for GPIO6
    HWORD GPIO7 : 2;    // 15:14 Select input qualification type for GPIO7
    HWORD GPIO8 : 2;    // 17:16 Select input qualification type for GPIO8
    HWORD GPIO9 : 2;    // 19:18 Select input qualification type for GPIO9
    HWORD GPIO10 : 2;    // 21:20 Select input qualification type for GPIO10
    HWORD GPIO11 : 2;    // 23:22 Select input qualification type for GPIO11
    HWORD GPIO12 : 2;    // 25:24 Select input qualification type for GPIO12
    HWORD GPIO13 : 2;    // 27:26 Select input qualification type for GPIO13
    HWORD GPIO14 : 2;    // 29:28 Select input qualification type for GPIO14    
    HWORD GPIO15 : 2;    // 31:30 Select input qualification type for GPIO15
};


union GPIOSEL1_REG
{
    WORD all;
    struct GPIOSEL1_BITS bit; 
};


union BIT32_DATA
{
    WORD data; 

    struct
    {
        BYTE byte0;
        BYTE byte1;
        BYTE byte2;
        BYTE byte3;                
    }byte;

};

#endif
