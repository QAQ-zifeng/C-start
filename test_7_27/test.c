#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList1.h"

void test1()
{
	SeqList s;
	SeqListInit(&s);
}

void test2()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);

	SeqListDestroy(&s);
}
void test3()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);

	SeqListPushFront(&s, 20);
	SeqListPushFront(&s, 30);

	SeqListPrint(&s);

	SeqListDestroy(&s);

}

void test4()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);



	SeqListPrint(&s);
}

void test5()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);

	SeqListPrint(&s);

	SeqListPopFront(&s);

	SeqListPrint(&s);

}

void test6()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPushBack(&s, 10);
	SeqListPushBack(&s, 11);
	SeqListPushBack(&s, 12);

	SeqListFind(&s, 10);
	SeqListFind(&s, 20);

	SeqListInsert(&s, 8, 20);
	SeqListPrint(&s);

	SeqListErase(&s, 9);
	SeqListPrint(&s);

	SeqListModify(&s, 10, 120);
	SeqListPrint(&s);




}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}