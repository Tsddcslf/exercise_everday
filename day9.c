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
//	//�ַ���string,���ַ��������ڴ��б����У�������char ch[]���ַ����顣
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