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

		phead->next = newnode;
	}
}

// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		return;
	}
	//assert(phead != NULL);
	//�жϽڵ����
	//һ�����߶��
	if ((*pplist)->next == NULL)
	{
		free(*pplist);//һ��Ҫע�⣬�Ƚ���free���ٶ��ڵ㡣
		*pplist = NULL;
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next->next != NULL)
		{
			phead = phead->next;
		}

		free(phead->next);//һ��Ҫע�⣬�Ƚ���free���ٶ��ڵ㡣
		phead->next = NULL;
	}

}

// ������ͷɾ
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


// ���������
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

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);

	SListNode* newnode = BuySListNode(x);
	SListNode* phead = pos;
	newnode->next = phead->next;
	phead->next = newnode;

}

//��������posλ��֮ǰ����x
void SListInsertBefore(SListNode** pplist, SListNode* pos, SLTDateType x)
{
	assert(pplist && pos);
	if (*pplist == pos)
	{
		//����ͷ��
		SListPushFront(pplist, x);
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next != pos)
		{
			phead = phead->next;

			//�������
			assert(phead);
		}

		SListNode* newnode = BuySListNode(x);

		phead->next = newnode;
		newnode->next = pos;

	}
}



// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	pos->next = pos->next->next;
	free(pos->next);
}

//������ɾ��posλ�õ�ֵ
void SListErase(SListNode** pplist, SListNode* pos)
{
	assert(pplist && pos);
	if (*pplist == pos)
	{
		//����ͷɾ
		SListPopFront(pplist);
	}
	else
	{
		SListNode* phead = *pplist;
		while (phead->next != pos)
		{
			phead = phead->next;

			//�������
			assert(phead);
		}
		phead->next = phead->next->next;
		free(pos);
		pos = NULL;
	}

}


// �����������
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