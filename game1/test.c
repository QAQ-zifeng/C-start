#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("*****************************************\n");
	printf("*************** 1 . play ****************\n");
	printf("*************** 0 . exit ****************\n");
	printf("*****************************************\n");
}
void game()
{
	char win = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	//下棋
	while (1)
	{

		PlayerMove(board, ROW, COL);
		win = Iswin(board, ROW, COL);//判断输赢
		if (win != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		win = Iswin(board, ROW, COL);//判断输赢
		if (win != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
	}


	if (win == '*')
	{
		printf("玩家赢\n");
		Displayboard(board, ROW, COL);
	}
	else if (win == '#')
	{
		printf("电脑赢\n");
		Displayboard(board, ROW, COL);
	}
	else
	{
		printf("平局\n");
		Displayboard(board, ROW, COL);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}






