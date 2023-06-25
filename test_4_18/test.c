#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");//死递归
//	main();
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//void unprint(unsigned int n)
//{
//	
//	printf("%d", n % 10);
//	if (n < 10)
//	{
//		return;
//	}
//	unprint(n / 10);
//
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//print函数可以打印参数部分的数字每一位
//	printf("\n");
//	unprint(num);
//	return 0;
//}

//void test(int n)
//{
//	if (n < 1000000000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
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


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		//return 1 + my_strlen(str++) //不能使用++因为这是传进去的东西是str 而不是str + 1
//		//++str也不够好因为在递归的过程中会改变str的值，如果我们不希望str改变就不太好了
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//	
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}


//n的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n* Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	int ret = Fac(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


//斐波那契数列
//int count = 0;
//递归可以求解但是效率太低
//int Fib(int n)
//{
//	//计算第三个斐波那契数的计算机次数
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}


//编写程序数一下，1，到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}


//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5.... + 1/99 - 1/100的值，打印结果
//int main()
//{
//
//	int i = 0;
//	double sum = 0.0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - 1.0 / i;
//		}
//		else
//		{
//			sum = sum + 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//}

//int main()
//{
//	int i = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double all = 0.0;
//	for (i = 1; i <= 99; i = i + 2)
//	{
//		sum1 = sum2 + 1.0 / i;
//	}
//	for (i = 2; i <= 100; i = i + 2)
//	{
//		sum2 = sum2 + 1.0 / i;
//	}
//	all = sum1 - sum2;
//	printf("%lf", all);
//}
// 
// 
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flag;
//		flag = -flag;//点睛之笔
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}


//求是个整数中的最大值

//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	//打印九行
	for (i = 1; i < 10; i++)
	{
		//打印一行
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-2d ", i, j, i * j);
			//左对齐-    +是右对齐
		}
		printf("\n");
	}
	return 0;
}