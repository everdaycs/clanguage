#define _CRT_SSECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//创建
//	//int arr[3][4];
//	//char ch[3][10];
//
//	//初始化 - 创建的同时，给赋值
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//对于整数型数组，对应的是补零，如果是字符形式的数组则是补上\0
//	//int arr[3][4] = { {1,2}, {3,4},{5,6} };
//	//一个大括号就是一行元素
//	int arr[][4] = { {1,2}, {3,4},{5,6} };//行数是可以省略的，但是对于一行有几个元素是不能省略的。
//	return 0;
//}

//int main()
//{
//	//int arr[][4] = { {1,12}, {3,4},{5,6} };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i <= 2; i++)//行号
//	//{
//	//	for (j = 0; j <= 3; j++)
//	//	{
//	//		printf("%2d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//二维数组在数组中的存储
//
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d  ", *p);
//		p++;
//	}
//
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d] [%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}*/
//
//	return 0;
//
//}

//冒泡排序的思想：
//两两相邻的元素进行比较，并且可能的话需要交换
void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	//计算数组元素个数

	int i = 0;
	for (i = 0; i < sz - 1; i++)//进行n -1 个数
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)//进行交换
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)//一次冒号排序之后==1就不需要后面的东西了。
		{
			break;
		}
	}

}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//计算元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//数组传参的时候，传的是数组首元素的地址
//
//	return 0;
//}

//数组名是上面
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof（数组名） - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2. &数组名- 数组名表示整个数组，取出的是整个数组的地址

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr);//数组名表示整个数组
//	//printf("%d\n", sz);//为什么可以打印出40呢？
//
//	//printf("%p\n", &arr);//取出的是数组的地址
//	//printf("%p\n", &arr[0]);//第一个元素的地址
//	//printf("%p\n", arr);//数组名是首元素的地址
//
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//
//	return 0;
//}


int main()
{
	int a = 13;
	//00000000000000000000000000001101

	return 0;
}