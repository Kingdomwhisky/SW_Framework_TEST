#ifndef __USERPROJECT_H
#define __USERPROJECT_H


#define    _PRODUCT_NUMBER_1         0x01
#define    _PRODUCT_NUMBER_2         0x02
//......
#define    _PRODUCT_NUMBER_X         0x50



#define    _PRODUCT_ID              _PRODUCT_NUMBER_1


#if(_PRODUCT_ID == _PRODUCT_NUMBER_1)

#define     PRODUCT_NAME        "_PRODUCT_NUMBER_1"
#define     SW_VERSION          "V1.0.1"


//Default Setting Define 

#elif(_PRODUCT_ID == _PRODUCT_NUMBER_2)
#define     PRODUCT_NAME        "_PRODUCT_NUMBER_2"
#define     SW_VERSION          "V1.0.0"

#else
#warning    "Please Check Project Define!!!"
#define     PRODUCT_NAME        "_PRODUCT_NUMBER_X"
#define     SW_VERSION          "V1.0.0"

#endif



#endif