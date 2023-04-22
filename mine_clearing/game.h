#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define EASY_RET 10


//函数的声明
void InitBoard(char board[ROWS][COLS], int rows, int cols, char tmp);//初始化每一个方块
void DisPlay(char board[ROWS][COLS], int row, int col);//显示界面
void SetMine(char board[ROWS][COLS], int row, int col);//设置雷的个数
ClearMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//扫雷过程
