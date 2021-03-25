#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	struct PeoInfo *data;
	int size;//记录当前已有的元素个数
	int capacity;//当前通讯录最大容量
}Contact;

//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//增加一个信息到通讯录
void AddContact(struct Contact* ps); 

//打印通讯录中的信息
void ShowContact(struct Contact* ps);

//删除指定联系人
void DelContact(struct Contact* ps);

//查找指定名字的人
void SearchContact(struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);

//排序
void SortContact(struct Contact* ps);

//释放内存
void DestoryContact(Contact* ps);

//保存
void LoadContact(Contact* ps);
//
void SaveContact(Contact* ps);