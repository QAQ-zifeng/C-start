#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void TestSList1()
{
	ListNode* plist = ListCreate();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);

	ListPrint(plist);

	ListPopFront(plist);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);



	ListDestory(plist);
}

void TestSList2()
{
	ListNode* plist = ListCreate();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);

	/*ListPopBack(plist);
	ListPrint(plist);*/

	ListDestory(plist);

}


void TestSList3()
{
	ListNode* plist = ListCreate();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListNode* pos = ListFind(plist, 3);
	if (pos)
	{
		// 修改
		pos->_data *= 10;
		printf("找到了\n");
	}
	else
	{
		printf("没有找到\n");
	}
	ListPrint(plist);

	pos = ListFind(plist, 2);
	if (pos)
	{
		ListInsert(pos, 20);
	}
	ListPrint(plist);

	pos = ListFind(plist, 1);
	if (pos)
	{
		ListInsert(pos, 10);
	}
	ListPrint(plist);

	ListDestory(plist);
}

void TestSList4()
{
	ListNode* plist = ListCreate();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListNode* pos = ListFind(plist, 3);
	if (pos)
	{
		ListErase(pos);
		pos = NULL;
	}
	ListPrint(plist);

	pos = ListFind(plist, 1);
	if (pos)
	{
		ListErase(pos);
		pos = NULL;
	}
	ListPrint(plist);
}


int main()
{
	TestSList4();

	return 0;
}