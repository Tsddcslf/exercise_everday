
//
//#include<stdio.h>
//int main()
//{
//	printf("here\n");
//
//	return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{
//	int  a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}
//long long 的整数有多长？
//#include<stdio.h>
//int main()
//{
//	long long num1 = 0;
//	long long num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	long long sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}
///////？？？布尔类型？？
//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 78.9;
//	float high = 175.0;
//	int AGE = 0;
//	scanf("请输入你的年龄:%d\n", AGE);
//	printf(AGE == age);
//
//	return 0;
//}
///////
//创建字符数组
//#include<stdio.h>
//int main()  
//{
//	char arr[5] = "abcd";
//	printf(arr);
//	return 0;
//}
//
//转义字符，\ddd,\xdd
//#include<stdio.h>
//int main()
//{
//	char a = 7;
//	printf("%s %s %s\n", "\70", "\x70","\0707");
//	printf("%d\n", strlen("abcd e"));
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}
//
//函数sprintf,将数据格式化，并存入字符数组中
//int main() {
//	int num = 66;
//	char str[20];
//	sprintf(str, "这个数字是:%d", num);
//	printf(str);
//	return 0;
//}



// while 循环，打破循环
//int main()
//{
//	int line = 0;
//	printf("%s\n", "开始写代码！!");
//	while (line <= 20000)
//	{
//		printf("%d接着写代码！！!\n", line);
//		line++;
//		if (line == 10000)
//		{
//			int input = 0;
//			printf("还要继续，吗？0or1?");
//			scanf("%d", &input);
//			if (input == 0)
//			{
//				break;
//			}
//		}
//	}
//	if (line > 20000)
//	{
//		printf("%s\n", "真牛逼！！！");
//	}
//	else
//	{
//		printf("%s\n", "继续加油~~~");
//	}
//
//	return 0;
//}



//函数--->
//int Add(int a, int b)
//{
//	int c = 0;
//	c = a + b;
//	return c;
//}
//int Add(int a, int b)
//{
//	return (a+b);
//}
//int main()
//{
//	printf("%s\n", "求两个数的和,输入两个数字：");
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int z = Add(x, y);
//	printf("两个数的和是：%d", z);
//	return (0);
//}


//数组 int arr[],,char ch[],,double d[22],, 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int change(float i)
{
    int t = 0;
    while (i >= 1)
    {
        i = i - 1;
        t++;
    }
    if (i >= 0.5)
    {
        return t + 1;
    }
    else
    {
        return t;
    }
}

int main()
{
    float a = 0;
    scanf("%f", &a);
    printf("%d", change(a));
    return 0;
}
