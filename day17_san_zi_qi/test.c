//test.c 测试游戏的逻辑
//game.c 游戏代码的实现
//game.h 游戏代码的声明（函数声明，符号定义）

#include"game.h"

void game()    //打印棋盘，玩家下棋，电脑下棋，判断输赢。
{
    char ret =0;
    char board[ROW][COL]={0};
    //初始化棋盘；
    init_board(board,ROW,COL);
    //打印棋盘；
    display_board(board,ROW,COL);
    //循环下棋；
    while(1) {
        //玩家下棋；
        player_move(board,ROW,COL);
        //判断输赢
        ret = is_win(board,ROW,COL);
        if(ret !='c')
        {
            break;
        }
        display_board(board, ROW, COL);

        //电脑下棋；
        computer_move(board,ROW,COL);
        //判断输赢；
        ret = is_win(board,ROW,COL);
        if(ret !='c')
        {
            break;
        }
        display_board(board,ROW,COL);
    }

    if(ret=='*')
    {
        printf("玩家赢\n");
    }
    else if(ret =='#')
    {
        printf("电脑赢\n");
    }
    else if(ret =='q')
    {
        printf("平局\n");
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
    int input=0; //??为什么放循环外面？
    do {
        menu();
        printf("请选择>");
        scanf("%d",&input);    //输入input，输入0则在循环中退出，执行完毕，输入其他则循环下去。因为while(input);
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