#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for (int i = 0; i < n; i++)
//    {
//        int num = 0;
//        scanf("%d", &num);
//        if (num >= 140)
//        {
//            printf("%s\n", "Genius");
//        }
//        else
//        {
//            printf("%s\n", "just so so");
//        }
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    while (~scanf("%d", &a))    
//    {
//        if (a >= 140)
//        {
//            printf("Genius");
//        }
//        int c = ~scanf("%d", &a);
//        printf("%d", c);
//    }
//    return 0;
//}




//int main()
//{
//
//	int m, n;
//	int a = scanf("%d", &m);
//	int b = ~scanf("%d", &n);
//	printf("a=%d,b~=%d", a, b);
//	printf("%d", ~1);
//
//	return 0;
//}



//scanf()�����ķ���ֵ,��������ֵ�ĸ���
//
//int main()
//{
//	int a, b;
//	int m, n;
//	int p;
//	a = scanf("%d %d", &m, &n);   //2
//	b = scanf("%d", &p);     //1
//
//	printf("%d %d", a, b);
//	
//	return 0;
//}
//
//int main()
//{
//	int a,b=1;
//	while (scanf("%d", &a) != EOF && b<10)      //������С��ʱ�����������ֹ���裬ѭ����һֱ������ȥ��
//	{
//		if (a >= 10)
//		{
//			printf("%s\n", "ţ��");
//		}
//		else
//		{
//			printf("sb\n");
//		}
//		b++;
//	}
//	return 0;
//}


//
//
////��һ������ƽ��ֵ�����ֵ����Сֵ��
//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    float sum = 0, max = 0, min = 100.0, ava;
//    for (int i = 0; i < n; i++)
//    {
//        float num;
//        scanf("%f", &num);
//        sum = sum + num;
//        if (num >= max)
//        {
//            max = num;
//        }
//        if (num < min)
//        {
//            min = num;
//        }
//        ava = sum / n;
//    }
//    printf("%.2f %.2f %.2f", max, min, ava);
//    return 0;
//}


//
////  a[]������,forѭ������ӡ���飻
//int main()
//{
//	int a[10];      //�������飻��������ʱָ������Ĵ�С������������ָ������С������ָ�������������ڴ棻
//	for (int i = 0; i <10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int n=("%d", sizeof(a) / sizeof(a[0]));
//	for (int j = 0; j < n; j++)
//	{
//		printf("%d\n", a[j]+1);
//	}
//	
//	return 0;
//}



#include <stdio.h>

int main() {
    int n=0, m=0;
    scanf("%d %d", &n, &m);
    int x = n * m;
    int a[100];
    for (int p = 0; p < x; p++)
    {
        scanf("%d", &a[p]);
    }
    int j = 0;
    int l = m;
    for (int i = 0; i < n; i++)
    {
        for (j; j < l; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        l = l + m;
    }

    return 0;
}