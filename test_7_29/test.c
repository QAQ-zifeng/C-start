#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"


void test1()
{
	//ͷ�壬��ӡ�����ٲ���

	SListNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListDestroy(&plist);


}

void test2()
{

	//����β�塢βɾ
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListDestroy(&plist);

}
void test3()
{
	//���Բ��ҺͲ���
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	SListNode* pos = SListFind(plist, 3);
	if (pos)
	{
		// �޸�
		pos->data *= 10;
		printf("�ҵ���\n");
	}
	else
	{
		printf("û���ҵ�\n");
	}
	SListPrint(plist);

	pos = SListFind(plist, 2);
	if (pos)
	{
		SListInsertBefore(&plist, pos, 20);
	}
	SListPrint(plist);

	pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsertBefore(&plist, pos, 10);
	}
	SListPrint(plist);

	SListDestroy(&plist);
}


int main()
{

	//test1();
	//test2();
	test3();

	return 0;
}