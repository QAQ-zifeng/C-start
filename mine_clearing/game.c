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
	printf("-----ɨ��С��Ϸ-----\n");
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
	printf("-----ɨ��С��Ϸ-----\n");

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
	int w = 0;//���׵ĸ���

	while (w < row * col - EASY_RET)
	{
		printf("��������Ҫ�Ų������:>");
		scanf("%d %d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if (show[m][n] != '*')
			{
				printf("�������Ѿ����Ų飬�����ظ��Ų�\n");
			}
			else
			{
				if (mine[m][n] == '1')
				{
					printf("Boom,�㱻ը����!\n");
					DisPlay(mine, ROW, COL);
					break;
				}
				else
				{
					w++;
					//ͳ��mine����m,n���긽���׵ĸ���
					int count = get_mine_count(mine, m, n);
					show[m][n] = count + '0';
					DisPlay(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}
	}
	if (w == row * col - EASY_RET)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisPlay(mine, ROW, COL);
	}
}