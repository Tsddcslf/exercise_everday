////求三位数中有多少个质数；
//#include<stdio.h>
//int judge(int a)
//{
//    for(int i=2;i*i<=a;i++)
//    {
//        if(a%i==0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int count=0;
//    for(int i=100;i<=999;i++)
//    {
//        if(judge(i))
//        {
//            count++;
//        }
//    }
//    printf("%d",count);
//    return 0;
//}



//
////别人的代码
////main函数也可以当一个函数使用，可以用return 0来结束程序运行。
//#include<stdio.h>
//int main()
//{
//    char arr[3][3];
//    for(int i = 0; i < 3; i++)
//    {
//        for(int j = 0; j < 3; j++)
//        {
//            scanf(" %c",&arr[i][j]);
//        }
//    }
//    for(int i = 0; i < 3; i++)
//    {
//        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2])
//        {
//            if(arr[i][0]=='K')
//            {
//                printf("KiKi wins!");
//                return 0;
//            }
//            else if(arr[i][0]=='B')
//            {
//                printf("BoBo wins!");
//                return 0;
//            }
//        }
//    }
//    for(int j = 0; j < 3; j++)
//    {
//        if(arr[0][j]==arr[1][j]&&arr[0][j]==arr[2][j])
//        {
//            if(arr[0][j]=='K')
//            {
//                printf("KiKi wins!");
//                return 0;
//            }
//            else if(arr[0][j]=='B')
//            {
//                printf("BoBo wins!");
//                return 0;
//            }
//        }
//    }
//    if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2])
//    {
//        if(arr[0][0]=='K')
//        {
//            printf("KiKi wins!");
//            return 0;
//        }
//        else if(arr[0][0]=='B')
//        {
//            printf("BoBo wins!");
//            return 0;
//        }
//    }
//    if(arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0])
//    {
//        if(arr[0][2]=='K')
//        {
//            printf("KiKi wins!");
//            return 0;
//        }
//        else if(arr[0][2]=='B')
//        {
//            printf("BoBo wins!");
//            return 0;
//        }
//    }
//    printf("No winner!");
//
//}