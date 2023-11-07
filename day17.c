#include<stdio.h>


////strlen函数求字符串长度；
//int my_strlen(char* arr)       //不同类型*，不同指针；
//{
//    int count=0;              //初始化一个变量；
//    while(*arr!='\0')
//    {
//        count++;
//        arr++;
//    }
//    return count;
//}
//int main()
//{
//    char ch[20];
//    scanf("%s",ch);    //输入时直接使用数组名。
//    int len=my_strlen(ch);
//    printf("%d",len);
//}

////用函数递归来求字符串长度；
//int my_strlen(char* arr)
//{
//    if(*arr=='\0')
//        return 0;
//    else
//    {
//        return my_strlen(arr+1)+1;
//    }
//}
//int main()
//{
//    char ch[20]={0};
//    scanf("%s",ch);                //输入字符串时，读取到空格停止。
//    int len =my_strlen(ch);
//    printf("%d",len);
//    return 0;
//}


////数组越界；
//int main()
//{
//    int arr[5]={1,2,3,4,5};
//    for(int i=0;i<10;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//
////冒泡排序
//void bubble_sort(int arr[],int n)
//{
//    for(int i=0;i<n-1;i++)
//    {
//        for(int j=0;j<n-1;j++)
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
//    int arr[]={5,4,3,6,0,2,4,8,9,1};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    bubble_sort(arr,n);
//    for(int i=0;i<=n-1;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//
////数组的地址，数组首元素的地址；除两个例外，其他数组名都是首元素的地址。1，sizeof,2，&arr
//int main()
//{
//    int arr[10];
//    printf("%p\n",arr);
//    printf("%p\n\n",arr+1);
//
//    printf("%p\n",&arr[0]);
//    printf("%p\n\n",&arr[0]+1);
//
//    printf("%p\n",&arr);
//    printf("%p\n",&arr+1);
//
//    return 0;
//}
//
//
////牛逼
//#include<stdio.h>
//int main()
//{
//    int a,b,arr[50],i,k;
//    int count=0;
//    scanf("%d",&a);
//    for(i=0;i<a;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    scanf("%d",&b);
//    for(i=0;i<a;i++)
//    {
//        if(arr[i]<=b)
//        {
//            count=i+1;           //引入count变量来计数，count++；牛碧；
//        }
//    }
//    for(k=a;k>=count+1;k--)
//    {
//        arr[k]=arr[k-1];               //将数组从某处向后位移，从后向前遍历数组。牛碧；
//    }
//    arr[count]=b;
//    for(i=0;i<a+1;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
//输入描述：
//多组输入，每行输入一个正整数（不大于100）。
//输出描述：
//针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，
//
//第二行，输出数组中2之后被清0 的个数。每行输出后换行。













































