#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 3
#define COL 3    //方便以后更改；

//初始化棋盘；
void init_board(char board[ROW][COL],int row,int col);

//打印棋盘；
void display_board(char board[ROW][COL],int row,int col);

//玩家下棋；
void player_move(char board[ROW][COL],int row,int col);
//电脑下棋；
void computer_move(char board[ROW][COL],int row,int col);

//玩家赢*，电脑赢#，平局q，继续c；
char is_win(char board[ROW][COL],int row,int col);
