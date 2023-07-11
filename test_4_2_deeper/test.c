#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 声明
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

// 计算机语言发展

// 二进制的代码 --> 汇编代码  --> B语言 --> C语言
//                 ADD
//        汇编        编译       预编译
//            编译器    链接器

//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d----%s, %s %s line - %d\n", arr[i], __FILE__, __DATE__, __TIME__, __LINE__);
//	}
//
//	return 0;
//}


// 补充: 其实编译器在代码编译的时候, 会对函数和变量名重命名的
// 在C语言中重命名的规则基本就是: 加'_'
// C++中会更复杂
//int main()*
//{
//	printf("%s\n", __FUNCTION__);
//	printf("%s\n", __FUNCDNAME__);
//
//	return 0;
//}



int main()
{
	int a = 10;
	return 0;
}