#include<stdio.h>
//int main()
//{
//    int day;
//    scanf("%d",&day);
//    switch(day)
//    {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期日\n");
//            break;
//        default:
//            printf("输入错误\n");
//
//    }
//    return 0;
//}

//int main()
//{
//    int day=0;
//    scanf("%d",&day);
//    switch(day)         //条件判断语句，选择结构，分支语句；switch，开关，转换。case，案例。
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//        default:
//            printf("wrong\n");
//            break;
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n=1;
//    int m = 2;   //3
//    switch (n)
//    {
//        case 1:       //如果没有break，将会出现case穿透，会将匹配的case以下的全部执行；
//            m++;
//        case 2:
//            n++;
//        case 3:
//            switch (n)
//            {//switch允许嵌套使用
//                case 1:
//                    n++;
//                case 2:
//                    m++;
//                    n++;
//                    break;
//            }
//        case 4:
//            m++;
//            break;
//        default:
//            break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//
//int main()
//{
//    int ch=0;
//    while((ch=getchar())!=EOF)
//    {
//        putchar(ch);
//        getchar();
//    }
//    return 0;
//}
//
//int main()
//{
//    char ch='\0';
//    while((ch=getchar())!=EOF)
//    {
//        if(ch<'0' || ch>'9')
//            continue;
//        printf("%c\n",ch);
//    }
//    return 0;
//}

//int main()
//{
//    char ch='\0';
//    scanf("%c",&ch);   //输入abcdef
//    putchar(ch);
//}


//int main()
//{
//    char password[20]={0};
//    scanf("%s",&password);    //abcde asdc\n
//    int ch=0;
//    while((ch=getchar())!='\n')    //用while循环来多次取出缓冲区的字符；
//    {
//        printf("%c",ch);
//    }
//
//    return 0;
//}


int main()
{
    int n;   //求n!+(n-1)!+……
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int sum0=1;
        for(int j=1;j<=i;j++)
        {
            sum0=sum0*j;
        }
        sum=sum0+sum;
    }
    printf("%d",sum);
    return 0;
}












































































