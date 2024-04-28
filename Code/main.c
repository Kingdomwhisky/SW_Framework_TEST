//#include <stdio.h>
#include "../Head/Global.h"
#include "../Head/UserInclude.h"



#if 0
int main()
{
    int n;
#if 0
    int a, b;
    
    printf("Please input two number:\n");
    scanf("%d,%d",&a, &b);

    printf("The Max number is: %d\n",Max(a,b));
#endif

#if 1
    printf("SW_VERSION:%s\n",SW_VERSION);
    while(1)
    {
        printf("Please input a number:\n");
        scanf("%d",&n);
        if(n == 0)
        { 
            printf("End in this\n");
            break;//return 0;
        }
        else
        {
            printf("n == %d\n\n",n);
        }
    }
#endif
    printf("Hello This is a Test!\n");
    printf("Test By HKW");
    return 0;
}
#endif

#if 0
int main()
{
    BYTE a = 255;
    WORD b = 1024;

    printf("a = %d, b = %d\n",a,b);
    return 0;
}
#endif

#if 0
int main()
{
    WORD Hour = 0;
    WORD Min = 0;
    WORD count = 0;
    BYTE BL_MAX = 255;
    BYTE BL_MID = 200;
    BYTE BL_MIN = 60;


    while(Hour < 20000)
    {
        count++;
        if((Hour % 240 == 0) && (Hour != 0))
        {
            if(BL_MID < BL_MAX)
            {
                //BL_MID = BL_MID + 1;
                BL_MID++;
            }
        }

        printf("Run counter: %d\n", count);
        printf("Curent Time Hour: %d\n",Hour);
        printf("PWM BL_MID = %d\n\n", BL_MID);
        
        Hour += 240;
    }

    printf("Time end in Hour:%d\n", Hour);
    return 0;
}
#endif

//Test Structure Data
#if 0

int main()
{
    Memory_Restore_UserSetting();

//Default Data
    printf("UserDataDefault:\n");
    printf("%d\n",UserDataDefault.uskLightVakue);
    printf("%d\n",UserDataDefault.usTemprature);
    printf("%d\n",UserDataDefault.usHumidity);
    printf("%d\n",UserDataDefault.ucHPos);
    printf("%d\n",UserDataDefault.ucVPos);
    printf("%d\n",UserDataDefault.ucLightOn);
    printf("%d\n",UserDataDefault.ucHumiOn);
    printf("%d\n\n",UserDataDefault.ucCoderMode);


    printf("GET_LIGHT_VALUE() = %d\n",GET_LIGHT_VALUE());
    printf("GET_CODE_MODE() = %d\n",GET_CODE_MODE());


    printf("It's ending. Test by KW!\n");
    return 0;
}
#endif

#if 0   //TEST file operation

#define     N     100

int main()
{
    FILE *fp;
    //char a[N] = {"This is a TEST by HKW!"};
    char a[N];
    char b[N];
    

    fp = fopen("../Data/Userdata1.txt","rb+");   //"rb+"代表以二进制形式打开
    if(fp == NULL)
    {
        printf("Open file fail!\n");
        exit(0);
    }
   
    printf("Please input data to the file:\n");
    //scanf("%s",a);    //Scanf("%s",...) 遇到'空格'或者'换行'会自动结束
    fgets(a, sizeof(a), stdin);     //这种输入方式可以包含空格

    fwrite(a, sizeof(char), N, fp);

    //将文件中的位置指针重新定位到文件开头
    rewind(fp);

    fread(b, sizeof(char), N, fp);
    printf("Context of file: \n");
    printf("%s\n",b);

    fclose(fp);

    return 0;
}

#endif

#if 0
int main()
{
    char a[100];


    printf("Please input the string: \n");
    //scanf("%s",a);    //Scanf("%s",...) 遇到'空格'或者'换行'会自动结束

    fgets(a, sizeof(a), stdin);     //这种输入方式可以包含空格

    printf("Context: \n");
    printf("%s\n",a);

}
#endif


#if 1 //Test Analog memory

int main()
{
//Show product info    
    printf("%s\n",PRODUCT_NAME);
    printf("%s\n\n",SW_VERSION);
    //Memory_Restore_UserSetting();   //Data Initial or Reset

    Memory_Load_UserSetting();

    //SET_LIGHT_VALUE(420);
    //SET_CODE_MODE(0x06);
    //Memory_Save_UserSetting();

//Read Data in file
    printf("g_stUserData:\n");
    printf("%d\n",g_stUserData.uskLightVakue);
    printf("%d\n",g_stUserData.usTemprature);
    printf("%d\n",g_stUserData.usHumidity);
    printf("%d\n",g_stUserData.ucHPos);
    printf("%d\n",g_stUserData.ucVPos);
    printf("%d\n",g_stUserData.ucLightOn);
    printf("%d\n",g_stUserData.ucHumiOn);
    printf("%d\n\n",g_stUserData.ucCoderMode);

    return 0;    
}

#endif