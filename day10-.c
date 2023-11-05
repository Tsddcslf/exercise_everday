
#include<stdio.h>

//输入n个数字，打印其中最大的五个；
int main()
{
    int n,a[10];
    int temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int p=0;p<n;p++)
    {
        for(int j=p;j<n;j++)
        {
            if(a[p]<a[j])
            {
                temp=a[j];
                a[j]=a[p];
                a[p]=temp;      ///交换数字的值！！!
            }
        }
    }
    for(int m=0;m<5;m++)
    {
        printf("%d ",a[m]);
    }

    return 0;
}