#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;    //�洢���ݵĸ���
	int capacity;//�洢�ռ�Ĵ�С
}SeqList;

// �����ݵĹ���:��ɾ��� 
void SeqListInit(SeqList* ps);
void SeqListDestroy(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);//β��
void SeqListPushFront(SeqList* ps, SLDateType x);//ͷ��
void SeqListPopFront(SeqList* ps);//ͷɾ
void SeqListPopBack(SeqList* ps);//βɾ

// ˳������
int SeqListFind(SeqList* ps, SLDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, int pos);
//�޸�posλ���ϵ�ֵ
void SeqListModify(SeqList* ps, int pos, SLDateType x);