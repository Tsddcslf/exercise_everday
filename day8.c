#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	float num;
//	scanf("%f", &num);
//	printf("%d", (int)(num + 0.5));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    float a;
//   // int b = a / 1;    //a还没有数值；
//    scanf("%f", &a);
//    int b = a / 1;    //程序从上到下执行。
//
//    while (a >= 1)
//    {
//        a = a - 1;
//    }
//    if (a >= 0.5)
//    {
//        printf("%d", b + 1);
//    }
//    else
//    {
//        printf("%d", b);
//    }
//    return 0;
//}



//判断数字是否有过重复出现?   输入1223445677，输出7654321
int main()
{
    int num;
    scanf("%d",&num);
    int a[10] = { 0 };
    while (num != 0)
    {
        int i = num % 10;
        if (a[i] != 1)
        {
            printf("%d", i);
            a[i] = 1;
        }
        num = num / 10;
    }

    return 0;
}
