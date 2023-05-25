#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList1.h"

void SeqListPrint(const SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListCheckCapacity(SeqList* ps)
{
	//检查容量
	if (ps->size == ps->capacity)
	{
		int newCapcity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDateType* tmp = (SLDateType*)realloc(ps->a, newCapcity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
			//exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapcity;
	}


}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;

}

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		SeqListCheckCapacity(ps);
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}
	ps->size--;

}
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--;

}

int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	int begin = 0;
	while (begin < ps->size)
	{
		if (ps->a[begin] == x)
		{
			return x;
		}
		++begin;
	}
	return -1;
}

void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos <= ps->size);

	//检查容量
	SeqListCheckCapacity(ps);

	size_t end = ps->size;
	while (pos < end)
	{
		//挪动数据
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps->a[pos] = x;
	++ps->size;
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(ps->size > 0);
	assert(pos < ps->size);

	size_t begin = pos;
	while (begin + 1 < ps->size)
	{
		//挪动数据
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}

	--ps->size;
}

void SeqListModify(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos < ps->size);
	ps->a[pos] = x;
}