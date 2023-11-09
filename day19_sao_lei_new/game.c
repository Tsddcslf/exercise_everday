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
    while(1)      //������Ϸʱ��ѭ���� ѭ��
    {
        printf("���������꣡>");
        scanf("%d %d",&x,&y);       //����һ�����꣬���е��ɨ�ף����жϣ�  ѡ���֧
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(show[x][y]!='*' && show[x][y]!='@')
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
                else //��������ף���Ҫͳ�Ƹ����м�����   //��������ף��������������֣���Ϸ������  �ٴ�ѭ����
                {
                    int n=judge_mine(x,y,mine);
                    if(show[x][y]!='^')
                        show[x][y]=n+'0';     //����n����'0'�����ַ�'n'��
                    //չ��һƬ�Ĺ���
                    if(show[x][y]=='0')
                    {
                        show[x][y]='^';
                        mine_extend(show,mine,x,y);   //չ��һƬ�ĺ�����
                    }
                    mine_re(show);
                    display_board(show,ROWS,COLS);
                    //ѯ���Ƿ�Ҫ��ǣ�
                    int marker;
                    printf("�Ƿ�Ҫ���б�ǣ�1 or 0 >");
                    scanf("%d",&marker);
                    if(marker==1)
                    {
                        mine_mark(show,ROW,COL);  //��Ǻ�����
                    }
                }
            }
        }
        else
        {
            printf("�������������������>");
        }
        //�ж���Ӯ
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
            printf("��ϲ�㣬Ӯ�ˣ�\n");
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
void mine_mark(char show[ROWS][COLS],int row,int col)
{
    display_board(show,ROWS,COLS);
    printf("�����һ������Ϊ�ף�>");
    int x,y;
    scanf("%d %d",&x,&y);
    show[x][y]='@';
    printf("��ǳɹ���");
    display_board(show,ROWS,COLS);
    printf("�Ƿ�Ҫ��ǣ�1 or 0?>");
    int marker=0;
    scanf("%d",&marker);
    if(marker==1)
        mine_mark(show,ROW,COL);  //��Ǻ�����
}


//չ��һƬ�ĺ���
void mine_extend(char show[ROWS][COLS],char mine[ROWS][COLS],int x,int y)
{
    if(x<1 || x>ROWS-1 || y<1 || y>COLS-1)
        return;
    for(int i=x-1;i<=x+1;i++)
    {
        for(int j=y-1;j<=y+1;j++)
        {
            int n=judge_mine(i,j,mine);   //չ��һ��3*3����ת���ж��׺���
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

//��ԭshow��ͼ��
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










