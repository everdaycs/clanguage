#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	// 张三
//	// 12345
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	// 开辟不成功, 会有返回一个空指针
//	
//	// 申请20个空间
//	// 使用
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
//	// 释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
// malloc 函数向内存申请一个连续可用的空间, 并返回指向这块空间的指针
// 


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("calloc()-->%s\n", strerror(errno));
//		return 1;
//	}
//	// 使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//	}
//	// 释放
//	free(p);
//	p = NULL;
//	return 0;
//}

// calloc 和 malloc 对比:
// 1. 参数不一样
// 2. 都是在堆区上申请内存空间, 但是malloc未初始化, calloc会初始化为0
//    如果要初始化就是用, calloc
//    如果不需要初始化就使用, malloc


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// 使用
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
//	// 释放
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

// 1. realloc会找更大的空间
// 2. 将原来的数据拷贝到新的空间
// 3. 释放旧的空间
// 4. 返回新空间的地址

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


// 使用free 释放一块动态开辟内存的一部分
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
//		// 指针变了,
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

// 对同一块动态内存多次释放
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

// 动态开辟内存忘记释放
// malloc
// calloc
// realloc
// 所申请的空间, 如果不想使用, 需要free释放
// 如果不释放:
// 程序结束之后, 也会由操作系统回收

//
//test()
//{
//	int* p = (int*)malloc(20);
//	// 使用
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

	// 1. 调用GetMemory函数的时候, str的传参作为值传递, p是str的临时拷贝,
	// 所以再GetMemory函数内部讲动态开辟空间的地址存放在p中的时候, 不会影响
	// str. 所以GetMemory函数返回之后, str中依然是NULL指针. strcpy函数就会
	// 调用失败, 原因是对NULL的解引用操作, 程序会崩溃

	// 2. GetMemory 函数内容malloc 申请的空间没有机会释放, 造成了内存泄露



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
// 返回栈空间地址的问题
// GetMemory函数内部创建的数组是临时的, 虽然返回数组
// 的起始地址给了str, 但是数组的内存出了
// GetMemory函数就被回收了, 而str依然保存了数组的起始地址, 
// 这时如果使用str, str就是野指针



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

// ptr没有任何指向


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
//	// 释放
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
	free(str);// 将空间释放
	// 应该把str变成空指针
	// str = NULL;
	if (str != NULL)
	{
		// 这个str不是空指针, 还是指向原来的那个, 会造成非法访问
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
