#include"game.h"
void menu()
{
    printf("----------------\n");
    printf("-1.begin 0,exit-\n");
    printf("----------------\n");
}

void game()
{
    char mine[ROWS][COLS]={0}; //��Ų��úõ��ף�
    char show[ROWS][COLS]={0}; //����Ų�����׵���Ϣ��
    //��ʼ�������������Ϣ��mine��0��show��*
    init_board(mine,ROWS,COLS,'0');
    init_board(show,ROWS,COLS,'*');
    //������
    set_mine(mine,ROW,COL);
    //��ӡ����
    //display_board(mine,ROWS,COLS);
    display_board(show,ROWS,COLS);
    //�Ų���
    find_mine(mine,show,ROW,COL);


}
int main()
{
    int input=0;
    //�����������������ʼ
    srand((unsigned int)time(NULL));
    do{
        menu();
        printf("��ѡ��>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("��ʼ��Ϸ��\n");
                game();
                input--;
                break;
            case 0:
                printf("�˳���Ϸ��\n");
                break;
            default:
                printf("�����������ѡ��\n");
                break;
        }
    }while(input);
    return 0;
}