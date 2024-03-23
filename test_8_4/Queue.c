#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
	q->_size = 0;
}

// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	else
	{
		newnode->data = data;
		newnode->_next = NULL;
	}

	if (q->_rear == NULL)
	{
		q->_front = q->_rear = newnode;
	}
	else
	{
		q->_rear->_next = newnode;
		q->_rear = newnode;
	}
	q->_size++;
}


// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	if (q->_front->_next == NULL)
	{
		free(q->_front);
		q->_front = q->_rear = NULL;
	}
	else
	{
		QNode* del = q->_front;
		q->_front = q->_front->_next;

		free(del);
		del = NULL;
	}
	q->_size--;

}

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->_front->data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->_rear->data;
}


// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	return q->_size;
}


// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL && q->_rear == NULL;
}


// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->_front;
	while (cur)
	{
		QNode* del = cur;
		cur = cur->_next;
		free(del);
	}
	q->_front = q->_rear = NULL;
}