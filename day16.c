#include<stdio.h>

////打印1000-2000之间的闰年；
//int judge(int a)
//{
//    if(a%4==0 && a%100!=0 || a%400==0)
//    {
//        return 1;
//    }
//    return 0;
//}
//int main()
//{
//    for(int i=1000;i<=2000;i++)
//    {
//        if(judge(i))
//        {
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}

//
////写一个函数，实现一个整形有序数列的二分查找；
//
//int seek(int a,int arr[],int length)    //当数组作为参数传递时，实际上是通过指针传递的。所以此时在函数中用sizeof(arr)表示的是指针的大小。
//{                                         //传递数组首元素的地址
//    int left=0;
//    int right=length-1;
//    while(left<=right)
//    {
//        int mid=(left+right)/2;     //为防止整数溢出，int mid=left+(right-left)/2;
//        if(arr[mid]<a)
//        {
//            left=mid+1;
//        }
//        else if(arr[mid]>a)
//        {
//            right=mid-1;
//        }
//
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int arr[20]={1,2,3,4,5,6,7,8,9,10};
//    int length =sizeof(arr)/sizeof(arr[1]);
//    int t=seek(7,arr,length);
//    if(t==-1)
//    {
//        printf("找不到");
//    }
//    else
//    {
//        printf("%d",t);
//    }
//    return 0;
//}

//
////写一个函数，每调用一次，就会将num的值加一；  传递num的指针。
//void fuck(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num=0;
//    fuck(&num);
//    fuck(&num);
//
//    fuck(&num);
//
//    fuck(&num);
//
//    fuck(&num);
//
//    printf("%d",num);
//    return 0;
//}
//

////前置++，后置++；
//int main()
//{
//    int a=5;
//    int b=a++;  //先返回后++
//    int c=++a;  //先++后返回
//    printf("%d %d %d",b,a,c);
//    return 0;
//}
//
//
////全局变量；
//int a=10;  //全局变量，在主函数的外面。
//void add()
//{
//    a++;
//}
//
//int main()
//{
//    printf("%d",a);
//    return 0;
//}
//
//
//int main()
//{
//    printf("%d",printf("%d",printf("%d",43)));
//    return 0;
//}
//
////函数的声明和定义；
//int add(int,int);     //函数的声明
//int main()
//{
//    int a=10;
//    int b=10;
//    int sum=add(a,b);
//    printf("%d\n",sum);
//    return 0;
//}
//
//int add(int x,int y)     //函数的定义
//{
//    return x+y;
//}


////调用另一个文件中的函数，add.c, add.h；  函数定义放在add.c中，函数声明放在add.h中；
//#include"add.h"
//int main()
//{
//    int a=10;
//    int b=10;
//    int sum=add(a,b);
//    printf("%d",sum);
//    return 0;
//}



//递归

void print(unsigned int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);
}
int main()
{
    unsigned int num=1234;
    print(num);
    return 0;
}
































