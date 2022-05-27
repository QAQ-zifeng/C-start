#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int m = 0;
	int n = 0;
	for (m = 0; m < row; m++)
	{
		for (n = 0; n < col; n++)
		{
			board[m][n] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int m = 0;
	for (m = 0; m < row; m++)
	{
		int n = 0;
		for (n = 0; n < col; n++)
		{
			printf(" %c ", board[m][n]);
			if (n < col - 1)
				printf("|");
		}
		printf("\n");

		if (m < row - 1)
		{
			int n = 0;
			for (n = 0; n < row; n++)
			{
				printf("---");
				if (n < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("�������:>\n");

	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã���������\n");
			}
		}
		else
			printf("����Ƿ�,����������!\n");
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}




int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char Iswin(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}