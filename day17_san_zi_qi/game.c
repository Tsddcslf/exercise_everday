#include"game.h"

//初始化棋盘；
void init_board(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}

////打印棋盘； 第一版；
//void display_board(char board[ROW][COL],int row,int col)
//{
//    for(int i=0;i<row;i++)
//    {
//        //打印数据
//        printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//        //打印分割线；
//        if(i<(row-1))
//        printf("---|---|---\n");
//    }
//
//}

//打印棋盘，第二版；
void display_board(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j<col-1)
                printf(" %c |",board[i][j]);
            else
                printf(" %c ",board[i][j]);
        }
        printf("\n");
        if(i<row-1) {
            for (j = 0; j < col; j++) {
                if (j < col - 1)
                    printf("---|");
                else
                    printf("---");
            }
            printf("\n");
        }
    }
}

//玩家下棋
void player_move(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家下棋>\n");
    while(1) {
        printf("输入坐标：\n");
        scanf("%d%d", &x, &y);
        //坐标范围合法判断
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;                    //如果玩家下棋成功，用break打破死循环；如果玩家下棋失败，再次执行循环；
            }
            else
            {
                printf("坐标被占用,选择其他位置\n");
            }
        }
        else
        {
            printf("输入错误，超出范围\n");
        }
    }
}

//电脑下棋，找空白的位置随机下      ////怎样写，可以让电脑变聪明？？？？
void computer_move(char board[ROW][COL],int row,int col)
{
    printf("电脑下棋>\n");
    int x=0;
    int y=0;
    while(1)
    {
        x=rand()%row;   //生成0-2的随机数；
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}


//判断输赢，玩家赢*，电脑赢#，平局q，继续c；           ////判断输赢？怎么不写死？配合ROW和COL的变化。？？？
char is_win(char board[ROW][COL],int row,int col)
{
    //行
    for(int i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //列
    for(int j=0;j<col;j++)
    {
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[1][j]!=' ')
        {
            return board[2][j];
        }
    }
    //对角线
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
    {
        return board[1][1];
    }
    else if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
    {
        return board[1][1];
    }
    //还有没有空格？
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(board[i][j]==' ')
                count++;
        }
    }
    if(count==0)
    {
        return 'q';
    }
    else if(count>=0)
    {
        return 'c';
    }
}



























