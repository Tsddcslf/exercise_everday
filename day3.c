#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<stdio.h>
//int main()
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("%#o %#x", 1234, 1234);
//
//        return 0;
//}
//
//int main()
//{
//	int flag = 0;
//	if (flag)     //C����Ϊ��0����Ϊ0������/�� ����    //if��һ�������ж���䣬�ж���������/�ǣ���/�٣�if��a>3��,��a>3ʱ��������Ϊ��
//	{
//		printf("%s\n", "ţ�̣���");
//	}
//	else
//	{
//		printf("%s\n", "��ţ�̣���");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 0;
//	float c = 9.0;
//	char d = '*';
//	char e = '\0';
//	bool a_ = a;
//
//	return 0;
//}

        
//int main()
//{
//
//    printf("%d\n", sizeof "�����");   //����ռ���ֽڣ������𲽣�ÿ��һ�����ּ������ֽ�
//    return 0;
//}


//int main()
//{
//    int a = 10;
//    int b = 20;     //&&�߼���   ||�߼���
//    int c = 0;
//    if (a || c)
//    {
//        printf("���");
//    }
//    if (b && c)
//    {
//        printf("�㲻��");
//    }
//    return 0;
//}

//
//typedef unsigned int uint;
//
//int main()
//{
//    unsigned int num = 0;
//    uint num2 = 1;
//    return 0;
//}


void test()
{
    static int a = 0;
    a++;
    printf("%d\n", a);
}

int main()
{
    int i = 0;
    while (i < 10)
    {
        test();
        i++;
    }
    return 0;
}