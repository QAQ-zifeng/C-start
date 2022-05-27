#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

//≥ı ºªØ∆Â≈Ã

void Initboard(char board[ROW][COL], int row, int col);

//¥Ú”°∆Â≈Ã

void Displayboard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);

char Iswin(char board[ROW][COL], int row, int col);