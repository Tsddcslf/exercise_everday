#include"game.h"

//��ʼ�����̣�
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

////��ӡ���̣� ��һ�棻
//void display_board(char board[ROW][COL],int row,int col)
//{
//    for(int i=0;i<row;i++)
//    {
//        //��ӡ����
//        printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//        //��ӡ�ָ��ߣ�
//        if(i<(row-1))
//        printf("---|---|---\n");
//    }
//
//}

//��ӡ���̣��ڶ��棻
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

//�������
void player_move(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("�������>\n");
    while(1) {
        printf("�������꣺\n");
        scanf("%d%d", &x, &y);
        //���귶Χ�Ϸ��ж�
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;                    //����������ɹ�����break������ѭ��������������ʧ�ܣ��ٴ�ִ��ѭ����
            }
            else
            {
                printf("���걻ռ��,ѡ������λ��\n");
            }
        }
        else
        {
            printf("������󣬳�����Χ\n");
        }
    }
}

//�������壬�ҿհ׵�λ�������      ////����д�������õ��Ա������������
void computer_move(char board[ROW][COL],int row,int col)
{
    printf("��������>\n");
    int x=0;
    int y=0;
    while(1)
    {
        x=rand()%row;   //����0-2���������
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}


//�ж���Ӯ�����Ӯ*������Ӯ#��ƽ��q������c��           ////�ж���Ӯ����ô��д�������ROW��COL�ı仯��������
char is_win(char board[ROW][COL],int row,int col)
{
    //��
    for(int i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //��
    for(int j=0;j<col;j++)
    {
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[1][j]!=' ')
        {
            return board[2][j];
        }
    }
    //�Խ���
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
    {
        return board[1][1];
    }
    else if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
    {
        return board[1][1];
    }
    //����û�пո�
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



























