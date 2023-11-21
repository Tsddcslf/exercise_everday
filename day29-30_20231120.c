#include<stdio.h>
////好的算法，是灵魂。
////下面是一坨垃圾！
//typedef struct{
//    int index[500];
//    int value[500];
//}sort_table;
//
//int main()
//{
//    sort_table table={0};
//    int n=0;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        int a,b;
//        scanf("%d %d",&a,&b);
//        table.index[i]=a;
//        table.value[i]=b;
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(table.index[i] != table.index[i+1])
//        {
//            printf("%d %d\n",table.index[i],table.value[i]);
//        }
//        else{
//            int sum=0;
//            for(int j=i;j<n;j++)
//            {
//                if(table.index[i]==table.index[j])
//                {
//                    sum+=table.index[j];
//                }
//                else{
//                    printf("%d %d\n",table.index[i],sum);
//                    i=j;
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}


////
//#include<stdio.h>
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int arr[500]={0};
//    int a,b;
//    while(scanf("%d %d",&a,&b)!=EOF)
//    {
//        arr[a]=arr[a]+b;
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i])
//        {
//            printf("%d %d\n",i,arr[i]);
//        }
//    }
//    return 0;
//}
//

////
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct{
//    int index;
//    int value;
//}Record;             //
//
//int compare(const void *a,const void *b)
//{
//    Record *recordA=(Record*)a;
//    Record *recordB=(Record*)b;
//    return recordA->index - recordB->index;
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    Record records[500];          //构造函数类型，的数组。
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d %d",&records[i].index,&records[i].value);
//    }
//
//    //使用快速排序对记录按索引排序；
//    qsort(records,n,sizeof(Record),compare);
//
//    //合并具有相同索引的记录。
//    for(int i=0;i<n;i++)
//    {
//        int sum=records[i].value;
//        while(i<n-1 &&records[i].index==records[i+1].index)
//        {
//            sum+=records[i+1].value;
//            i++;
//        }
//        printf("%d %d\n",records[i].index,sum);
//    }
//    return 0;
//}

























































































