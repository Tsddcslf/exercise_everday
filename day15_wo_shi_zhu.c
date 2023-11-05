#define _CRT_SECURE_NO_WARNINGS

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
