#define _CRT_SECURE_NO_WARNINGS 1


#include "contact.h"

// 静态版本的通讯录
// 1. 通讯录的大小是固定大小- 100个元素
// 2. 当通讯录退出后, 重新运行, 之前的信息都丢了 当前通讯录中的信息都是保存在内存中的
//    程序退出, 内存就回收, 下一次重新运行程序, 内存重新分配, 之前的数据就不变了.


// 动态的版本
// 1. 默认能够存放3个人的信息
// 2. 不够的话, 每次增加两个人的信息
//动态内存分配, 文件操作

// 静态的版本
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

// 动态的版本
void InitContact(Contact* pc)
{
	pc->sz = 0;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data = NULL)
	{
		printf("通讯录初始化失败 %s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SZ;

}

// 静态版本
//void AddContact(Contact* pc)
//{
//	if (pc->sz ==  MAX)
//	{
//		printf("通讯录已满, 无法增加\n");
//		return;
//	}
//	printf("请输入名字:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("添加成功");
//}

int CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("CheckCapacity error:%s\n", strerror(errno));
			return 0;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功");
			return 1;
		}
	}
	return 1;
}

void AddContact(Contact* pc)
{
	
	if (0 == (CheckCapacity(pc)))
	{
		printf("空间不够，扩容失败\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("添加成功\n");
	}
	
}

void ShowContact(const Contact* pc)
{
	int i = 0;

	// 打印标题
	printf("%-10s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	// 打印数据
	for (i = 0; i < pc->sz; i++)
	{
		printf("%s %d %s %s %s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}


void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("释放内存");
}

static int FindByName(pContact pc, char name[])
{
	int i = 0;
	int pos = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;

}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空. 无法删除\n");
		return;
	}
	// 删除
	// 1. 找到要删除人的信息 - 位置(下标)
	printf("输入要删除人的名字:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	int i = 0;
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	// 2. 删除 删除pos上的数据
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}



void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入查找人的名字");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在");
	}
	// 打印
	printf("%-10s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%s %d %s %s %s\n", 
		pc->data[pos].name, 
		pc->data[pos].age, 
		pc->data[pos].sex, 
		pc->data[pos].tele, 
		pc->data[pos].addr);
}


void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在");
		return;
	}
	//修改
	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
}


// 按照名字来排序
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeoInfo), cmp_by_name);
	printf("排完序了\n");
	ShowContact(pc);
}