#include<stdio.h>
//用循环遍历，递归，指针的方式写my_strlen函数
////循环遍历
//int my_strlen(char ch[])
//{
//    int count=0;
//    while(ch[count]!='\0')
//    {
//        count++;
//    }
//    return count;
//}
////递归
//int my_strlen(char* ps)
//{
//    if(*ps == '\0')
//    {
//        return 0;
//    }
//    else
//        return my_strlen(ps+1)+1;
//}
////指针
//int my_strlen(char* pc)
//{
//    char* p=pc;
//    while(*pc !='\0')
//    {
//        pc++;
//    }
//    return pc-p;
//}
//int main()
//{
//    char ch[]="woaixiaoshishi";
//    printf("%d",my_strlen(ch));
//    return 0;
//}


//
////冒泡排序
////都遍历一遍，比较费时间。
//void bubble_sort(int arr[],int size)
//{
//    for(int i=0;i<size;i++)
//    {
//        for(int j=0;j<size-1;j++)    //都遍历一遍，比较费时间。
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
//        }
//    }
//}
////根据逻辑缩小遍历排序范围。
//void bubble_sort(int arr[],int size)
//{
//    for(int i=0;i<size-1;i++)           //总共需要排size-1轮的序；
//    {
//        for(int j=0;j<size-1-i;j++)      //每一轮在（size-i-1）个数的范围内进行排序
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[10]={9,8,7,6,5,4,3,2,1,0};
//    int size=sizeof(arr)/sizeof(arr[1]);
//    bubble_sort(arr,size);            //数组传参时传的是指针的参数，所以在自定义函数里用sizeof算的是指针的大小。
//    for(int i=0;i<10;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


////别人写的，牛碧；
//#include <stdio.h>
//#include <string.h>
//
//int main() {
////    int a, b;
//    char str[1000];
//    int a=0,i=0;
//    while (scanf("%s", str) != EOF) {            //scanf在每次迭代中都会覆盖掉str;
//    }
//    a=strlen(str);
//    printf("%d",a);
//    return 0;
//}


////我写的，求字符串的最后一个单词的字符的个数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch[5000];
//    fgets(ch,5000,stdin);        //输入时，以字符串输入时，最后会加上\0；
//    int size=strlen(ch);
//    int count=-1;


//    for(int i=size-1;i>=0;i--)
//    {
//        if(ch[i]!=' ')
//            count++;
//        else if(ch[i]==' ')
//            break;
//    }
//    printf("%d",count);
//    return 0;
//}

int  main()
{
    int a;
    char b;
    printf("%c",b);
    return 0;
}

































