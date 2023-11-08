#include"game.h"

//初始化数组
void init_board(char board[ROWS][COLS],int rows,int cols,char ch)
{
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            board[i][j]=ch;
        }
    }
}

//打印数组
void display_board(char board[ROWS][COLS],int rows,int cols)
{
    printf("-------扫雷游戏-------\n");
    for (int j = 0; j < cols - 1; j++)
    {
        printf("%d  ",j);
    }
    printf("\n");
    for(int i=1;i<rows-1;i++)
    {
        printf("%d  ",i);
        for (int j = 1; j < cols - 1; j++)
        {
            printf("%c  ", board[i][j]);
        }
        printf("\n");
    }
}

//布置雷
void set_mine(char board[ROWS][COLS],int row,int col)
{
    int count=COUNT;
    while(count)
    {
        int x=rand()%row+1;
        int y=rand()%col+1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        }
    }
}

//排查雷
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;
    int win=0;
    while(win<row*col-COUNT)
    {
        printf("请输入坐标！>");
        scanf("%d %d",&x,&y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(show[x][y]!='*')
            {
                printf("排查过了，重新输入！");
            }
            else
            {
                if(mine[x][y]=='1')  //如果是雷
                {
                    printf("你死了！\n");
                    display_board(mine,ROWS,COLS);
                    break;
                }
                else //如果不是雷，需要统计附近有几个雷
                {
                    win++;
                    int n=judge_mine(x,y,mine);
                    show[x][y]=n+'0';     //数字n加上'0'就是字符'n'；
                    display_board(show,ROWS,COLS);
                }
            }
        }
        else
        {
            printf("输入坐标错误，重新输入>");
        }
        if(win==row*col-COUNT)
        {
            printf("排雷成功！\n");
            display_board(mine,ROWS,COLS);
            break;
        }
    }

}


//判断周围有几个雷
int judge_mine(int x,int y,char mine[ROWS][COLS])
{
    int count=0;
    for(int i=x-1;i<=x+1;i++)
    {
        for(int j=y-1;j<=y+1;j++)
        {
            if(mine[i][j]=='1')
            {
                count++;
            }
        }
    }
    return count;
}


//标记功能？
//展开一片的功能？












