#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	float num;
//	scanf("%f", &num);
//	printf("%d", (int)(num + 0.5));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    float a;
//   // int b = a / 1;    //a��û����ֵ��
//    scanf("%f", &a);
//    int b = a / 1;    //������ϵ���ִ�С�
//
//    while (a >= 1)
//    {
//        a = a - 1;
//    }
//    if (a >= 0.5)
//    {
//        printf("%d", b + 1);
//    }
//    else
//    {
//        printf("%d", b);
//    }
//    return 0;
//}



//�ж������Ƿ��й��ظ�����?   ����1223445677�����7654321
int main()
{
    int num;
    scanf("%d",&num);
    int a[10] = { 0 };
    while (num != 0)
    {
        int i = num % 10;
        if (a[i] != 1)
        {
            printf("%d", i);
            a[i] = 1;
        }
        num = num / 10;
    }

    return 0;
}
