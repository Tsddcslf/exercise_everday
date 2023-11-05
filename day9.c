#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	int c;
//	c= getchar();
//	printf("%d", c);
//	printf("%c", c);
//	return 0;
//}

//
//int main()
//{
//	int ch = getchar();
//	if (ch == (int)ch)
//	{
//		printf("yes");
//	}
//	return 0;
//}


//int main()
//{
//	//char ch = getchar();
//	//getchar();
//	//putchar(ch);
//
//	//字符串string,将字符串输入内存中变量中，可以用char ch[]，字符数组。
//	char ch[20];
//	scanf("%s", &ch);
//	getchar();
//	return 0;
//}

int main()
{
	char a;
	while((a=getchar())!= EOF)
	{ 
		getchar();
		printf("%d\n", a);

	}
	return 0;
}