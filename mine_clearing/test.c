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
	//1.�����������飬һ���Ǵ���׵���Ϣ����һ�����Ų��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//2.��ʼ�����飬�������������ú������г�ʼ����
	//mine�����Ǵ���׵����飬��û���׵�ʱ�����ǳ�ʼ��Ϊȫ��'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show�������Ų��׵����飬δ�Ų�ʱ��ʼ��Ϊ'*'
	InitBoard(show, ROWS, COLS, '*');

	//4.������
	SetMine(mine, ROW, COL);

	//3.��ʾһ���ҵ�ÿ�����飬����Ƿ��ʼ���ɹ�
	//DisPlay(mine, ROW, COL);
	DisPlay(show, ROW, COL);

	//5.ɨ��
	ClearMine(mine, show, ROW, COL);

}


int main()
{
	int num = 0;
	//�������ֵ
	srand((size_t)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (num);
	return 0;
}