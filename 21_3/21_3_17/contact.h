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
	int size;//��¼��ǰ���е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼�������
}Contact;

//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);

//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps); 

//��ӡͨѶ¼�е���Ϣ
void ShowContact(struct Contact* ps);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);

//����ָ�����ֵ���
void SearchContact(struct Contact* ps);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);

//����
void SortContact(struct Contact* ps);

//�ͷ��ڴ�
void DestoryContact(Contact* ps);

//����
void LoadContact(Contact* ps);
//
void SaveContact(Contact* ps);