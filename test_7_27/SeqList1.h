#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;    //存储数据的个数
	int capacity;//存储空间的大小
}SeqList;

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps);
void SeqListDestroy(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);//尾插
void SeqListPushFront(SeqList* ps, SLDateType x);//头插
void SeqListPopFront(SeqList* ps);//头删
void SeqListPopBack(SeqList* ps);//尾删

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos);
//修改pos位置上的值
void SeqListModify(SeqList* ps, int pos, SLDateType x);