#define _CRT_SERCURE_NO_WARNINGS 1

#include <stdio.h>


//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0,1,2,3,4,5,6,7,8,9
//	printf("%d\n", arr[4]);
//	//[] - 就是下标引用操作符
//	return 0;
//}


//函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b);
//	test();
//	return 0;
//}


//结构成员访问操作符
//.
//->

//结构体
// int float char short
//double long longlong
//书：书名，书号，出版社，作者，定价
//人：名字，年龄，性别

//struct Book
//{
//	char name[20];//
//	char id[20];
//	int price;
//};
//
//
//int main()
//{
//	int num = 10;
//	struct Book b = { "C语言", "C3472812", 55 };
//
//	struct Book* pb = &b;
//	printf("书名：%s\n", (*pb).name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//	//指向struct Book 的一个执政
//
//
//	/*printf("书名:%s\n", b.name);
//	printf("书号:%s\n", b.id);
//	printf("定价:%d\n", b.price);*/
//
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	// 00000011 - a
//	//00000000000000000000000001111111
//	//0111111 - b
//	char b = 127;
//	char c = a + b;
//
//	// c- 10000010
//	//发现a 和 b都是char
//	//这里就会发生整形提升
//	//整型提升是按照变量的数据类型的符号位来提升的
//	//
//	printf("%d\n", c);
//	//c 又要整型提升
//	//111111111111111111111111100000010
//	//100000000000000000000000011111101
//	//100000000000000000000000011111100
//
//	return 0;
//}


//在编译的过程中整型提升，会让a ！=0xb6
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb000000;
//
//	if (a == 0xb6)
//	{
//		printf("%d", a);
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//整型提升
//	printf("%u\n", sizeof(-c));
//	printf("%u\n", sizeof(!c));
//	//自身的大小达不到整型的大小，进行运算时，就会整型提升
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int d;
//	int s = 0;
//	d = sizeof(s = a + 3);//这个表达式中不会发生运算，sizeof是推导出来的结果
//	printf("%d %d", s, d);//值属性，类型属性
//
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//第一次调用返回值是2，因为fun函数的调用顺序不同，这也是一个错误的代码 在调用和运算符优先级会产生错误
//	printf(" %d\n", answer);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d", ret);
//
//	return 0;//我们写的表达式，有可能不能确定唯一的计算路径
//}

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}
//
//
//int main()
//{
//	char str[] = "hello bit";
//
//	//str = hello bit\0
//	printf("%d %d", sizeof(str), strlen(str));
//	//strlen - 函数 - 求字符串长度的，找\0之前出现的字符个数
//	//sizeof - 操作符 - 计算变量/类型所占内存大小，单位是字节
//	//数组长度需要用，sizeof(arr) / sizeof(arr[0])  
//	//不能用strlen来求
//
//	int a[][3] = { {0,1,2}, {3,4,5} };//行号可以省略列号不能省略，
//	int a[2][4] = { {0,1,2}, {3,4}, {5} };// 2 4 代表有两行，4列
//	int a[][3] = { {0,2}, {}, {3,4,5} };//
//
//
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	return;
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		arr[i] = 0;
//	}
//
//	return;
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		int tmp;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	return;
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//}

//int main()
//{
//	int x = 0;;
//	printf("x = %d", x);
//	int* p = &x;
//	*p = 2;
//	printf("x = %d", x);
//}


//蒋数组A终端的内容和数组B中的内容进行交换。（数组一样大）
//数组名是常量的地址，不能多数组名进行赋值或者++--的操作
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < 5; i++)
//	{
//		int tmp;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr1[%d] = %d ", i, arr1[i]);	
//		printf("arr2[%d] = %d ", i, arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int 
//}

//int main()
//{
//	int a = 10;//a是整型，占用4个字节的内存空间，每个字节都有对应的地址
//
//	int* pa = &a;//&a - 得到的是a的地址，其实得到的是a所占4个字节中第一个字节的地址 pa是指针变量，
//
//	pa = 10;//在指针变量里面，谁都会被当作地址来处理
//
//	return 0;
//}

//int main()
//{
//	//char c;
//	//short s;
//	//int i;
//
//	char* pc;//4
//	short* s;//4
//	int* i;//
//
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(s));
//	printf("%zu\n", sizeof(i));
//
//	return 0;
//}

//指针类型决定了，在解引用指针的时候能访问几个字节

//int main()
//{
//	int a = 0x11223344;//16位
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = &a;//因为char类型只能访问一个字节
//	*pc = 0;
//
//	return 0;
//}


//指针类型决定了，指针进行+1 -1的时候，一步走多远
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];//可以一次性改变四个字节上面的东西
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		*p = i + 1;//因为一开始定义的时候是指向int类型的指针 所以每次加一都是加4 所以就可以 每一次加4就是在数组里面的每一个元素的位置 地址
//		p++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//野指针
//int main()
//{
//	int* p;//野指针
//	*p = 20;
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 100;
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//
//	return 0;
//}


//void test(int arr[], int sz)//void test(int * arr, int sz)
//{
//	//形参的部分写成数组，写成指针道理是一摸一样的
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	
//	//*(arr + i) = *(p + i) = arr[i]
//	//arr[i] == *(arr + i) --> *(i + arr) -- i[arr]    []只是一个操作符可以理解成+  2 + 3 = 3 + 2 所以arr[i] = i[arr]
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", &arr[i], p + i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5];
//	//arr[i][j]
//	//*(arr + i)[j]
//	//*(*(arr + i) + j)
//	return 0;
//}

int main()
{
	char s[20] = "abcde";
	char d[20] = "abced";
	if (s == d)
	{
		printf("equal");
	}

	return 0;
}

int main()
{
	int* p = (int*)malloc(sizeof(int) * n);
}

int a = 1;
while (a <= 100)
{
	printf("%d\n", a* a);
	a++;
}

struct Student
{
	int ID;
	char[20] name;
	float marks[8];
	struct Student* next;

};

struct Student* creatlist()
{
	struct Student* headnode = (struct Student*)malloc(sizeof(struct Student));	
	headnode->next = NULL;
	return headnode;
}

struct Student* creatnode()
{
	struct Student* headnode = (struct Student*)malloc(sizeof(struct Student));
	headnode->
	headnode->next = NULL;

}


int foo(int n)
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count = count + 1;
		}
	}
	if (n == 0)
	{
		return -1;
	}

	return count;
}

int main()
{
	int i = 0;
	int ret = 0;
	int n = 0;
	scanf("%d", n);
	ret = foo(n);
	printf("%d", ret);
	
}


int main()
{
	char num[11] = { 0 };
	scanf("%s", num);
}

