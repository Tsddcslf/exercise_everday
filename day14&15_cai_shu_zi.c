#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

//��������һ�������1~100
//�´���
//��С��
//�¶��ˣ�����
int game()   //game��Ϸ
{
    int ret = rand() % 100 + 1;  //����һ���������
    //printf("%d\n",ret);
    printf("������һ��������֣����һ�£�\n");
    int i;
    for(i=1;i<=10;i++) {
        int num = 0;
        scanf("%d", &num);
        if (num > ret) {
            printf("�´��ˣ������\n");
        } else if (num < ret) {
            printf("��С�ˣ������\n");
        }
        else if(num==ret)
        {
            printf("�¶��ˣ���ϲ��\n");
            i--;
            break;
        }
    }
    if(i<11)
    {
        return 0;
    }
    else
    {
        printf("��Ϸʧ��\n");
        printf("��Ҫ������1 or 0 ?\n");
        int m=0;
        scanf("%d",&m);
        if(m==1)
        {
            return 1;
        }
        else if(m==0)
        {
            return 0;
        }
    }
}

void menu()   //����ѡ��˵�
{
    printf("-------1,��ʼ��Ϸ--------\n");
    printf("-------0,������Ϸ--------\n");
}
int main()
{
    srand((unsigned int)time(NULL));   //Ϊrand��������һ�������ʼ����
    //int a=0;     int *p=NULL;
    int input=0;
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("��ʼ��Ϸ\n");
                input = game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("ѡ���������ѡ��\n");
                break;
        }
    }while(input);
        return 0;
}