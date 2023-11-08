#include"game.h"

//��ʼ������
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

//��ӡ����
void display_board(char board[ROWS][COLS],int rows,int cols)
{
    printf("-------ɨ����Ϸ-------\n");
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

//������
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

//�Ų���
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;
    int win=0;
    while(win<row*col-COUNT)
    {
        printf("���������꣡>");
        scanf("%d %d",&x,&y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(show[x][y]!='*')
            {
                printf("�Ų���ˣ��������룡");
            }
            else
            {
                if(mine[x][y]=='1')  //�������
                {
                    printf("�����ˣ�\n");
                    display_board(mine,ROWS,COLS);
                    break;
                }
                else //��������ף���Ҫͳ�Ƹ����м�����
                {
                    win++;
                    int n=judge_mine(x,y,mine);
                    show[x][y]=n+'0';     //����n����'0'�����ַ�'n'��
                    display_board(show,ROWS,COLS);
                }
            }
        }
        else
        {
            printf("�������������������>");
        }
        if(win==row*col-COUNT)
        {
            printf("���׳ɹ���\n");
            display_board(mine,ROWS,COLS);
            break;
        }
    }

}


//�ж���Χ�м�����
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


//��ǹ��ܣ�
//չ��һƬ�Ĺ��ܣ�












