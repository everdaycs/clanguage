#define _CRT_SECURE_NO_WARNINGS 1

// 局部的一些变量和数组都是在栈上开辟的, 栈内存的效率很高, 但是栈内存的空间是有限的
// 栈区主要存放运行函数的局部变量, 函数参数, 返回值, 函数调用时的上下文环境等
// malloc calloc realloc 上面的空间是在堆上的
// 堆区主要存放程序运行中动态分配的内存, 一般由程序员分配和释放, 程序结束可能由OS回收
// 数据段主要存放全局变量, 静态变量, 常量, 字符串常量等
// 代码区域主要存放程序的二进制代码
// 一般来说，栈上的空间是有限的，堆上的空间是无限的


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



// 柔性数组
// 最后一个元素大小可以是未知的


// 


// 结构中的柔性数组成员前面必须至少一个其他成员。
//struct SA
//{
//	int arr[];// 柔性数组
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
//	// 使用
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
//	// 重新调整  柔性的体现
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
//	// 释放
//	free(ps);
//	ps = NULL;
//	// sizeof 返回的这种结构大小不包括柔性数组的内存。
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
//	// 使用
//	ps->n = 10;
//	ps->c = 'a';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	// 打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	// 扩容
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
//	// 释放
//	free(ps->arr);
//	// 先free ps->arr 再free ps
//	// 因为如果free了ps 那就找不到后面的arr
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//
//}

// 方案1
// malloc 一次 free 一次
// malloc 次数少, 内存碎片就会较少, 内存的利用率就会高
// 方案2
// malloc 2次 realloc 2次
// malloc 次数多, 内存碎片就会多, 内存的利用率就会低



// 得到两个n行m列的矩阵, 两个矩阵是否相等.

//int main()
//{
//	int n = 0;
//	int m = 0;
//	// 接受n和m
//	scanf("%d %d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	// 接受arr1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	// 接受arr2
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//
//	// 比较
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
//	// 接受n和m
//	scanf("%d %d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	// 接受arr1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	// 接受arr2
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
//	// 比较
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

// 有一个整数序列, 现删除指定的某一个整数, 输出删除指定数字之后的序列
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


// 双指针
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
//	// 双指针 删除
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


// 获得月份天数
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



// %x - 以十六进制形式输出无符号整数
// %02x -  
// %2x -
// malloc 函数向内存申请一块连续的空间, 并返回这块空间的首地址
// 动态申请的区域在堆区
// free 参数可以为空