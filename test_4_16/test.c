#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//函数的组成
//ret_type fun_name(paral, )
//{
//	statememt; //函数体
//}

//int get_max(int x, int y)//参数类型要匹配的上，传过来是什么，我们就是什么
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//返回z 返回最大值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//
//	printf("%d\n", max);
//	return 0;
//}

//函数返回类型的地方写成void :表示这个函数不返回任何值 也不需要返回
//形参是实参的一份临时拷贝，改变形参不能改变实参
//void swap1(int x, int y)//传值调用
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)//穿址0调用  形参和实参之间是有联系的
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数，交换这两个整型变量的值
//	printf("交换前：a = %d, b = %d\n", a, b);
//	swap1(a, b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	swap2(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}

//这个代码的功能足够单一，所有人都可以用
//int is_prime(int x)
//{
//	int i = 2;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//100~200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//一个函数如果不写返回类型， 默认返回int类型
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//                    这是一个数组
// int binary_search(int* a, int k, int sz)
// 这里不会真正创造一个数组
// 
//int binary_search(int arr1[], int n, int sz)
//{
//	int left = 0;
//	int right = sz -1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//
//		//没有创造为什么还要用呢，因为需要用到数组里面的元素
//		if (n > arr1[mid])
//		{
//			left = mid + 1;
//		}
//		if (n < arr1[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//	
//}

//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz -1;
//	while (left <= right)
//		{
//			int mid = (right + left) / 2;
//			if (k > arr[mid])
//			{
//				left = mid + 1;dw                                                           
//			}
//			if (k < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//			}
//		}
//	
//		return -1;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//找到了就返回找到的位置下标
//	//找不到就返回-1
//	//数组arr传参，实际传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr1, key);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了， 下标是“%d\n", ret);
//	}
//  
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//函数的嵌套调用和链式访问
//函数是不能嵌套定义的；
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test()
//{
//	tes
//}


//链式访问，将一个函数的返回值，变成另一个函数的参数
//int main()
//{
//
//	/*int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));*/
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//打印在屏幕上方的个数
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下
//	int Add(int, int);
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
#include "sub.h"

//导入静态库
#pragma comment(lib, "sub.lib")
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);

	int c = sub(a, b);

	printf("%d\n", c);

	return 0;
}