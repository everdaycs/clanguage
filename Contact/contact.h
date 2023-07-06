#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <malloc.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2

// ��ʾһ���˵���Ϣ
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
	PeoInfo* data;// dataָ���˴�����ݵĿռ�
	int sz;// ��¼ͨѶ¼�е���Ч��Ϣ����
	int capacity;// ͨѶ¼��ǰ������
}Contact, *pContact;

// ��ʼ��ͨѶ¼
void InitContact(Contact* pc);

// ����ͨѶ¼
void DestroyContact(Contact* pc);

// ����ָ����ϵ��
void AddContact(Contact* pc);

// ��ʾ��ϵ����Ϣ
void ShowContact(const Contact* pc);

// ɾ��ָ����ϵ��
void DelContact(Contact* pc);

// ����ָ����ϵ��
void SearchContact(Contact* pc);

// �޸�ͨѶ¼
void ModifyContact(Contact* pc);

// ����ͨѶ¼
void SortContact(Contact* pc);