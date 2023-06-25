#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//
//	scanf("%d%d%d", &a, &b, &c);
//	int min = 0;
//	int mid = 0;
//	int max = 0;
//	if (a - b > 0 && a - c > 0)
//	{
//		max = a;
//		if (b - c > 0)
//		{
//			mid = b;
//			min = c;
//		}
//		else
//		{
//			mid = c;
//			min = b;
//		}
//	}
//	else if (b - a > 0 && b - c > 0)
//	{
//		max = b;
//		if (a - c > 0)
//		{
//			mid = a;
//			min = c;
//		}
//		else
//		{
//			mid = c;
//			min = a;
//		}
//	}
//	else if (c - a > 0 && c - b > 0)
//	{
//		max = c;
//		if (b - a > 0)
//		{
//			mid = b;
//			min = a;
//		}
//		else
//		{
//			mid = a;
//			min = b;
//		}
//	}
//	printf("max = %d, mid = %d, min = %d", max, mid, min);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);//这是用换位置的思路
//	if (a < b)
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a < c)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	printf("%d, %d, %d", a, b, c);
//}


//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		//判断是否为3的倍数
//		if (n % 3 == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i = i + 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int x = 0;
//	int i = 0;
//	int divide = 0;
//	if (m >= n)
//	{
//		x = n;
//	}
//	else
//	{
//		x = m;
//	}
//	for (i = 1; i <= x; i++)
//	{
//		if (((m % i) == 0) && ((n % i) == 0))
//		{
//			divide = i;
//		}
//	}
//	printf("%d", divide);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	max = m - n ? m : n;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("max %d", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;//18 24经过第一次辗转相除之后就会 直接变过来，18 % 24 = 18；
//		//然后n = 18, m = 24
//	}
//	printf("%d", n);
//
//	return 0;
//}

//打印闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;		
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//像好的代码模仿 

//写一个代码打印100 ~ 200 的素数
//素数只能被1和它本身整除
//int main()
//{
//	int num = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		//判断num 是否为素数
//		//2->i - 1之间的数字去试除
//		int j = 0;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j == num)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count = count + 1;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}


//m = a * b
//a 和 b 中一定至少有一个数字 <= 开平方m 的
//16 = 2 * 8 = 4 * 4   4 <= 4
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}			
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d  ", count);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i = i + 2)//优化算法
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d  ", count);
//	return 0;
//}

//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来，电脑就会1分钟内关机，如果输入；我是猪，就取消关机
//关机
//shutdown -s -t 60
//取消关机
//shutdown -a
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system() - 执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：陈彦成真帅，就取消关机\n");
//	scanf("%s", input);//因为数组名本来就是一个地址
//	//if (input == "我是猪")//两个字符串比较是不能使用==的， 应该使用strcmp() string compare
//	if (strcmp(input, "陈彦成真帅") == 0)// string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在一分钟内关机，如果输入：陈彦成真帅，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "陈彦成真帅") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//goto 只能在一个函数范围内跳转，不能跨函数
//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//打印arr1这个字符串 %s - 字符串的格式来打印
//
//	return 0;
//}

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);

	return 0;
}