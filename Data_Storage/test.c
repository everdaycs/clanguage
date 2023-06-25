#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//#include <stdio.h>
//
//
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//} 



//最小公倍数方法
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	while (m % a != 0 || m % b != 0)
//	{
//		m++;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (i * a % b != 0)
//	{
//		i++;
//	}
//	printf("%d", i * a);
//	return 0;
//}


void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[101] = { 0 };
	//输入
	gets(arr);
	//处理
	int len = strlen(arr);
	//1.逆序
	reverse(arr, arr + len - 1);
	//2.逆序每个单词
	char* cur = arr;
	while (*cur)
	{
		//找一个单词
		char* start = cur;
		while (*cur != ' ' && *cur !='\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		if (*cur == ' ')
		{
			cur++;
		}
	}
	//打印
	printf("%s\n", arr);
	return 0;
}