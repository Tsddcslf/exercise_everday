#include<stdio.h>
////上楼梯问题，每次只能上一个或者两个，上n个楼梯有几种情况？   递归
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[31]={0};
//    a[0]=0;
//    a[1]=1;
//    a[2]=2;
//    for(int i=3;i<=n;i++)      //for循环中的递归，用for循环进行递归
//    {
//        a[i]=a[i-1]+a[i-2];
//    }
//    printf("%d",a[n]);
//    return 0;
//}

//int shangjici(int n)
//{
//    if(n==1)
//        return 1;
//    if(n==2)
//        return 2;
//    if(n>2)
//        return shangjici(n-1)+shangjici(n-2);
//}
//
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int num=shangjici(n);
//    printf("%d",num);
//    return 0;
//}

////???
//#include<stdio.h>
//int shangjici(int n)
//{
//    if(n==1)
//        return 1;
//    if(n==2)
//        return 2;
//    if(n>2)
//        return shangjici(n-1)+shangjici(n-2);
//    else
//        return 0;             //最好在所有的控制路径下都有返回值，不然可能会报错。因为多个if语句是并列关系。
//}
//
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int num=shangjici(n);
//    printf("%d",num);
//    return 0;
//}
//

////输入一组数，去重后升序排列，这段代码好牛逼。。。
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int arr[100001]={0};          //输入数字的大小，当作列入数组的下标。
//    int k;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&k);
//        arr[k]=k;
//    }
//    for(int i=0;i<100001;i++)
//    {
//        if(arr[i]!=0)
//        {
//            printf("%d ",arr[i]);
//        }
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int arr[n][m];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    int p=0;
//    scanf("%d",&p);
//    char t;
//    int x,y;
//    for(int i=0;i<p;i++)
//    {
//        scanf(" %c %d %d",&t,&x,&y);        //格式化输入时，有时需要在%前面加上一个空格，来消耗掉缓冲区中的（前面输入落下的）其他字符。
//        if(t=='r')
//        {
//            for(int j=0;j<m;j++)
//            {
//                int temp=arr[x-1][j];
//                arr[x-1][j]=arr[y-1][j];
//                arr[y-1][j]=temp;
//            }
//        }
//        else if(t=='c')
//        {
//            for(int j=0;j<n;j++)
//            {
//                int temp=arr[j][x-1];
//                arr[j][x-1]=arr[j][y-1];
//                arr[j][y-1]=temp;
//            }
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


#include<stdio.h>
////求最大公约数和最小公倍数，效率极其低下。哈哈
//long long max_yue(int a,int b)
//{
//    int t;
//    if(a>=b)  t=b;  else t=a;
//    long long max=0;
//    for(int i=1;i<=t;i++)
//    {
//        if(a%i==0 && b%i==0 && i>=max)
//            max=i;
//    }
//    return max;
//}
//long long min_bei(int a,int b)
//{
//    int t;
//    if(a>=b)  t=a;  else t=b;
//    long long min=(long long)a*b;
//    for(int i=t;i<=min;i++)
//    {
//        if(i%a==0 && i%b==0 && i<=min)
//            min=i;
//    }
//    return min;
//}
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    long long sum=max_yue(n,m)+min_bei(n,m);
//    printf("%lld",sum);
//    return 0;
//}



////求最大公约数，辗转相除法，欧几里得算法。求最大公倍数，是两数相乘减去最大公约数。    a和b的最大公约数等于a%b和b的最大公约数。
//long long max_yue(int a,int b)
//{
//    while(a%b!=0)
//    {
//       long long temp=b;
//       b=a%b;
//       a=temp;
//    }
//    return b;
//}
//long long min_bei(int a,int b)
//{
//    return (a*b)/max_yue(a,b);
//}
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    printf("%lld",max_yue(n,m)+min_bei(n,m));
//    return 0;
//}


//求一个数，在内存中存储二进制‘1’的个数,输入整数
int get(int a)    //函数，输入整数，输出个数；
{
    int count=0;
    for(int i=0;i<32;i++)
    {
        if((a&1) == 1)          //按位与
            count++;
        a=a>>1;                 //向右移位，1位；
    }
    return count;
}
int main()
{
    int a;
    scanf("%d",&a);
    int num=get(a);
    printf("%d",num);
    return 0;
}



































