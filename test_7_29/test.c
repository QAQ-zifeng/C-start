#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"


void test1()
{
	//头插，打印，销毁测试

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

	//测试尾插、尾删
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
	//测试查找和插入
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	SListNode* pos = SListFind(plist, 3);
	if (pos)
	{
		// 修改
		pos->data *= 10;
		printf("找到了\n");
	}
	else
	{
		printf("没有找到\n");
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