#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

// �������������ͷ���
ListNode* ListCreate()
{
	ListNode* guard = (ListNode*)malloc(sizeof(ListNode));
	if (guard == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	guard->_next = guard;
	guard->_prev = guard;
	return guard;
}

ListNode* BuyNote(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->_next = NULL;
	node->_prev = NULL;
	node->_data = x;
	return node;
}

// ˫����������
void ListDestory(ListNode* pHead)
{
	assert(pHead);

	ListNode* str = pHead->_next;
	while (str != pHead)
	{
		ListNode* next = str->_next;
		free(str);
		str = next;
	}
	free(pHead);
}

// ˫�������ӡ
void ListPrint(ListNode* pHead)
{
	assert(pHead);
	printf("pHead<=>");
	ListNode* str = pHead->_next;
	while (str != pHead)
	{
		printf("%d<=>", str->_data);
		str = str->_next;
	}
	printf("\n");
}

// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* newnode = BuyNote(x);
	ListNode* tail = pHead->_prev;

	tail->_next = newnode;
	newnode->_prev = tail;
	newnode->_next = pHead;
	pHead->_prev = newnode;

	/*ListInsert(pHead, x);*/

}

// ˫������βɾ
void ListPopBack(ListNode* pHead)
{
	assert(pHead);


	ListNode* tail = pHead->_prev;
	ListNode* newtail = tail->_prev;

	newtail->_next = pHead;
	pHead->_prev = newtail;
	free(tail);
	tail = NULL;

}

// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* newnode = BuyNote(x);
	ListNode* Firstnode = pHead->_next;

	newnode->_next = Firstnode;
	newnode->_prev = pHead;
	pHead->_next = newnode;
	Firstnode->_prev = newnode;
}

// ˫������ͷɾ
void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	ListNode* Firstnode = pHead->_next;
	ListNode* Second = Firstnode->_next;

	pHead->_next = Second;
	Second->_prev = pHead;
	free(Firstnode);
	Firstnode = NULL;
}

// ˫���������
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* str = pHead->_next;
	while (str != pHead)
	{
		if (str->_data = x)
		{
			return str;
		}
		str = str->_next;
	}
	return NULL;
}

// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* Prev = pos->_prev;
	ListNode* newnode = BuyNote(x);

	Prev->_next = newnode;
	newnode->_prev = Prev;
	newnode->_next = pos;
	pos->_prev = newnode;
}

// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* Prev = pos->_prev;
	ListNode* Next = pos->_next;

	Prev->_next = Next;
	Next->_prev = Prev;

	free(pos);
	pos = NULL;
}