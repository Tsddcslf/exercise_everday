#include<stdio.h>
#include<windows.h>
#include<string.h>

//goto函数，跳转；
////需要在windows上运行；；；    //这里也行//
//int main()
//{
//    char ch[10]={0};
//    system("shutdown -s -t 60");
//    printf("电脑将在60分钟关机，除非输入“我是猪”\n");
//    again:
//    scanf("%s",ch);
//    if(strcmp(ch,"我是猪")==0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        printf("输入错误，重新输入：\n");
//        goto again;
//    }
//    return 0;
//}


//函数
//strcpy
// char* strcpy(char* destination,const char* source);
//int main()
//{
//    char ch[20];
//    strcpy(ch,"wo ai xiao shi shi!");
//    printf("%s",ch);
//    return 0;
//}

//
////memset
//int main()
//{
//    char arr[20]="wo ai xiao shi shi!";
//    memset(arr+3,'6',2);
//    printf("%s",arr);
//    return 0;
//
//}

//
////写一个函数，取两个数的最大值；
//int max1(int a,int b)
//{
//    return a>b?a:b;
//}
//int main()
//{
//    int a,b;
//    scanf("%d %d",&a,&b);
//    printf("%d",max1(a,b));
//    return 0;
//}


//
////写一个函数，交换两个整形变量的内容。
//void change(int* x,int* y)    //x,y形式参数，形参；    //修改形参不会影响实参。
//{
//    int temp=*x;
//    *x=*y;
//    * y=temp;
//}
//int main()
//{
//    int a,b;                 //a,b，实际参数，实参；
//    scanf("%d %d",&a,&b);
//    int* p=&a;
//    int* q=&b;
//    change(p,q);
//    printf("%d %d",a,b);
//    return 0;
//}


//int main()
//{
//    int a;
//    scanf("%d",&a);
//    int* p=&a;
//    printf("%p",p);
//    return 0;
//}
//


//
////打印100~200之间的素数（只能被1和它本身整除）；
//
//void judge(int a)   //判断一个数是否为素数，a;
//{
//    int j;
//    for(j=2;j<=a-1;j++)
//    {
//        if(a%j==0)
//        {
//            break;
//        }
//    }
//    if(j==a)
//    {
//        printf("%d ",a);
//    }
//}
//int main()
//{
//    int i;
//    for(i=100;i<=200;i++)
//    {
//        judge(i);
//    }
//    return 0;
//}

int judge(int a)
{
    for(int j=2;j*j<=a;j++)
    {
        if(a%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i;
    for(i=100;i<=200;i++)
    {
        if(judge(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}















