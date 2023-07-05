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

		phead->next = newnode;
	}
}

// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		return;
	}
	//assert(phead != NULL);
	//判断节点个数
	//一个或者多个
	if ((*pplist)->next == NULL)
	{
		free(*pplist);//一定要注意，先进行free，再动节点。
		*pplist = NULL;
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next->next != NULL)
		{
			phead = phead->next;
		}

		free(phead->next);//一定要注意，先进行free，再动节点。
		phead->next = NULL;
	}

}

// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	SListNode* phead = *pplist;
	if (phead == NULL)
	{
		return;
	}

	*pplist = (*pplist)->next;
	free(phead);
	phead = NULL;
}


// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* phead = plist;
	while (phead)
	{
		if (phead->data == x)
		{
			return phead;
		}

		phead = phead->next;
	}

	return NULL;
}

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);

	SListNode* newnode = BuySListNode(x);
	SListNode* phead = pos;
	newnode->next = phead->next;
	phead->next = newnode;

}

//单链表在pos位置之前插入x
void SListInsertBefore(SListNode** pplist, SListNode* pos, SLTDateType x)
{
	assert(pplist && pos);
	if (*pplist == pos)
	{
		//等于头插
		SListPushFront(pplist, x);
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next != pos)
		{
			phead = phead->next;

			//暴力检查
			assert(phead);
		}

		SListNode* newnode = BuySListNode(x);

		phead->next = newnode;
		newnode->next = pos;

	}
}



// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	pos->next = pos->next->next;
	free(pos->next);
}

//单链表删除pos位置的值
void SListErase(SListNode** pplist, SListNode* pos)
{
	assert(pplist && pos);
	if (*pplist == pos)
	{
		//等于头删
		SListPopFront(pplist);
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next != pos)
		{
			phead = phead->next;

			//暴力检查
			assert(phead);
		}
		phead->next = phead->next->next;
		free(pos);
		pos = NULL;
	}

}


// 单链表的销毁
void SListDestroy(SListNode** pplist)
{
	assert(pplist);

	SListNode* phead = *pplist;
	while (phead)
	{
		SListNode* next = phead->next;
		free(phead);
		phead = next;
	}

	*pplist = NULL;

}