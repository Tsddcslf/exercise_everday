#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<string.h>

//goto��������ת��
int main()
{
    char ch[10] = { 0 };
    system("shutdown -s -t 60");
    printf("���Խ���60���ػ����������롰������\n");
again:
    scanf("%s", ch);
    if (strcmp(ch, "������") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        printf("��������������룺\n");
        goto again;
    }
    return 0;
}
