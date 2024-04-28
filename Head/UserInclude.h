
#include "./Global.h"
#include "./UserProject.h"
#include "./UserData.h"

//Relevant data structure
extern StructUserDataType g_stUserData;
extern  StructUserDataType UserDataDefault;


extern void Memory_Restore_UserSetting(void);   //Data Initial or Reset
extern void Memory_Save_UserSetting(void);     //Data Write
extern void Memory_Load_UserSetting(void);    //Data Read



#define         GET_LIGHT_VALUE()           (g_stUserData.uskLightVakue)
#define         SET_LIGHT_VALUE(x)          {\
                                                g_stUserData.uskLightVakue = x;\
                                            }


#define         GET_CODE_MODE()             (g_stUserData.ucCoderMode)
#define         SET_CODE_MODE(x)            {\
                                                g_stUserData.ucCoderMode = x;\
                                            }

//......