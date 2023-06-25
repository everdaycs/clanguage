#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//常量
//1.字面常量

//#define MAX 100000
//int main()
//{
//	//1.字面常量
//	//3。14
//	//10
//	//'a'
//	//"abcdef"
//
//	//2.const修饰的常变量
//	//const int num = 10;//num就是常变量 - 就有常属性（不能被改变的属性）
//	////num = 20;
//	//int arr1[10] = { 0 };
//	//const int n = 10;//arr表达式需要含有常量值，const还是一个常变量
//	//int arr2[n] = { 0 };//n是变量，这里是不行的
//	//printf("num = %d\n", num);
//
//
//	//3.#define 定义的标识符常量
//	//MAX = 2929299229;//error
//	//int n = MAX;
//	//printf("%d\n", n);
//
//	//4.枚举常量
//	//可以一一列举的常量
//	 
//	return 0;
//}

////性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的常量
//	enum Sex s = MALE;
//	///*MALE = 3;*/ error
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//字符串就是一串字符，用双引号括起来的一串字符

//int main()
//{
//	"dsfwefw";
//	return 0;
//}
//
//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	// \0是字符串的结束标志
//	/*char arr[] = "hello";*/
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	
//
//	//求一下字符串的长度
//	//int len = strlen("abc");//string length
//	////在计算字符串长度的时候是不包含\0的
//	//printf("%d\n", len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//printf("c:\test\test.c");
//	printf("ab\ncd");
//
//	return 0;
//}

//int main()
// {
//	//printf("(are you ok ??)");//??) --] 三字母词
//	//(are you ok]
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');                    
//	printf("%s\n", "a");
//	printf("%s\n", "abc");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c\n");
//	printf("\a\a\a\a\a");
//
//
//	//printf再打印数据的时候，可以指定打印的格式
//	return 0;
//}

//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是多少呢
//	//x  --ascii码值是88
//	//printf("%c\n", '65'); //a - 65   八进制 101
//	//printf("%c\n", "\x30");
//
//	printf("%zd\n", strlen("abc"));
//	printf("%zd\n", strlen("\t"));
//	printf("%zd\n", strlen("c:\test\328\test.c"));//八进制里面不会有8 所以只有\32
//	return 0;
//}

//注释：是用来解释复杂代码的
//int main()
//{
//	//int a = 10; //C++的注释风格
//	/*
//	int b = 0
//	*/
//	//C语言的注释风格  -- 不支持嵌套注释
//}


//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特：>");
//	printf("好好学习（1/0)?");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("卖红薯");
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式
//	int sum = Add(num1, num2);//Add函数委托人
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 9 / 2;
//	//float a = 9 / 2;//除号两端都是整数，执行的是整数除法
//	//float a = 9 / 2.0;
//	int a = 9 % 2; //% 取余
//	printf("%d\n", a);
//
//	return 0;
//  
//}

//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a += 5;
//	int b = a << 1;
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	
//	// 0 表示假的  非0就是真
//	int a = 0;
//	printf("%d\n", !a);
//
//
//	if (a)
//	{
//		//如果a为真，做事
//	}
//
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//
//
//	a = -5;
//	a = -a;
//	return 0;
//
//
//}


//int main()
//{
//	//sizeof是一个操作符
//	// 不是函数， 函数一定是要带括号的
//	//计算类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));// 计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);


	return 0;
}