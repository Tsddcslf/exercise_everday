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
    while(1)      //排雷游戏时的循环； 循环
    {
        printf("请输入坐标！>");
        scanf("%d %d",&x,&y);       //输入一个坐标，进行点击扫雷，并判断；  选择分支
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(show[x][y]!='*' && show[x][y]!='@')
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
                else //如果不是雷，需要统计附近有几个雷   //如果不是雷，给出附近雷数字，游戏继续。  再次循环；
                {
                    int n=judge_mine(x,y,mine);
                    if(show[x][y]!='^')
                        show[x][y]=n+'0';     //数字n加上'0'就是字符'n'；
                    //展开一片的功能
                    if(show[x][y]=='0')
                    {
                        show[x][y]='^';
                        mine_extend(show,mine,x,y);   //展开一片的函数！
                    }
                    mine_re(show);
                    display_board(show,ROWS,COLS);
                    //询问是否要标记？
                    int marker;
                    printf("是否要进行标记？1 or 0 >");
                    scanf("%d",&marker);
                    if(marker==1)
                    {
                        mine_mark(show,ROW,COL);  //标记函数？
                    }
                }
            }
        }
        else
        {
            printf("输入坐标错误，重新输入>");
        }
        //判断输赢
        int mine_num=0;
        for(int i=1;i<=ROW;i++)
        {
            for(int j=1;j<=COL;j++)
            {
                if(show[i][j]=='@' || show[i][j]=='*')
                {
                    mine_num++;
                }
            }
        }
        if(mine_num==10)
        {
            printf("恭喜你，赢了！\n");
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
void mine_mark(char show[ROWS][COLS],int row,int col)
{
    display_board(show,ROWS,COLS);
    printf("标记哪一个坐标为雷？>");
    int x,y;
    scanf("%d %d",&x,&y);
    show[x][y]='@';
    printf("标记成功！");
    display_board(show,ROWS,COLS);
    printf("是否还要标记？1 or 0?>");
    int marker=0;
    scanf("%d",&marker);
    if(marker==1)
        mine_mark(show,ROW,COL);  //标记函数？
}


//展开一片的函数
void mine_extend(char show[ROWS][COLS],char mine[ROWS][COLS],int x,int y)
{
    if(x<1 || x>ROWS-1 || y<1 || y>COLS-1)
        return;
    for(int i=x-1;i<=x+1;i++)
    {
        for(int j=y-1;j<=y+1;j++)
        {
            int n=judge_mine(i,j,mine);   //展开一个3*3，并转入判断雷函数
            if(show[i][j]!='^')
                show[i][j]=n+'0';
            if(show[i][j]=='0')
            {
                show[i][j]='^';
                mine_extend(show,mine,i,j);
            }
        }
    }
}

//还原show的图像
void mine_re(char show[ROWS][COLS])
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(show[i][j]=='^')
            {
                show[i][j]='0';
            }
        }
    }
}










