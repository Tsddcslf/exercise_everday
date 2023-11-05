#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<stdio.h>
//int main()
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("%#o %#x", 1234, 1234);
//
//        return 0;
//}
//
//int main()
//{
//	int flag = 0;
//	if (flag)     //C中真为非0，假为0。。真/假 ！？    //if是一个条件判断语句，判断条件的是/非，真/假，if（a>3）,当a>3时，条件即为真
//	{
//		printf("%s\n", "牛碧！！");
//	}
//	else
//	{
//		printf("%s\n", "不牛碧！！");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 0;
//	float c = 9.0;
//	char d = '*';
//	char e = '\0';
//	bool a_ = a;
//
//	return 0;
//}

        
//int main()
//{
//
//    printf("%d\n", sizeof "你好吗");   //汉字占的字节，三个起步，每加一个汉字加两个字节
//    return 0;
//}


//int main()
//{
//    int a = 10;
//    int b = 20;     //&&逻辑与   ||逻辑或
//    int c = 0;
//    if (a || c)
//    {
//        printf("你好");
//    }
//    if (b && c)
//    {
//        printf("你不好");
//    }
//    return 0;
//}

//
//typedef unsigned int uint;
//
//int main()
//{
//    unsigned int num = 0;
//    uint num2 = 1;
//    return 0;
//}


void test()
{
    static int a = 0;
    a++;
    printf("%d\n", a);
}

int main()
{
    int i = 0;
    while (i < 10)
    {
        test();
        i++;
    }
    return 0;
}