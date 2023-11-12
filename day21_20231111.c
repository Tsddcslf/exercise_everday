#include<stdio.h>

//
////打印杨辉三角，“直角三角形”形状的； 利用了二维数组！！！这里的二维，以编译器为基础，编译器通过编译，此数组变成“二维”。
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int arr[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<i+1;j++)
//        {
//            if(j==0 || j==i)
//            {
//                arr[i][j]=1;
//            }
//            else {
//                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//            }
//        }
//    }
//
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<i+1;j++)
//        {
//            if(arr[i][j]!=0)
//            {
//                printf("%5d",arr[i][j]);     //整形的域宽为5，域宽是指在格式化输出字符串时，输出字符的宽度，空格加在前面。
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}


////输出十进制数字对应的六进制数字
//#include<stdio.h>
//
//void six(int n)
//{
//    int yu[100]={0};
//    int count=0;
//    int shang=n;
//    while(shang>0)
//    {
//        yu[count]=shang%6;
//        shang=shang/6;
//        count++;     //有时候敲代码，可能和标准答案的思路不一样，测试出来的也是错的。但是可能只是某一个点没有设计好，没有将前后贯通好。
//    }
//    for(int i=count-1;i>=0;i--)
//    {
//        printf("%d",yu[i]);
//    }
//}
//
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    six(n);
//
//    return 0;
//}


































