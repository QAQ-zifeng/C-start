#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define DEFAULT_SZ 3
#define INC_SZ 2
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//��̬�İ汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//����˵���Ϣ
//	int count;//��¼ͨѶ¼ʵ�ʸ���
//}Contact;

//��̬�İ汾
typedef struct Contact
{
	PeoInfo* data;//����˵���Ϣ
	int count;//��¼ͨѶ¼ʵ�ʸ���
	int capacity;//��ǰͨѶ¼������
}Contact;

//��������
int Initcontact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);