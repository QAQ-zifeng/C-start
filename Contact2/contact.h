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

//静态的版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//存放人的信息
//	int count;//记录通讯录实际个数
//}Contact;

//动态的版本
typedef struct Contact
{
	PeoInfo* data;//存放人的信息
	int count;//记录通讯录实际个数
	int capacity;//当前通讯录的容量
}Contact;

//函数声明
int Initcontact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);