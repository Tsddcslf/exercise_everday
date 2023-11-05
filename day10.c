#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%x %o", &a, &b);
//	printf("%d %d", a,b);
//	return 0;
//}
//
////输入输出，十进制和八进制和十六进制的互相转换。
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%x %o", a, b);   //%x  %X
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    float weight, height;
//    scanf("%f %f", &weight, &height);
//    float a = weight /pow(weight,2);
//    if (a >= 18.5 && a <= 23.9)
//    {
//        printf("%s", "Normal");
//    }
//    else {
//        printf("%s", "Abnormal");
//    }
//    return 0;
////}
//
//
//#include<stdio.h>
//int main()
//{
//    
//    int a, b, c, d, e;
//    for (int x = 10000; x <= 99999; x++)
//    {
//        a = x / 10000;
//        b = (x / 1000) % 10;
//        c = (x/ 100) % 10;
//        d = (x / 10) % 10;
//        e = x % 10;
//        int ab, cde, abc, de, abcd, bcde;
//        ab = 10 * a + b;
//        cde = 100 * c + 10 * d + e;
//        abc = 100 * a + 10 * b + c;
//        de = 10 * d + e;
//        abcd = 1000 * a + 100 * b + 10 * c + d;
//        bcde = 1000 * b + 100 * c + 10 * d + e;
//        if (x == a * bcde + ab * cde + abc * de + abcd * e)
//        {
//            printf("水仙花数%d\n", x);
//        }
//    }
//
//    return 0;
//}


//#include<stdio.h>
//
//int max(int b[100],int length)
//{
//    int m=0;
//    /*int t = sizeof(b) / sizeof(b[0]);*/
//
//    for (int j = 0; j < length; j++)
//    {
//        if (b[j] >= m)
//        {
//            m = b[j];
//        }
//    }
//
//    return m;
//}
//int main()
//{
//    int n;
//    int a[100];
//    scanf("%d\n", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    printf("%d %d %d %d %d", max(a,n), max(a,n-1), max(a,n-2), max(a,n-3), max(a,n-4));
//
//    return 0;
//}
//


////chatgpt给出的代码
//#include <stdio.h>
//
//int max(int b[100], int length)
//{
//    int m = b[0];
//    for (int j = 1; j < length; j++)
//    {
//        if (b[j] >= m)
//        {
//            m = b[j];
//        }
//    }
//    return m;
//}
//
//int main()
//{
//    int n;
//    int a[100];
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        int max_value = max(a, n);
//        printf("%d ", max_value);
//
//        // Set the max_value to a very small number to find the next max.
//        for (int j = 0; j < n; j++)
//        {
//            if (a[j] == max_value)
//            {
//                a[j] = -999999; // A very small number.
//                break;
//            }
//        }
//    }
//
//    return 0;
//}


//输入n个数字，输出最大的五个数；
//
//int max(int b[50], int length)      //创建max函数，输入数组，输入长度，输出最大值。
//{
//	int m = b[0];
//	for (int t = 0; t < length; t++)
//	{
//		if (b[t] >= m)
//		{
//			m = b[t];
//		}
//	}
//	return m;
//}
//int main()
//{
//	int n;
//	int a[50];  
//	scanf("%d", &n);  
//	for (int i = 0; i < n; i++)  
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j < 5; j++)   //创建循环，5个，输出五个数
//	{
//		int mmm = max(a,n);
//		printf("%d ", mmm);
//
//		for (int p = 0; p <= n; p++)     //再次遍历数组，将选择出来的最大的数变得很小；
//		{
//			if (a[p] == mmm)
//			{
//				a[p] = -999999;
//				break;
//			}
//		}
//
//	}
//	return 0;
//}

//
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	return 0;
//}
//
//
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//    char arr1[] = "wo ai xiao shi shi !!!";
//    char arr2[] = "----------------------";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    while (right >= left)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);
//        system("cls");
//        left++;
//        right--;
//    }
//    return 0;
//}

#include<stdio.h>
#include<windows.h>
#include<string.h>

//goto函数，跳转；
int main()
{
    char ch[10] = { 0 };
    system("shutdown -s -t 60");
    printf("电脑将在60秒后关机，除非输入“我是猪”\n");
again:
    scanf("%s", ch);
    if (strcmp(ch, "我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        printf("输入错误，重新输入：\n");
        goto again;
    }
    return 0;
}
