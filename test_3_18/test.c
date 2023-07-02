#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 定义一个学生类型
//struct Stu
//{
//	char name[20];
//	int age;
//	float weight;
//} s4, s5, s6;// 全局变量

//int main()
//{
//	struct Stu s1; // 局部变量
//	struct Stu s2;
//	struct Stu s3;
//
//	return 0;
//}


// 匿名结构体类型
//struct 
//{
//	char c;
//	int a;
//	double d;
//}s1;
//
//struct
//{
//	char c;
//	int a;
//	double d;
//}*ps;
//
//
//
//int main()
//{
//	// s1 = *ps; error
//	return 0;
//}


// 数据结构
// 描述的是数据在内存中的存储结构

//struct Node
//{
//	int data;
//	struct Node n;
//};

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	struct Node n1;
//	struct Node n2;
//	n1.next = &n2;
//
//	return 0;
//}


//typedef struct
//{
//	int data;
//	char c;
//} S;
//
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


// 结构体的初始化
//struct S
//{
//	int a;
//	char c;
//}s1;
//
//
//struct B
//{
//	float f;
//	struct S s;
//};
//int main()
//{
//	//int arr[10] = {};
//	struct S s2 = { 100, 'q' };
//	struct S s3 = { .c = 'r', .a = 2000 };
//	struct B sb = { 3.14, {200, 'w'} };
//	printf("%f, %d, %c\n", sb.f, sb.s.a, sb.s.c);
//	return 0;
//}

//struct S
//{
//	char name[1000];
//	int* ptr;
//};
//
//int main()
//{
//	int a = 100;
//	struct S s = { "abcdef", &a };
//
//	return 0;
//}


//struct S1
//{
//	int a;
//	char c;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S3
//{
//	char c1;
//	int a;
//	char c2;
//	char c3;
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

// 1.结构体的第一个成员永远都放在0偏移处
// 2.从第二个成员开始, 以后的每个成员都要对齐到某个对齐数的整数倍数
// 这个对齐数: 成员自身大小和默认对齐数的较小值
// 备注:
// VS 环境下, 默认对齐数是8
// gcc 环境下, 没有默认对齐数时, 对齐数就是成员自身的大小
// 3. 当成员全部存进去后
// 结构体的总大小必须是, 所有成员的对齐数中最大对齐数的整数倍, 如果不够, 则浪费空间浪费
// 4. 如果嵌套了结构体, 嵌套的结构体成员要对齐到自身成员的最大对齐数的整数倍数
// 整个结构体的大小, 必须是最大对齐数的整数倍. 最大对齐数包含嵌套的结构体成员中的对齐数


// 为什么存在内存对齐
// 1. 平台原因:
// 不是所有的硬件平台都能访问任意地址上的任意数据的; 某些硬件平台只能在某些地址处取某些特定类型的数据, 否则抛出硬件异常
// 2. 性能原因:
// 数据结构(尤其是栈) 应该尽可能地在自然边界上对齐
// 原因在于, 未来访问未对齐的内存, 处理器需要两次内存访问; 而对齐的内存访问仅需要一次访问

//#include <stddef.h>
//struct S
//{
//	char c;
//	int a;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, a));
//	return 0;
//}


//struct S3
//{
//	double c1;
//	char c2;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//#pragma pack(1)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

// 什么是位段
// 位段的声明和结构是类似的, 又两个不同:
// 1. 位段的成员必须是 int, unsigned . 或 signed int
// 2. 位段的成员名后边有一个冒号和一个数字

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//
//int main()
//{
//	struct A sa = { 0 };
//
//	printf("%d\n", sizeof(sa));
//
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

// 位段的跨平台问题
// 1. int位段被当成有符号还是无符号是不确定的
// 2. 位段中最大为的数目不能确定
// 3. 位段中的成员在内存中从左向右分配, 还是从右向左分配标准尚未定义


enum Sex
{
	// 枚举的可能取值
	MALE,
	FEMALE,
	SECRET
};


int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}