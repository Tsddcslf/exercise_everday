#include<stdio.h>

////��ӡ1000-2000֮������ꣻ
//int judge(int a)
//{
//    if(a%4==0 && a%100!=0 || a%400==0)
//    {
//        return 1;
//    }
//    return 0;
//}
//int main()
//{
//    for(int i=1000;i<=2000;i++)
//    {
//        if(judge(i))
//        {
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}

//
////дһ��������ʵ��һ�������������еĶ��ֲ��ң�
//
//int seek(int a,int arr[],int length)    //��������Ϊ��������ʱ��ʵ������ͨ��ָ�봫�ݵġ����Դ�ʱ�ں�������sizeof(arr)��ʾ����ָ��Ĵ�С��
//{                                         //����������Ԫ�صĵ�ַ
//    int left=0;
//    int right=length-1;
//    while(left<=right)
//    {
//        int mid=(left+right)/2;     //Ϊ��ֹ���������int mid=left+(right-left)/2;
//        if(arr[mid]<a)
//        {
//            left=mid+1;
//        }
//        else if(arr[mid]>a)
//        {
//            right=mid-1;
//        }
//
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int arr[20]={1,2,3,4,5,6,7,8,9,10};
//    int length =sizeof(arr)/sizeof(arr[1]);
//    int t=seek(7,arr,length);
//    if(t==-1)
//    {
//        printf("�Ҳ���");
//    }
//    else
//    {
//        printf("%d",t);
//    }
//    return 0;
//}

//
////дһ��������ÿ����һ�Σ��ͻὫnum��ֵ��һ��  ����num��ָ�롣
//void fuck(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num=0;
//    fuck(&num);
//    fuck(&num);
//
//    fuck(&num);
//
//    fuck(&num);
//
//    fuck(&num);
//
//    printf("%d",num);
//    return 0;
//}
//

////ǰ��++������++��
//int main()
//{
//    int a=5;
//    int b=a++;  //�ȷ��غ�++
//    int c=++a;  //��++�󷵻�
//    printf("%d %d %d",b,a,c);
//    return 0;
//}
//
//
////ȫ�ֱ�����
//int a=10;  //ȫ�ֱ������������������档
//void add()
//{
//    a++;
//}
//
//int main()
//{
//    printf("%d",a);
//    return 0;
//}
//
//
//int main()
//{
//    printf("%d",printf("%d",printf("%d",43)));
//    return 0;
//}
//
////�����������Ͷ��壻
//int add(int,int);     //����������
//int main()
//{
//    int a=10;
//    int b=10;
//    int sum=add(a,b);
//    printf("%d\n",sum);
//    return 0;
//}
//
//int add(int x,int y)     //�����Ķ���
//{
//    return x+y;
//}


////������һ���ļ��еĺ�����add.c, add.h��  �����������add.c�У�������������add.h�У�
//#include"add.h"
//int main()
//{
//    int a=10;
//    int b=10;
//    int sum=add(a,b);
//    printf("%d",sum);
//    return 0;
//}



//�ݹ�

void print(unsigned int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);
}
int main()
{
    unsigned int num=1234;
    print(num);
    return 0;
}
































