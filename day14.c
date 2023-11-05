#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

//求1到n的阶乘和；
//int main()
//{
//    int ret=1;
//    int n;
//    scanf("%d",&n);
//    int sum=0;
//    for(int i=1;i<=n;i++)
//    {
//        ret = ret*i;
//        sum=sum+ret;
//    }
//    printf("%d",sum);
//    return 0;
//}
//
//
////在一个有序数组中查找具体数字n;
//int main()
//{
//    int sz[10]={1,2,3,4,5,6,7,8,9,10};
//    int n;
//    printf("查找那个数字？\n");
//    scanf("%d",&n);
//    int i;
//    for(i=0;i<10;i++)
//    {
//        if(sz[i]==n)
//        {
//            printf("%d在第%d个",n,i);
//            break;
//        }
//    }
//    if(i==10)
//    {
//        printf("找不到");
//    }
//
//
//    return 0;
//}

////二分查找，折半查找；
//int main()
//{
//    int arr[]={0,1,2,3,4,5,6,7,8,9};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int k=7;  //查找的数；
//    int left =0;
//    int right =n-1;
//    while(right>=right)
//    {
//        int mid = (left + right) / 2;
//        if (k > arr[mid]) {
//            left = mid + 1;
//        } else if (k < arr[mid]) {
//            right = mid - 1;
//        } else
//        {
//            printf("%d", mid);
//            break;
//        }
//    }
//    if(right<left)
//    {printf("找不到");}
//    return 0;
//}

//
////需要在vs上运行，字符从两端向中间移动；
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//    char arr1[]="wo ai xiao shi shi !!!";
//    char arr2[]="----------------------";
//    int left =0;
//    int right=strlen(arr1)-1;
//    while(right>=left)
//    {
//        arr2[left]=arr1[left];
//        arr2[right]=arr1[right];
//        printf("%s\n",arr2);
//        Sleep(1000);
//        system("cls");
//        left++;
//        right--;
//    }
//    return 0;
//}


//输入密码登录，只能三次，
int main()
{
    char password[]="nihao";
    char arr[10];
    int i=0;
    for(i=0;i<3;i++)
    {
        scanf("%s", arr);

        if(strcmp(password,arr)==0)
        {
            printf("密码正确！\n");
            break;
        }
        else
        {
            printf("密码错误\n");

        }
    }
    if(i==3)
    {
        printf("不能输入\n");
    }
    return 0;
}





















