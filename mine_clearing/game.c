#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char tmp)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = tmp;
		}
	}
}

void DisPlay(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷小游戏-----\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷小游戏-----\n");

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int ret = EASY_RET;
	while (ret)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			ret--;
		}
	}
}

get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}

ClearMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int m = 0;
	int n = 0;
	int w = 0;//非雷的个数

	while (w < row * col - EASY_RET)
	{
		printf("请输入你要排查的坐标:>");
		scanf("%d %d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if (show[m][n] != '*')
			{
				printf("该坐标已经被排查，不能重复排查\n");
			}
			else
			{
				if (mine[m][n] == '1')
				{
					printf("Boom,你被炸死了!\n");
					DisPlay(mine, ROW, COL);
					break;
				}
				else
				{
					w++;
					//统计mine数组m,n坐标附近雷的个数
					int count = get_mine_count(mine, m, n);
					show[m][n] = count + '0';
					DisPlay(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (w == row * col - EASY_RET)
	{
		printf("恭喜你，排雷成功\n");
		DisPlay(mine, ROW, COL);
	}
}