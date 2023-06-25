#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针数组 - 是数组 - 是一种存放指针的数组
//数组指针 - 是指针 - 是一种指向数组的指针 - 存放的是数组的地址

//int main()
//{
//	//指针数组
//	char *arr[4];
//	//数组指针
//	int arr[5];
//	int(*pa)[5] = &arr;
//	return 0;
//}


//int arr[10]
//arr 和 &arr有什么区别?

//数组名绝大部分是数组首元素的地址
//但是有2个例外
//1. sizeof(数组名) - sizeof内部单独放一个数组名的时候,数组名表示的是整个数组,计算得到的是数组的总大小
//2. &arr - 这里的数组名表示整个数组,取出的是整个数组的地址,从地址值的角度来讲和数组首元素的地址是一样的,但是意义不一样
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int *
//	printf("%p\n", arr + 1);//4
//
//	printf("%p\n", &arr[0]);//int *
//	printf("%p\n", &arr[0] + 1);//4
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr + 1);
//
//	int(*P)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = arr;
//	
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i)
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6,3,4,5,6,7 };
//	//二维数组的数组名,也表示首元素的地址
//	//二维数组的首元素 第一行的地址
//	print(arr, 3, 5);
//	return 0;
//}
//
//int arr[5];
//int* parr1[10];
//int(*parr2)[10];
//int(*parr3[10])[5];//parr3是数组,数组存放的是数组指针


//一级指针传参
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//
//	return 0;
//}

//二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(*p);
//
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
////&函数名得到就是函数的地址
//
//
//int main()
//{
//	//printf("%p", &Add);
//	//printf("%p", Add);
//	int (* pf)(int, int) = Add;//函数的地址要存起来,就得放在[函数指针变量]中
//	//返回类型     参数
//
//	//int out = (*pf)(3, 5);
//	int out = pf(3, 5);
//	//函数的函数名就是地址,所以可以直接用函数名的指针来调用函数.
//	printf("%d", out);
//	return 0;
//}

//char* test(int c, float* pf)
//{
//
//}
//
//int main()
//{
//	char* (*pa)(int, float*) = &test;
//	return 0;
//}


//typedef int* ptr_t;
//typedef void(*pf_t)(int);//将void(*)(int)类型的重新起个别名叫做pf_t
////代码1
//int main()
//{
//	//1. 将0 强制类型转换为void (*)() 类型的函数指针
//	//2. 这就意味着0地址处放着一个函数,没有参数,返回类型是void
//	//3. 调用0地址处的这个函数
//	(*(void (*)())0)();
//	//(int) 0 强制指针转换
//
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	//上述的代码是一个函数的生命
//	//函数的名字是signal
//	//改函数指向的函数参数是int,第二个是void(*)(int)类型的指针
//	//
//	//signal函数的返回类型也是一个函数指针
//	//该函数指针指向的函数蚕食是int,返回类型是void
//	return 0;
//}

//函数指针数组
//数组的每个元素是一个函数指针

//指针数组
//整型指针的数组
//int *arr[4];

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
	}
	int main()
	{

	int input = 0;
	do
	{
		meun();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;

		}
	}
	//存放函数指针的数组 - 函数指针数组
	int (*pf[4])(int, int) = { Add, Sub, Mul, Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pf[i](8, 4);
		printf("%d\n", ret);
	}

	return 0;
}