#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i += 1;
//		count += 1;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//

//int my_strlen(char* str)//这个str是数组的首字符的地址
//{
//	char* start = str;//这个str是数组名
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

//for (vp = &values[N_VALUES]; vp > &values[0])
//{
//	*--vp = 0;
//}
//
//for (vp = &values[N_VALUES - 1]; vp >= &value[0]; vp--)
//{
//	*vp = 0;
//}

//指针相减
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = &arr[9] - &arr[0];
//	int m = &arr[0] - &arr[9];
//
//	printf("%d\n", n);
//	printf("%d\n", m);
//
//	return 0;
//}



//二级指针

//int main()
//{
//	int a = 10;//a 是要再内存中申请4个字节的空间的
//	//一级指针
//	int* pa = &a;//0x0012ff40, pa是指针变量，用来存放地址，也得向内存申请空间，申请四个或者8个字节
//	//二级指针
//	int* * ppa = &pa;//取到pa这个变量的地址
//	int** * pppa = &ppa;//因为一颗心是说明他是一个指针，要指向什么变量，那个变量的类型是什么，就把那一刻心拿掉。
//
//	//pa指向的对象是一个地址，也是一个指针所以要用int *来表示
//	//ppa 这颗心表示ppa是指针，ppa指向的类型是int * 的所以会有两颗心
//	//一颗心代表着是指针，然后可以把一颗心抹去，指针所指向的变量的类型是说明他就是什么前面
//	printf("%d\n", **ppa);
//	return 0;
//}

//int main()
//{
//	/*int* p;
//	int arr[10];
//	char ch[5];*/
//
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr指针数组
//	//存放指针的数组
//	int *arr[] = { &a, &b, &b };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	char* arr2[5];
//	float* arr3[7];
//	return 0;
//}

//int main()
//{
//	char* arr[5];//[char* char* char* char* char*]
//	char** p = arr;//&arr[0] char**
//
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* ptr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", ptr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 
 
//1   struct Book
//
//{
//char name[20];
//int price;
//}；


/*struct Book

{
	char name[20];
	int price;
}b3, b4, b5;  *///全局变量
//struct Book b3;
//struct Book b4;


//3
//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;
//
//int main()
//{
//	struct Book b1;
//	struct Book b2;//局部变量
//	Book b3;
//	return 0;
//}


//struct S
//{
//	char c;
//	char arr[20];
//	int *p
//}s1, s2;
//
//struct S s3;
//
//
//struct B
//{
//	int a;
//	struct S s;
//	double d;
//}sb1, sb2;
//
//
//int main()
//{
//	struct S s4 = { 'c', "zhangsan", 'NULL' };
//	struct B sb4 = { 100, {'q', "lisi", &a}, 3.14 };
//	return 0;
//}




//struct Book
//{
//	char name[20];
//	int price;
//};
//
//void print(struct Book *p)//struct Book 就相当于int float 之类的东西，然后 p 是指向这种类型的指针 是这种类型的地址
//{
//	printf("%s %d\n", p->name, p->price);
//}
//int main()
//{
//	struct Book b = { "鹏哥C语言",66 };
//	struct Book b1 = { .price = 80, .name = "hehe" };
//
//	printf("%s %d", b.name, b.price);
//	printf("%s %d", b1.name, b1.price);
//
//
//	print(&b1);
//	return 0;
//}


//结构体的传参
struct S
{
	int arr[100];
	int n;
};

//数组名才是传递的地址
void print1(struct S ss)//这里是吧整个结构体的变量传进去了，然后就会有点大，会压榨栈区空间
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ss.arr[i]);
	}
	printf("\n%d ", ss.n);
}

int main()
{
	struct S s = { {1,2,3,4,5}, 100 };
	print1(s);

	return 0;
}