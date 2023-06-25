#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

//int main()
//{
//	int i = -20;
//	unsigned int j = -10;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11111100 - 补码
//	//
//
//	printf("%d\n", i + j);
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//虽然输出是-1但是i是unsignedint所以条件恒成立
//	{
//		printf("%d\n", i);
//		Sleep(1000);//单位是毫秒
//	}
//
//	return 0;
//}

//char 类型的取值范围是-128~127
//char 可以有正负
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 -4 -5 -6...
//	//char -1 -2 -3 ....-128  127 126...    3 2 1 0 -1 -2 -3....存1000个值
//	printf("%d", strlen(a));//128 + 127 个数字
//	//strlen 求字符串长度,找到是\0, \0的ASCII码值是0
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	// 0 00000000 000000000000000000001001
//	//E = 1 - 127 = -126
//	float* pFloat = (float*)&n;
//
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);//整型的存储形式和float不一样
//	//%f 只会打印后面六位小数
//	*pFloat = 9.0;
//	printf("num的值为:%d\n", n);
//	printf("*pFloat的值为: %f\n", *pFloat);
//
//	return 0;
//}

//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//01000000101100000000000000000000
//	//40b0000
//
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	const char* pc = &ch;//pc 是字符指针
//
//	char* p = "abcdef";
//	*p = 'w';
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	*p = 'w';
//	printf("%s", arr);
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//int main()
//{
//	char* arr[] = { "abcdef", "hehe", "qwer"};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	//arr是一个存放整型指针的数组
	int* arr[] = { arr1, arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d", *(arr[i]+j)//arr[i] 是说明找到了某个arr1或者爱arr2 然后*(arr1+j) 就是j
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}