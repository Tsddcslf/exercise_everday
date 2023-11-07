//test.c ������Ϸ���߼�
//game.c ��Ϸ�����ʵ��
//game.h ��Ϸ������������������������Ŷ��壩

#include"game.h"

void game()    //��ӡ���̣�������壬�������壬�ж���Ӯ��
{
    char ret =0;
    char board[ROW][COL]={0};
    //��ʼ�����̣�
    init_board(board,ROW,COL);
    //��ӡ���̣�
    display_board(board,ROW,COL);
    //ѭ�����壻
    while(1) {
        //������壻
        player_move(board,ROW,COL);
        //�ж���Ӯ
        ret = is_win(board,ROW,COL);
        if(ret !='c')
        {
            break;
        }
        display_board(board, ROW, COL);

        //�������壻
        computer_move(board,ROW,COL);
        //�ж���Ӯ��
        ret = is_win(board,ROW,COL);
        if(ret !='c')
        {
            break;
        }
        display_board(board,ROW,COL);
    }

    if(ret=='*')
    {
        printf("���Ӯ\n");
    }
    else if(ret =='#')
    {
        printf("����Ӯ\n");
    }
    else if(ret =='q')
    {
        printf("ƽ��\n");
    }
    display_board(board,ROW,COL);

}

void menu()
{
    printf("--------------------\n");
    printf("---1,begin,0,exit---\n");
    printf("--------------------\n");
}

int main()
{
    srand((unsigned int)time(NULL));
    int input=0; //??Ϊʲô��ѭ�����棿
    do {
        menu();
        printf("��ѡ��>");
        scanf("%d",&input);    //����input������0����ѭ�����˳���ִ����ϣ�����������ѭ����ȥ����Ϊwhile(input);
        switch(input) {
            case 1:
                printf("begin the game\n");
                game();
                input =0;
                break;
            case 0:
                printf("exit the game\n");
                break;
            default:
                printf("wrong,please again\n");
                break;
        }
    }while(input);
    return 0;
}