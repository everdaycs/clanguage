#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//F5 - 开始调试
//ctrl + f5 开始执行（不调试）
//f9 设置断点/取消断点
//f10 逐过程
//f11 逐语句  f11进入函数
//f5 和 f9 配合使用的
//让代码运行到你想要的地方，这既是断点
//f5 跳到执行逻辑的下一个断点，不是物理上的断点


//void test()
//{
//	printf("hehe\n");
//}
//int g_val = 100;
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", i);
//	}
//	for (j = 0; j < 10; j++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}

//int a[3][2]
//a 是二维数组的数组名
//数组名是首元素的地址
//a 是第一行的地址

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 9; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	int i = 0;
//	while (*arr2 != '\0')
//	{		
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//这一步拷贝了'\0'
//}

#include <assert.h>

//void my_strcpy(char* dest, const char* src)//这个const的加入说明src是不能更改的
//{
//	//断言
//	assert(dest != NULL);
//	assert(src != NULL);
//  //把src
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

int main()
{
	//int n = 10;
	//n = 20;

	//const 放在*的左边,*p不能改变了,也就是p指向的内容,不能能通过p来改变了,但是p是可以改变的,p可以指向其他的变量
	//const int* p = &n;
	//*p = 20;//err
	//p = &n;//ok


	//int* const p = &n;
	//p = &m;//err
	//*p = 20;//ok
	const int m = 0;
	int* p = &m;
	*p = 20;
	printf("%d", m);
	return 0;
}