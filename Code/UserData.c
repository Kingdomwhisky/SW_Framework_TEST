#include "../Head/UserData.h"
#include "../Head/UserInclude.h"


StructUserDataType UserDataDefault =
{
    530,    //WORD uskLightVakue;
    38,     //WORD usTemprature;
    60,     //WORD usHumidity;       // Humidity

    45,      //BYTE ucHPos;
    55,      //BYTE ucVPos;    

    0,        //BYTE ucLightOn : 1;
    1,        //BYTE ucHumiOn  : 1;
    //...
    7,        //BYTE ucCoderMode : 3;
};


StructUserDataType g_stUserData;

//Anolog Memory Action
void Memory_Restore_UserSetting(void);   //Data Initial or Reset
void Memory_Save_UserSetting(void);     //Data Write
void Memory_Load_UserSetting(void);    //Data Read

void Memory_Restore_UserSetting()
{
    //SET_LIGHT_VALUE(UserDataDefault.uskLightVakue);
    //SET_CODE_MODE(UserDataDefault.ucCoderMode);

    g_stUserData = UserDataDefault;

    Memory_Save_UserSetting();
}


void Memory_Save_UserSetting()
{
    FILE *fp;

    

    fp = fopen("../Data/Userdata1.txt","rb+");   //"rb+"代表以二进制形式打开
    if(fp == NULL)
    {
        printf("Open file fail!\n");
        exit(0);
    }

    fwrite(&g_stUserData, sizeof(StructUserDataType), 1, fp);


    //fread(b, sizeof(char), N, fp);

    fclose(fp);
}


void Memory_Load_UserSetting()   //???
{
    FILE *fp;

    

    fp = fopen("../Data/Userdata1.txt","rb+");   //"rb+"代表以二进制形式打开
    if(fp == NULL)
    {
        printf("Open file fail!\n");
        exit(0);
    }

    fread(&g_stUserData, sizeof(StructUserDataType), 1, fp);


    //fread(b, sizeof(char), N, fp);

    fclose(fp);
}

