#define _CRT_SECURE_NO_WARNINGS 1


#include "contact.h"

// ��̬�汾��ͨѶ¼
// 1. ͨѶ¼�Ĵ�С�ǹ̶���С- 100��Ԫ��
// 2. ��ͨѶ¼�˳���, ��������, ֮ǰ����Ϣ������ ��ǰͨѶ¼�е���Ϣ���Ǳ������ڴ��е�
//    �����˳�, �ڴ�ͻ���, ��һ���������г���, �ڴ����·���, ֮ǰ�����ݾͲ�����.


// ��̬�İ汾
// 1. Ĭ���ܹ����3���˵���Ϣ
// 2. �����Ļ�, ÿ�����������˵���Ϣ
//��̬�ڴ����, �ļ�����

// ��̬�İ汾
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

// ��̬�İ汾
void InitContact(Contact* pc)
{
	pc->sz = 0;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data = NULL)
	{
		printf("ͨѶ¼��ʼ��ʧ�� %s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SZ;

}

// ��̬�汾
//void AddContact(Contact* pc)
//{
//	if (pc->sz ==  MAX)
//	{
//		printf("ͨѶ¼����, �޷�����\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("��ӳɹ�");
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
			printf("���ݳɹ�");
			return 1;
		}
	}
	return 1;
}

void AddContact(Contact* pc)
{
	
	if (0 == (CheckCapacity(pc)))
	{
		printf("�ռ䲻��������ʧ��\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("��ӳɹ�\n");
	}
	
}

void ShowContact(const Contact* pc)
{
	int i = 0;

	// ��ӡ����
	printf("%-10s %-4s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	// ��ӡ����
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
	printf("�ͷ��ڴ�");
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
		printf("ͨѶ¼Ϊ��. �޷�ɾ��\n");
		return;
	}
	// ɾ��
	// 1. �ҵ�Ҫɾ���˵���Ϣ - λ��(�±�)
	printf("����Ҫɾ���˵�����:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	int i = 0;
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	// 2. ɾ�� ɾ��pos�ϵ�����
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}



void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("����������˵�����");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����");
	}
	// ��ӡ
	printf("%-10s %-4s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����");
		return;
	}
	//�޸�
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
}


// ��������������
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeoInfo), cmp_by_name);
	printf("��������\n");
	ShowContact(pc);
}