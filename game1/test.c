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
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	//����
	while (1)
	{

		PlayerMove(board, ROW, COL);
		win = Iswin(board, ROW, COL);//�ж���Ӯ
		if (win != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		win = Iswin(board, ROW, COL);//�ж���Ӯ
		if (win != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
	}


	if (win == '*')
	{
		printf("���Ӯ\n");
		Displayboard(board, ROW, COL);
	}
	else if (win == '#')
	{
		printf("����Ӯ\n");
		Displayboard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}






