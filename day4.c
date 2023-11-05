#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	printf("%15d\n", 0xABCDEF);  //15规定输出域宽为15，15个字符
//	return 0;
//}


//printf函数的返回值
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n%d", a);
//	return 0;
//}


//定义变量时标识符类型
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int d, e, f;     d = e = f = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a,b,c);
//
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[20];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = { "zhang san",20,"nan","158" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}


//int main()
//{
//	printf("int,%zu\n", sizeof(int));     //4byte  
//	printf("long,%zu\n", sizeof(long));    //4byte
//	printf("long long,%zu\n", sizeof(long long));    //8byte
//
//
//	return 0;
//}

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	for (int i = 1; i <= 5; i++)
//	{
//		for(int j=5-i;j>0;j--)
//		{
//			printf(" ");
//		}
//		for (int m = 1; m <= i; m++)
//		{
//			printf("%c ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int n = sizeof(arr);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    printf("%d", n);
//    return 0;
//}

////
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("a=%d,b=%d", &a, &b);
//    printf("a=%d,b=%d", b, a);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    printf("%d", a);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int m = a / b;
//    int n = a % b;
//    printf("%d %d", m, n);
//    return 0;
//}


//int main()
//{
//	int a;
//	scanf("%4d", &a);
//	int q = a / 1000;
//	int w = (a / 100) % 10;
//	int e = (a / 10) % 10;
//	int r = a % 10;
//	printf("%d", r * 1000 + e * 100 + w * 10 + q);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    float a;
//    scanf("%f", &a);
//    int b = (int)a;
//    printf("%d", b % 10);
//    return 0;
//}


#include<stdio.h>
int main()
{
    double a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    double sum = a + b + c;
    double ava = sum / 3;
    printf("%f %.2f", sum, ava);

    return 0;
}