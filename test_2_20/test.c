#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

//int main()
//{
//	int i = -20;
//	unsigned int j = -10;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11111100 - ����
//	//
//
//	printf("%d\n", i + j);
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//��Ȼ�����-1����i��unsignedint�������������
//	{
//		printf("%d\n", i);
//		Sleep(1000);//��λ�Ǻ���
//	}
//
//	return 0;
//}

//char ���͵�ȡֵ��Χ��-128~127
//char ����������
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 -4 -5 -6...
//	//char -1 -2 -3 ....-128  127 126...    3 2 1 0 -1 -2 -3....��1000��ֵ
//	printf("%d", strlen(a));//128 + 127 ������
//	//strlen ���ַ�������,�ҵ���\0, \0��ASCII��ֵ��0
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
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);//���͵Ĵ洢��ʽ��float��һ��
//	//%f ֻ���ӡ������λС��
//	*pFloat = 9.0;
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ: %f\n", *pFloat);
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
//	const char* pc = &ch;//pc ���ַ�ָ��
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
	//arr��һ���������ָ�������
	int* arr[] = { arr1, arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d", *(arr[i]+j)//arr[i] ��˵���ҵ���ĳ��arr1���߰�arr2 Ȼ��*(arr1+j) ����j
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}