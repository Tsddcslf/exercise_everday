#include<stdio.h>
//int main()
//{
//    int day;
//    scanf("%d",&day);
//    switch(day)
//    {
//        case 1:
//            printf("����һ\n");
//            break;
//        case 2:
//            printf("���ڶ�\n");
//            break;
//        case 3:
//            printf("������\n");
//            break;
//        case 4:
//            printf("������\n");
//            break;
//        case 5:
//            printf("������\n");
//            break;
//        case 6:
//            printf("������\n");
//            break;
//        case 7:
//            printf("������\n");
//            break;
//        default:
//            printf("�������\n");
//
//    }
//    return 0;
//}

//int main()
//{
//    int day=0;
//    scanf("%d",&day);
//    switch(day)         //�����ж���䣬ѡ��ṹ����֧��䣻switch�����أ�ת����case��������
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//        default:
//            printf("wrong\n");
//            break;
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n=1;
//    int m = 2;   //3
//    switch (n)
//    {
//        case 1:       //���û��break���������case��͸���Ὣƥ���case���µ�ȫ��ִ�У�
//            m++;
//        case 2:
//            n++;
//        case 3:
//            switch (n)
//            {//switch����Ƕ��ʹ��
//                case 1:
//                    n++;
//                case 2:
//                    m++;
//                    n++;
//                    break;
//            }
//        case 4:
//            m++;
//            break;
//        default:
//            break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//
//int main()
//{
//    int ch=0;
//    while((ch=getchar())!=EOF)
//    {
//        putchar(ch);
//        getchar();
//    }
//    return 0;
//}
//
//int main()
//{
//    char ch='\0';
//    while((ch=getchar())!=EOF)
//    {
//        if(ch<'0' || ch>'9')
//            continue;
//        printf("%c\n",ch);
//    }
//    return 0;
//}

//int main()
//{
//    char ch='\0';
//    scanf("%c",&ch);   //����abcdef
//    putchar(ch);
//}


//int main()
//{
//    char password[20]={0};
//    scanf("%s",&password);    //abcde asdc\n
//    int ch=0;
//    while((ch=getchar())!='\n')    //��whileѭ�������ȡ�����������ַ���
//    {
//        printf("%c",ch);
//    }
//
//    return 0;
//}


int main()
{
    int n;   //��n!+(n-1)!+����
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int sum0=1;
        for(int j=1;j<=i;j++)
        {
            sum0=sum0*j;
        }
        sum=sum0+sum;
    }
    printf("%d",sum);
    return 0;
}












































































