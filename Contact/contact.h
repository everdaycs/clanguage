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

// 表示一个人的信息
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
	PeoInfo* data;// data指向了存放数据的空间
	int sz;// 记录通讯录中的有效信息个数
	int capacity;// 通讯录当前的容量
}Contact, *pContact;

// 初始化通讯录
void InitContact(Contact* pc);

// 销毁通讯录
void DestroyContact(Contact* pc);

// 增加指定联系人
void AddContact(Contact* pc);

// 显示联系人信息
void ShowContact(const Contact* pc);

// 删除指定联系人
void DelContact(Contact* pc);

// 查找指定联系人
void SearchContact(Contact* pc);

// 修改通讯录
void ModifyContact(Contact* pc);

// 排序通讯录
void SortContact(Contact* pc);