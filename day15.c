#include<stdio.h>
#include<windows.h>
#include<string.h>

//goto��������ת��
////��Ҫ��windows�����У�����    //����Ҳ��//
//int main()
//{
//    char ch[10]={0};
//    system("shutdown -s -t 60");
//    printf("���Խ���60���ӹػ����������롰������\n");
//    again:
//    scanf("%s",ch);
//    if(strcmp(ch,"������")==0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        printf("��������������룺\n");
//        goto again;
//    }
//    return 0;
//}


//����
//strcpy
// char* strcpy(char* destination,const char* source);
//int main()
//{
//    char ch[20];
//    strcpy(ch,"wo ai xiao shi shi!");
//    printf("%s",ch);
//    return 0;
//}

//
////memset
//int main()
//{
//    char arr[20]="wo ai xiao shi shi!";
//    memset(arr+3,'6',2);
//    printf("%s",arr);
//    return 0;
//
//}

//
////дһ��������ȡ�����������ֵ��
//int max1(int a,int b)
//{
//    return a>b?a:b;
//}
//int main()
//{
//    int a,b;
//    scanf("%d %d",&a,&b);
//    printf("%d",max1(a,b));
//    return 0;
//}


//
////дһ�������������������α��������ݡ�
//void change(int* x,int* y)    //x,y��ʽ�������βΣ�    //�޸��ββ���Ӱ��ʵ�Ρ�
//{
//    int temp=*x;
//    *x=*y;
//    * y=temp;
//}
//int main()
//{
//    int a,b;                 //a,b��ʵ�ʲ�����ʵ�Σ�
//    scanf("%d %d",&a,&b);
//    int* p=&a;
//    int* q=&b;
//    change(p,q);
//    printf("%d %d",a,b);
//    return 0;
//}


//int main()
//{
//    int a;
//    scanf("%d",&a);
//    int* p=&a;
//    printf("%p",p);
//    return 0;
//}
//


//
////��ӡ100~200֮���������ֻ�ܱ�1����������������
//
//void judge(int a)   //�ж�һ�����Ƿ�Ϊ������a;
//{
//    int j;
//    for(j=2;j<=a-1;j++)
//    {
//        if(a%j==0)
//        {
//            break;
//        }
//    }
//    if(j==a)
//    {
//        printf("%d ",a);
//    }
//}
//int main()
//{
//    int i;
//    for(i=100;i<=200;i++)
//    {
//        judge(i);
//    }
//    return 0;
//}

int judge(int a)
{
    for(int j=2;j*j<=a;j++)
    {
        if(a%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i;
    for(i=100;i<=200;i++)
    {
        if(judge(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}















