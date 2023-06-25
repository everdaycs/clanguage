#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	//指针数组
//	char* arr[10];
//	//数组指针
//	int arr2[5] = { 0 };
//	int(*p)[5] = &arr2;
//	//函数指针
//	int(*pf)(const char*) = &my_strlen;//pf是一个指向函数的函数指针变量
//	(*pf)("abcedf");
//	return 0;
//}

//指向函数指针数组的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//函数指针数组
//	int (*pfArr[4])(int, int) = { Add, Sub };
//	int (*(*ppfArr)[4])(int, int);
//	ppfArr = &pfArr;//ppfArr 是一个指向函数指针数组的指针
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*pa[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	if (input >= 1 && input <= 4)
//	{
//		int x = 0;
//		int y = 0;
//		scanf("%d %d", &x, &y);
//		ret = pa[input](x, y);	
//		printf("%d", ret);
//	}
//	else
//	{
//		printf("请重新输入");
//	}
//
//	return 0;
//}
//
//
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//9 8 7 6 5 4 3 2 1 次循环, 第一个数需要9次循环,才能到它从位置上,每一次循环都可以让一个数出现在他该出现的地方
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序
//	//使用冒泡排序的算法, 来排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void qsort(void* base,//指向了待排序数组的第一个元素
//	size_t num,//待排序的元素个数
//	size_t size,//每个元素的大小,单位是字节,size
//	int (*cmp)(const void*, const void*)//指向一个函数,这个函数可以比较两个元素的大小
//);

//qsort函数的使用者,提供这个函数
#include <stdlib.h>
#include <string.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;//需要升序前面减后面
//	//指向要比较的两个元素  
//}
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//test1()
//{
//	int arr[] = { 3, 4, 2 ,1,5,8,7,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用qsort来排序正数组,这里就要提供一个比较函数,这个比较函数能够比较两个整数的大小
//	qsort(arr, sz, sizeof(arr[0]),cmp_int);
//	print_arr(arr, sz);
//}
//
////测试qsort 排序结构数据
//
//
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 25}, {"wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s), cmp_stu_by_age);
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	void* p = &a;//void * - 无具体类型的指针,所以它可以接受任何类型的地址
//	*p;//err ,  void*的指针不饿能解引用操作符
//	//p++;
//	*(int*)p;//把它转换成整数型指针
//	return 0;
//}

//希望这个bubble_sort函数可以排序任意类型的数据
//因为无法固定判断以后会输入什么数据

//一个字节一个字节的交换
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void * base, size_t num, size_t width, int (*cmp)(const void*p1, const void*p2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;//只能放在循环里头
		for (j = 0; j < num - 1; j++)
		{
			//两个相邻的元素比较
			//arr[j] arr[j+1]
			//char 一个字节
			if (cmp((char*)base +j *width, (char*)base + (j+1)*width) > 0)
			{
				//交换
				flag = 0;
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;//需要升序前面减后面
	//指向要比较的两个元素  
}

void test3()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

int main()
{
	test3();
	return 0;
}