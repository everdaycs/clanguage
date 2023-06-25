#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void test(int arr[])//数组可以传递回来
//{
//	arr[0] = 1;
//	arr[1] = 2;
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//void test(int* p1, int* p2)
//{
//	*p1 = 2;
//	*p2 = 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//}

//int a = 0;//声明全局变量
//int b = 0;
//void test()
//{
//	a = 1;//全局变量可以在任意地方使用，所以在函数里面改变，那么全局变量也会改变
//	a = 2;
//}
//
//int main()
//{
//	test();//调用test的值之后，就已经被改变了
//	return 0;
//}
//#include <stdio.h>
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d =%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print_table(n);
//	//函数的起名最好能体现函数的功能
//
//	return 0;
//}

//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	printf("%d", Fun(2));
//	return 0;
//}

//int my_strlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}


//void reverse_string(char* string)
//{
//	int i = 0;
//	int j = 0;
//	int length;
//	length = my_strlen(string);
//	char ch;
//	for (j = 0, i = length; j <= length / 2 - 1; j++, i--)
//	{
//		
//		ch = string[j];
//		string[j] = string[i - 1];
//		string[i - 1] = ch;
//	}
//}
//void reverse_string(char* string)
//{
//	char temp;
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	while (left < right)
//	{
//		temp = string[left];//*(str + left)
//		*(str + left) = *(str + right);
//		string[right] = temp;
//		left++;
//		right--;
//	}
//}


//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char char1[] = "abcdef";
//	printf("%s\n", char1);
//	reverse_string(char1);
//	printf("%s", char1);
//	return 0;
//}

//求10个整数中的最大值
//二分法

//int binary_search(int arr[], int x)
//{
//	int left = 0;
//	int sz = sizeof(arr);
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		{
//			if (x > arr[mid])
//			{
//				left = mid + 1;
//			}
//			if (x < arr[mid])
//			{
//				right = mid - 1;
//			}
//			if (x == arr[mid])
//			{
//				return 1;
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr);
//	int x;
//	scanf("%d", &x);
//	int ret = binary_search(arr, x);
//	if (ret == 1)
//	{
//		printf("找到了");
//	}
//	else if (ret == -1)
//	{
//		printf("没找到");
//	}
//
//	return 0;
//}


//DigitSum(int n)
//{	
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	if (n <= 9)
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
 


//int main()
//{
//	/*int arr[8];
//	char ch[5];*/
//	//数组中的元素类型，数组名，常量表达式
//	//int n = 8;
//	//int arr[n];
//	//应输入常量表达式
//
//	//int a = 10;//初始化
//	//int arr1[10] = { 1 ,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr2[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr3[] = { 1,2,3,4,5 };
//	////int arr2[5] = { 1,2,3,4,5 }; 相等
//
//	char ch1[5] = { 'b', 'i', 't' };
//	char ch2[] = { 'b','i','t' };
//	char ch3[5] = "bit";// b i t /0 0
//	char ch4[] = "bit";// b i t /0
//
//	char ch5[] = "bit";
//	// b i t \0
//	char ch6[] = { 'b' ,'i', 't' };
//	// b i t  我们只知道放了这三个字符，不知道t的后面是什么，要看到/0之后才停止打印
//
//	printf("%d\n", strlen(ch5));
//	printf("%d\n", strlen(ch6));//strlen函数也是找/0
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };
//	//初始化第一个值为0，剩下的默认为0
//
//	arr1[4] = 5;//[] 这个东西是下标引用操作符
//	printf("%d\n", arr1[4]);
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}


//%p - 按地址的格式打印
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i , &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;//数组名是数组首元素的地址
//	//这是一个整型指针
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *p);
//		p++;//这是因为数组在内存中是连续存放的所以才可以用p++来搞定
//	}
//	return 0;
//}