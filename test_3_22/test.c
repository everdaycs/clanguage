#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	// ����
//	// 12345
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	// ���ٲ��ɹ�, ���з���һ����ָ��
//	
//	// ����20���ռ�
//	// ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", p[i]);
//	}
//	// �ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
// malloc �������ڴ�����һ���������õĿռ�, ������ָ�����ռ��ָ��
// 


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("calloc()-->%s\n", strerror(errno));
//		return 1;
//	}
//	// ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//	}
//	// �ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

// calloc �� malloc �Ա�:
// 1. ������һ��
// 2. �����ڶ����������ڴ�ռ�, ����mallocδ��ʼ��, calloc���ʼ��Ϊ0
//    ���Ҫ��ʼ��������, calloc
//    �������Ҫ��ʼ����ʹ��, malloc


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	// �ͷ�
//	for (i = 5; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//	}
//	free(p);
//	return 0;
//}

// 1. realloc���Ҹ���Ŀռ�
// 2. ��ԭ�������ݿ������µĿռ�
// 3. �ͷžɵĿռ�
// 4. �����¿ռ�ĵ�ַ

//int main()
//{
//	int* p = (int*)malloc(20);
//	//
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


// ʹ��free �ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		*p = i + 1;
//		p++;
//		// ָ�����,
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

// ��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// ��̬�����ڴ������ͷ�
// malloc
// calloc
// realloc
// ������Ŀռ�, �������ʹ��, ��Ҫfree�ͷ�
// ������ͷ�:
// �������֮��, Ҳ���ɲ���ϵͳ����

//
//test()
//{
//	int* p = (int*)malloc(20);
//	// ʹ��
//
//}

//int main()
//{
//	test();
//
//	return 0;


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

	// 1. ����GetMemory������ʱ��, str�Ĵ�����Ϊֵ����, p��str����ʱ����,
	// ������GetMemory�����ڲ�����̬���ٿռ�ĵ�ַ�����p�е�ʱ��, ����Ӱ��
	// str. ����GetMemory��������֮��, str����Ȼ��NULLָ��. strcpy�����ͻ�
	// ����ʧ��, ԭ���Ƕ�NULL�Ľ����ò���, ��������

	// 2. GetMemory ��������malloc ����Ŀռ�û�л����ͷ�, ������ڴ�й¶



//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
// ����ջ�ռ��ַ������
// GetMemory�����ڲ���������������ʱ��, ��Ȼ��������
// ����ʼ��ַ����str, ����������ڴ����
// GetMemory�����ͱ�������, ��str��Ȼ�������������ʼ��ַ, 
// ��ʱ���ʹ��str, str����Ұָ��



//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe");
//	printf("%d\n", *p);
//
//	return 0;
//}
//
//int* f2(void)
//{
//	int* ptr;
//	*ptr = 10;
//	return ptr;
//}

// ptrû���κ�ָ��


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	// �ͷ�
//	free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);// ���ռ��ͷ�
	// Ӧ�ð�str��ɿ�ָ��
	// str = NULL;
	if (str != NULL)
	{
		// ���str���ǿ�ָ��, ����ָ��ԭ�����Ǹ�, ����ɷǷ�����
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
