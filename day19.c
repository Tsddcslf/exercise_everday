#include<stdio.h>

//写的什么东西，想的太复杂了。
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int arr[n+1];
//    int count1=0;
//    int count2=0;
//    for(int i=1;i<=n;i++)
//    {
//        scanf("%d",&arr[i]);
//        arr[0]=-9999;
//        if(arr[i]-arr[i-1]>=0)
//        {
//            count1++;
//        }
//        arr[0]=9999;
//        if(arr[i]-arr[i-1]<=0)
//        {
//            count2++;
//        }
//    }
//    if(count1==0 || count2==0)
//    {
//        printf("sorted");
//    }
//    else
//        printf("unsorted");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int nn[n];
//    int mm[m];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&nn[i]);
//    }
//    for(int i=0;i<m;i++)
//    {
//        scanf("%d",&mm[i]);
//    }
//    for(int i=0;i<=30000;i++)
//    {
//        if(nn[i]==i)
//        printf("%d",i);
//        if(mm[i]==i)
//        printf("%d",i);
//    }
//    return 0;
//}

////效率低下，哈哈
//#include<stdio.h>
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int nn[n];
//    int mm[m];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&nn[i]);
//    }
//    for(int i=0;i<m;i++)
//    {
//        scanf("%d",&mm[i]);
//    }
//    for(int i=0;i<=30000;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(nn[j]==i)
//            {
//                printf("%d ",i);
//            }
//        }
//        for(int j=0;j<m;j++)
//        {
//            if(mm[j]==i)
//            {
//                printf("%d ",i);
//            }
//        }
//    }
//    return 0;
//}


//chat gpt的标记数组
#include<stdio.h>
#define MAX 30001 // 定义常量，比30000大1以包含30000

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int nn[n];
    int mm[m];
    int flag[MAX] = {0}; // 标记数组，初始化为0

    // 读取 nn 数组并标记
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nn[i]);
        if (nn[i] < MAX) {
            flag[nn[i]] = 1; // 标记数字出现
        }
    }

    // 读取 mm 数组并标记
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &mm[i]);
        if (mm[i] < MAX) {
            flag[mm[i]] = 1; // 标记数字出现
        }
    }

    // 打印所有出现的数字
    for(int i = 0; i < MAX; i++)
    {
        if(flag[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}






























