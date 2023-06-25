#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
////ptr1[-1] --> *(ptr1+(-1)) --> *(a+4-1) --> *(a+3) --> 4
////01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
////ptr2 --> (int*)((int)a + 1) --> (int*)((int)0x00 00 00 01 + 1) --> (int*)0x00 00 00 02
////*ptr2 --> *(int*)0x00 00 00 02 --> 0x02 00 00 00
//


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);	
//	return 0;
//}
//逗号表达式
//a[0]是二维数组第一行的数组名, 对a[0]这个数组名没有&, 没有单独sizeof, 所以a[0]这个数组名代表的是数组首元素的地址, 即a[0][0]的地址


//int main()
//{
//	int a[5][5];
//	int (*p)[4];
//	p = a;
//
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
////100000000 00000000 00000000 00000100
////111111111111111111111111111111111011
////111111111111111111111111111111111100
////FF FF FF FC 

//
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
////(&aa + 1) 跳过整个二维数组, 指向二维数组后面的地址
////*(aa + 1) 指向二维数组第二行的首元素的地址


//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//
//	char** pa = a;
//
//	pa++;
//
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };	
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;	
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3); 
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}
//

//打印菱形
//每一行是空格加上*组成的, 空格在变少, *在增多
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) -1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 9999999999; i++)
//	{
//		//判断i是否是zimishu
//		//1. 计算i的位数 - n
//		int n = 1;
//		int tmp = 0;
//		tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2. 计算i的每一位的n次方的和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. 判断
//		if (i == sum)
//		{
//			printf("%d  ", sum);
//		}
//	}
//	return 0;
//}


//求和 Sn = a + aa + aaa + aaaa + aaaaa
// 2 + 22 + 222 + 2222 + 22222
//求有a组成的前n项之和, 不考虑溢出
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//void reverse_str(char* str)
//{
//	assert(str);
//	int len = strlen()
//}
//int main()
//{
//	char arr[10001];
//	gets(arr);
//	reverse_
//}


//喝汽水, 1瓶汽水1元, 两个空瓶可以换一瓶汽水, 给20元, 可以有多少汽水

// int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int empty = money;
//	int total = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money > 0);
//	total = 2 * money - 1;
//	printf("%d", total);
//
//	return 0;
//}



