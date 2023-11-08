//筛选法求素数  ？？？
#include<stdio.h>
//int main()
//{
//    int n=0;
//    while(scanf("%d",&n)!=EOF)
//    {
//        //输入2~n之间的数组
//        int arr[100]={0};
//        for(int i=2;i<=n;i++)
//        {
//            arr[i-2]=i;
//        }
//        //求n之内的素数；
//        int count=0;
//        for(int j=2;j<=n;j++)
//        {
//            for(int i=j-1;i<=n-2;i++)
//            {
//                if(arr[i]%j==0)
//                {
//                    arr[i]=0;
//                }
//            }
//        }
//        for(int i=0;i<=n-2;i++)
//        {
//            if(arr[i]!=0)
//                printf("%d ",arr[i]);
//            else
//                count++;
//        }
//        printf("\n%d",count);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int m,n;
//    scanf("%d %d",&m,&n);
//    int a[m][n];
//    int b[m][n];              //C99标准之后，可以用变量来定义数组，支持变长数组；
//    // 但是为了使程序更加兼容，推荐使用动态内存分配malloc和calloc来创建数组。
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&b[i][j]);
//        }
//    }
//    int count=0;
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(a[i][j]==b[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    float t=((float)count)/(n*m)*100.0;                //如果‘/’除号两边都为整数，计算结果将被强制为整数。
//    // 为使计算结果为浮点数，需要强制转变除数或被除数的数据类型为浮点数。；
//    printf("%.2f",t);
//    return 0;
//}