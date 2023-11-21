#include<stdio.h>
////当用字符串输入函数，输入字符串时，结尾必定加一个\0，回车符\n在\0的前面。因为\n就在输入字符串的最后，最最后加上\0；
//int num_of_goal(char* ch,int goal)
//{
//    int count=0;
//    while(*ch!='\0')
//    {
//        if((goal>='a' && goal<='z'))
//        {
//            if(goal==*ch || (goal-32)==*ch)
//            {
//                count++;
//            }
//            ch++;
//        }
//        if((goal>='A' && goal<='Z'))
//        {
//            if(goal==*ch || (goal+32)==*ch)
//            {
//                count++;
//            }
//            ch++;
//        }
//        else
//        {
//            if(goal==*ch)
//            {
//                count++;
//            }
//            ch++;
//        }
//    }
//    return count;
//
//}
//int main()
//{
//    char ch[1002]={0};
//    fgets(ch,1002,stdin);      //fgets函数的用法，fgets(char* ch,int num,stdin)    /stdin ->file* stream
//    char goal=0;
//    scanf("%c",&goal);
//    int num=num_of_goal(ch,goal);
//    printf("%d",num);
//    return 0;
//}


//输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
////只从2，3，5，7，中找质因子，错误，因为还有其他。
//void change(int num,int* arr)
//{
//    while(1)
//    {
//        if(num%2==0)
//        {
//            *arr=2;    num=num/2;
//            arr++;
//        }
//        else if(num%3==0)
//        {
//            *arr=3;    num=num/3;
//            arr++;
//        }
//        else if(num%5==0)
//        {
//            *arr=5;    num=num/5;
//            arr++;
//        }
//        else if(num%7==0)
//        {
//            *arr=7;    num=num/7;
//            arr++;
//        }
//        else
//        {
//            if(num!=1) *arr=num;
//            break;
//        }
//    }
//}
//int main()
//{
//    int num;
//    scanf("%d",&num);
//    int arr[100]={0};
//    change(num,arr);
//    int i=0;
//    while(arr[i]!=0)
//    {
//        printf("%d ",arr[i]);
//        i++;
//    }
//    return 0;
//}
//////
//void change(int num,int* arr)
//{
//    int j=0;
//    jump:
//    while(1)
//    {
//        for(int i=2;i*i<=num;i++)
//        {
//            if(num%i==0)
//            {
//                arr[j]=i;
//                num/=i;
//                j++;
//                goto jump;
//            }
//        }
//        arr[j]=num;
//        break;
//    }
//}
//int main()
//{
//    int num;
//    scanf("%d",&num);
//    int arr[100]={0};
//    change(num,arr);
//    int i=0;
//    while(arr[i]!=0)
//    {
//        printf("%d ",arr[i]);
//        i++;
//    }
//    return 0;
//}

////打印从1到n的数字，用循环和递归来分别计算表示。
////循环
//void printn(int n)
//{
//    for(int i=1;i<=n;i++)
//    {
//        printf("%d\n",i);
//    }
//}
////递归,递归容易空间占用太大，程序崩溃。
//void printn(int n)
//{
//    if(n)
//    {printn(n-1);
//    printf("%d\n",n);}
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printn(n);
//    return 0;
//}



////计算程序从开始运行到结束所消耗的时间。clock()   常数CLK_TCK;
//#include<time.h>
//clock_t start,stop;
//double duration;
//void printn(int n)
//{
//    for(int i=1;i<=n;i++)
//    {
//        printf("%d\n",i);
//    }
//}
////递归,递归容易空间占用太大，程序崩溃。
//void printn(int n)
//{
//    if(n)
//    {printn(n-1);
//        printf("%d\n",n);}
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    start=clock();
//    printn(n);
//    stop=clock();
//    duration=((double)(stop-start))/CLK_TCK;
//    printf("%lf",duration);
//    return 0;
//}



////f(x)=求和（n，i=0）(i*x^i)
////通过多次调用函数（循环）来增大时间，以使调用时间更加清晰。
//#include<time.h>
//#include<math.h>
//#define MAXK 1e7
//double f1(int n,double a[],double x)
//{int i;
//    double p=a[0];
//    for(i=1;i<=n;i++)
//    {
//        p+=a[i]*pow(x,i);
//    }
//    return p;
//}
//
//double f2(int n,double a[],double x)
//{int i;
//    double p=a[n];
//    for(i=n;i>0;i--)
//        p=a[i-1]+x*p;
//    return p;
//}
//
//clock_t start,stop;
//double duration;
//int main()
//{
//    double x;
//    scanf("%lf",&x);
//    double a[10];
//    for(int i=0;i<=9;i++)
//    {a[i]=i;}
//
//    start=clock();
//    for(int i=0;i<MAXK;i++)
//        f1(9,a,x);
//    stop=clock();
//    duration=((double)(stop-start))/CLOCKS_PER_SEC/MAXK;
//    printf("ticks1=%f\n",(double)(stop-start));
//    printf("duration1=%6.2e\n",duration);
//
//    start=clock();
//    for(int i=0;i<MAXK;i++)
//        f2(9,a,x);
//    stop=clock();
//    duration=((double)(stop-start))/CLOCKS_PER_SEC/MAXK;
//    printf("ticks2=%f\n",(double)(stop-start));
//    printf("duration2=%6.2e\n",duration);
//}





































