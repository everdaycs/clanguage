#define _CRT_SECURE_NO_WARNINGS 1

// �ֲ���һЩ���������鶼����ջ�Ͽ��ٵ�, ջ�ڴ��Ч�ʺܸ�, ����ջ�ڴ�Ŀռ������޵�
// ջ����Ҫ������к����ľֲ�����, ��������, ����ֵ, ��������ʱ�������Ļ�����
// malloc calloc realloc ����Ŀռ����ڶ��ϵ�
// ������Ҫ��ų��������ж�̬������ڴ�, һ���ɳ���Ա������ͷ�, �������������OS����
// ���ݶ���Ҫ���ȫ�ֱ���, ��̬����, ����, �ַ���������
// ����������Ҫ��ų���Ķ����ƴ���
// һ����˵��ջ�ϵĿռ������޵ģ����ϵĿռ������޵�


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// malloc
// calloc
// realloc
//int main()
//{
//	realloc(NULL, 20);// malloc(20)
//	return 0;
//}



// ��������
// ���һ��Ԫ�ش�С������δ֪��


// 


// �ṹ�е����������Աǰ���������һ��������Ա��
//struct SA
//{
//	int arr[];// ��������
//};


//struct S
//{
//	int n;
//	char c;
//	int arr[0];
//};
//
//int main()
//{
//	//                                           8    + 10 * 4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	printf("%d\n", sizeof(struct S));
//	// 8
//	// ʹ��
//	ps->n = 10;
//	ps->c = 'a';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// ���µ���  ���Ե�����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	// �ͷ�
//	free(ps);
//	ps = NULL;
//	// sizeof ���ص����ֽṹ��С����������������ڴ档
//	return 0;
//}
//


//struct S
//{
//	int n;
//	char c;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int * ptr = (int*)malloc(10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//	// ʹ��
//	ps->n = 10;
//	ps->c = 'a';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	// ��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	// ����
//	ptr = (int*) realloc(ps->arr, 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//
//	// �ͷ�
//	free(ps->arr);
//	// ��free ps->arr ��free ps
//	// ��Ϊ���free��ps �Ǿ��Ҳ��������arr
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//
//}

// ����1
// malloc һ�� free һ��
// malloc ������, �ڴ���Ƭ�ͻ����, �ڴ�������ʾͻ��
// ����2
// malloc 2�� realloc 2��
// malloc ������, �ڴ���Ƭ�ͻ��, �ڴ�������ʾͻ��



// �õ�����n��m�еľ���, ���������Ƿ����.

//int main()
//{
//	int n = 0;
//	int m = 0;
//	// ����n��m
//	scanf("%d %d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	// ����arr1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	// ����arr2
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//
//	// �Ƚ�
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}	
//	}
//end:
//	if (flag == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 1;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	// ����n��m
//	scanf("%d %d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	// ����arr1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	// ����arr2
//	int tmp = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &tmp);
//			if (tmp != arr1[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//
//	// �Ƚ�
//end:
//	if (flag == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 1;
//}

// ��һ����������, ��ɾ��ָ����ĳһ������, ���ɾ��ָ������֮�������
//int main()
//{
//	int n = 0;
//	scanf("%d ", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			arr[i] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


// ˫ָ��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d ", &del);
//	// ˫ָ�� ɾ��
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// ����·�����
//int main()
//{
//	int y = 0;
//	int m = 0;
//
//	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31,
//			31, 30, 31, 30, 31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int day = days[m];
//		if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
//		{
//			day = 29;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}


//int main()
//{
//	float p = 0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &p, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		p = p * 0.7 - flag * 50;
//	}
//	if (m == 12 && d == 12)
//	{
//		p = p * 0.8 - flag * 50;
//	}
//	if (p < 0)
//	{
//		p = 0.0;
//	}
//	printf("%d", p);
//	return 0;
//
//}


//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;



// %x - ��ʮ��������ʽ����޷�������
// %02x -  
// %2x -
// malloc �������ڴ�����һ�������Ŀռ�, ���������ռ���׵�ַ
// ��̬����������ڶ���
// free ��������Ϊ��