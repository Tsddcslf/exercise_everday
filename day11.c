////#include<stdio.h>
////int main()
////{
////    int arr[10];
////    for(int i=0;i<10;i++)
////    {
////        scanf("%d",&arr[i]);
////    }
////    for(int j=0;j<=10;j++)
////    {
////        if(arr[j]>=60)
////        {printf("%s","Pass");}
////        else {
////            printf("Fail");
////        }
////
////    }
////
////    return 0;
////}
//
////for循环和while循环的一些用法区别
//
////
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    int i=0;
//    while(scanf("%d",&arr[i])!=EOF)
//    {
//        if(arr[i]>=60)
//        {
//            printf("Pass");
//        }
//        else
//        {
//            printf("Fail");
//        }
//        i++;
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[10];
//    for(int i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    return 0;
//}


////输入流，scanf函数必须取到他所规定的字符的个数，才会停止。
//#include <stdio.h>
//int main()
//{
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//    int max=a>b?a:b;
//    int max1=max>c?max:c;
//    printf("%d",max1);
//}



//输入n个数字，输出最大的五个数；
#include<stdio.h>
int max(int b[50], int length)      //创建max函数，输入数组，输入长度，输出最大值。
{
    int m = b[0];
    for (int t = 0; t < length; t++)
    {
        if (b[t] >= m)
        {
            m = b[t];
        }
    }
    return m;
}
int main()
{
    int n;
    int a[50];  //创建整形数组，来容纳输入的n个数；
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)  //连续输入n个数；
    {
        scanf("%d ", &a[i]);
    }
    for (int j = 0; j < 5; j++)   //创建循环，5个，输出五个数
    {
        int mmm = max(a,n);
        printf("%d ", mmm);

        for (int p = 0; p <= n; p++)     //再次遍历数组，将选择出来的最大的数变得很小；
        {
            if (a[p] == mmm)
            {
                a[p] = -999999;
                break;
            }
        }

    }
    return 0;
}