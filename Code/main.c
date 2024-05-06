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


#if 0 //Test Analog memory

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


//Union or Structure Test
//相同类型的数据会共用内存地址
#if 0
union GPIOSEL1_REG gpioreg_test;
union BIT32_DATA   Bit32data_test;

int main()
{
    gpioreg_test.all  =   0xABC07F01;

    printf("gpioreg_test.all = 0x%x\n", gpioreg_test.all);


    printf("gpioreg_test.bit.GPIO15 = 0x%x\n", gpioreg_test.bit.GPIO15);
    printf("gpioreg_test.bit.GPIO14 = 0x%x\n", gpioreg_test.bit.GPIO14);

    printf("gpioreg_test.bit.GPIO1 = 0x%x\n", gpioreg_test.bit.GPIO1);    
    printf("gpioreg_test.bit.GPIO0 = 0x%x\n", gpioreg_test.bit.GPIO0);

#if 0   //all to one
    Bit32data_test.data = 0xEF45C6A0;
    printf("Bit32data_test.data = 0x%x\n", Bit32data_test.data);
    printf("Bit32data_test.byte.byte3 = 0x%x\n", Bit32data_test.byte.byte3);
    printf("Bit32data_test.byte.byte2 = 0x%x\n", Bit32data_test.byte.byte2);
    printf("Bit32data_test.byte.byte1 = 0x%x\n", Bit32data_test.byte.byte1);
    printf("Bit32data_test.byte.byte0 = 0x%x\n", Bit32data_test.byte.byte0);            
#endif

#if 1  //one to all
    Bit32data_test.byte.byte3 = 0xCA;
    //byte2未赋值，默认为0 (byte2 is not assigned a value and defaults to 0)
    //byte1未赋值，默认为0 (byte1 is not assigned a value and defaults to 0)
    Bit32data_test.byte.byte0 = 0x32;

    printf("Bit32data_test.byte.byte3 = 0x%x\n", Bit32data_test.byte.byte3);
    printf("Bit32data_test.byte.byte2 = 0x%x\n", Bit32data_test.byte.byte2);
    printf("Bit32data_test.byte.byte1 = 0x%x\n", Bit32data_test.byte.byte1);
    printf("Bit32data_test.byte.byte0 = 0x%x\n", Bit32data_test.byte.byte0);         
    printf("Bit32data_test.data = 0x%x\n", Bit32data_test.data);

#endif

    return 0;
}

#endif


//Test the different data's size
#if 1

int main()
{
    printf("sizeof unsigned char = %d\n",sizeof(BYTE));
    printf("sizeof unsigned short = %d\n",sizeof(HWORD));
    printf("sizeof unsigned int = %d\n",sizeof(WORD));
    printf("sizeof unsigned long long = %d\n",sizeof(DWORD));
    printf("sizeof unsigned long = %d\n",sizeof(long));            
    printf("\n");

    return 0;
}

#endif