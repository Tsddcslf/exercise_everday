#include"game.h"
void menu()
{
    printf("----------------\n");
    printf("-1.begin 0,exit-\n");
    printf("----------------\n");
}

void game()
{
    char mine[ROWS][COLS]={0}; //存放布置好的雷；
    char show[ROWS][COLS]={0}; //存放排查出的雷的信息；
    //初始化数组里面的信息，mine是0，show是*
    init_board(mine,ROWS,COLS,'0');
    init_board(show,ROWS,COLS,'*');
    //设置雷
    set_mine(mine,ROW,COL);
    //打印数组
    //display_board(mine,ROWS,COLS);
    display_board(show,ROWS,COLS);
    //排查雷
    find_mine(mine,show,ROW,COL);


}
int main()
{
    int input=0;
    //设置随机数的生成起始
    srand((unsigned int)time(NULL));
    do{
        menu();
        printf("请选择>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("开始游戏！\n");
                game();
                input--;
                break;
            case 0:
                printf("退出游戏！\n");
                break;
            default:
                printf("输入错误，重新选择！\n");
                break;
        }
    }while(input);
    return 0;
}