#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("****************************************\n");
	printf("****************************************\n");
	printf("*************   1.play   ***************\n");
	printf("*************   0.exit   ***************\n");
	printf("****************************************\n");
	printf("****************************************\n");

}


void game()
{
	//1.设置两个数组，一个是存放雷的信息，另一个是排查雷的信息
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//2.初始化数组，将两个数组运用函数进行初始化。
	//mine数组是存放雷的数组，当没有雷的时候，我们初始化为全是'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show数组是排查雷的数组，未排查时初始化为'*'
	InitBoard(show, ROWS, COLS, '*');

	//4.设置雷
	SetMine(mine, ROW, COL);

	//3.显示一下我的每个数组，检查是否初始化成功
	//DisPlay(mine, ROW, COL);
	DisPlay(show, ROW, COL);

	//5.扫雷
	ClearMine(mine, show, ROW, COL);

}


int main()
{
	int num = 0;
	//设置随机值
	srand((size_t)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (num);
	return 0;
}