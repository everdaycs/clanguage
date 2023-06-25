#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//数组和指针
//数组 - 能够存放一组相同类型的元素,数组的大小取决于数组的元素个数和元素类型
//指针 - 地址 - 指针变量, 大小是4/8字节
//数组是数组,指针是指针
//数组名是数组首元素的地址,这个地址就可以存放再指针变量中
//我们就可以使用指针来遍历数组
//
//数组名
//大部分情况下数组名是数组首元素的地址
//但是有两个例外
//sizeof(数组名) - 数组名表示整个数组,计算的是整个数组的大小
//&数组名 - 数组名标志整个数组,取出的是数组的地址
//int main()     
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof( * a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	//&a 取出的是数组的地址,但是数组的地址也是地址,是地址大小就是4/8个字节
//	//int (*pa)[4] = &a;
//	//类型 int(*)[]
//	printf("%d\n", sizeof(*&a));
//	//sizeof(a) = 16
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));//取出首元素的地址 4/8
//	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址
//
//	return 0;
//
//}


//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	
//	//strlen接受的都是地址
//	printf("%d\n", strlen(arr));//随机值,因为不知道\0的位置
//	printf("%d\n", strlen(arr + 0));//
//	printf("%d\n", strlen(*arr));//把97当作地址, 会形成非法访问
//	printf("%d\n", strlen(arr[1]));//如何形成非法访问, 解引用
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));


	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));//*arr是首元素,计算的是首元素的大小
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));//跳过一个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));


//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//
//
//	//printf("%d\n", sizeof(arr));//7 只关心数组的大小 有\0
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));//*arr - 是数组首元素 1
//	////int sz = sizeof(arr) / sizeof(*arr);
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));//4 数组的地址
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0/))
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	/*printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));*/
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//p + 1是b的地址 5
//	printf("%d\n", strlen(*p));//
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));//a[0]不是单独放在sizeof内部,a[0]表示的首元素的地址,即第一行第一个元素的地址 - &a[0][0]
//	//a[0] + 1是第一行第二个元素的地址 &a[0][1]
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	//a 作为二维数组的数组名并非单独放在sizeof 内部,所以表示首元素的地址
//	//二维数组的首元素是第一行,这里的a就是第一行的地址--- int (*)[4]
//	//a + 1是跳过第一行, 指向了第二行
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	//&a[0]是第一行的地址
//	//&a[0] + 1是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));//就是第一行
//	printf("%d\n", sizeof(a[3]));//每一行都是16个字节
//	return 0;
//}

//int main()
//{
//	int a[3] = { 0 };
//
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", a[0] + 1);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

struct Test
{
	int Num;
	char* pcName;
	short sDara;
	char cha[2];
	short sBa[4];
} *p;


int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	return 0;
}