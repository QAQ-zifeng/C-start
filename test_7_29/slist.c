#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"


// 单链表打印
void SListPrint(SListNode* plist)
{
	SListNode* src = plist;
	while (src != NULL)
	{
		printf("%d->", src->data);
		src = src->next;
	}
	printf("NULL\n");
}



SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;

}


// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);

	//两种情况
	//1.NULL
	//2.NO NULL
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next != NULL)
		{
			phead = phead->next;
		}

		newnode = phead->next;
	}
}

// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	SListNode* phead = *pplist;
	if (phead == NULL)
	{
		return;
	}
	//assert(phead != NULL);
	//判断节点个数
	//一个或者多个
	if (phead->next == NULL)
	{
		free(phead);//一定要注意，先进行free，再动节点。
		phead = NULL;
	}
	else
	{
		while (phead->next->next != NULL)
		{
			phead = phead->next;
		}

		free(phead->next);//一定要注意，先进行free，再动节点。
		phead->next = NULL;
	}

}

