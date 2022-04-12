#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

void CreateAccount();

//定义一个银行账户基本信息
//姓名，卡号，密码，余额，身份证，性别，年龄，
typedef struct _Person
{
	char name[20];                  //用户名
	char password[7];               //密码
	char accountnum[20];            //账号
	float money;                    //余额
}Person;


typedef struct _Node
{
	Person         p;               //客户
	struct _Node*  next;
}Node;

Node* g_pHead = NULL;







int main()
{
	printf("**************************************************\n");
	printf("*****************欢迎来到财大银行*****************\n");
	printf("**************************************************\n");

	printf("\t--------------------------------------------\n");
	printf("\t|                1.开户                    |\n");

	printf("\t--------------------------------------------\n");
	printf("\t|                2.登录                    |\n");

	printf("\t--------------------------------------------\n");
	printf("\t|                3.前台客户信息查询中心    |\n");

	printf("\t--------------------------------------------\n");
	printf("\t|                4.请选择您的需求          |\n");
	printf("\t--------------------------------------------\n");

	char ch = _getch();
	switch (ch)
	{
	case '1'://开户
		CreateAccount();
		break;
	case '2'://登录
		break;
	case '3'://前台客户信息查询中心
		break;
	case '4'://请选择您的需求
		break;
	}

	return 0;
}

//开户
void CreateAccount()
{
	//造一个节点
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->next = NULL;
	
	printf("请输入您的姓名:\n");
	scanf("%s", pNewNode-> p.name);

	printf("请设置你的银行卡新密码:\n");
	scanf("%s", pNewNode-> p.password);

	char szPassword[7];
	printf("请再次输入你的银行卡密码:\n");
	scanf("%s", szPassword);

	//判断密码是否一致
	if (strcmp(szPassword, pNewNode-> p.password) != 0)
	{
		printf("两次输入的密码不一致.\n");
		return;
		
	}

	srand((unsigned int)time(NULL));

	//余额
	pNewNode->p.money = 0.0f;

	//随机生成银行卡账号  19位
	//xxxx xxxx xxxx xxxx xxx
	//1000-9999
	//rand() % 10000 => 0->9999
	//rand() % 9000  => 0->8999
	//rand() % 9000 + 1000 => 1000->9999
	//rand() % 900 + 100  => 100->999
	sprintf(pNewNode->p.accountnum, "%d%d%d%d%d", rand() % 9000 + 1000, rand() % 9000 + 1000, rand() % 9000 + 1000, rand() % 9000 + 1000, rand() % 900 + 100);

	//把节点插入到链表
	//头插法、尾插法、中间插
	
	//头插法
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		pNewNode->next = g_pHead;
		g_pHead = pNewNode;
	}

	printf("你的账户信息如下:\n");
	printf("\t姓名:%s\n", pNewNode->p.name);
	printf("\t账户:%s\n", pNewNode->p.accountnum);
	printf("\t余额:%.2f\n", pNewNode->p.money);


}
