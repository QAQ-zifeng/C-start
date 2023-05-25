#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"


// �������ӡ
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


// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;

}


// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);

	//�������
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

// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	SListNode* phead = *pplist;
	if (phead == NULL)
	{
		return;
	}
	//assert(phead != NULL);
	//�жϽڵ����
	//һ�����߶��
	if (phead->next == NULL)
	{
		free(phead);//һ��Ҫע�⣬�Ƚ���free���ٶ��ڵ㡣
		phead = NULL;
	}
	else
	{
		while (phead->next->next != NULL)
		{
			phead = phead->next;
		}

		free(phead->next);//һ��Ҫע�⣬�Ƚ���free���ٶ��ڵ㡣
		phead->next = NULL;
	}

}

