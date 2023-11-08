#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define COUNT 10

//初始化数组
void init_board(char board[ROWS][COLS],int rows,int cols,char ch);

//打印数组
void display_board(char board[ROWS][COLS],int rows,int cols);

//设置雷
void set_mine(char mine[ROWS][COLS],int row,int col);

//排查雷
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

//判断周围有几个雷
int judge_mine(int x,int y,char mine[ROWS][COLS]);
