#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//���������
//ret_type fun_name(paral, )
//{
//	statememt; //������
//}

//int get_max(int x, int y)//��������Ҫƥ����ϣ���������ʲô�����Ǿ���ʲô
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//����z �������ֵ
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//
//	printf("%d\n", max);
//	return 0;
//}

//�����������͵ĵط�д��void :��ʾ��������������κ�ֵ Ҳ����Ҫ����
//�β���ʵ�ε�һ����ʱ�������ı��ββ��ܸı�ʵ��
//void swap1(int x, int y)//��ֵ����
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)//��ַ0����  �βκ�ʵ��֮��������ϵ��
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ���������������������ͱ�����ֵ
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	swap1(a, b);
//	printf("������a = %d, b = %d\n", a, b);
//	swap2(&a, &b);
//	printf("������a = %d, b = %d\n", a, b);
//	return 0;
//}

//�������Ĺ����㹻��һ�������˶�������
//int is_prime(int x)
//{
//	int i = 2;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//100~200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//һ�����������д�������ͣ� Ĭ�Ϸ���int����
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//                    ����һ������
// int binary_search(int* a, int k, int sz)
// ���ﲻ����������һ������
// 
//int binary_search(int arr1[], int n, int sz)
//{
//	int left = 0;
//	int right = sz -1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//
//		//û�д���Ϊʲô��Ҫ���أ���Ϊ��Ҫ�õ����������Ԫ��
//		if (n > arr1[mid])
//		{
//			left = mid + 1;
//		}
//		if (n < arr1[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//	
//}

//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz -1;
//	while (left <= right)
//		{
//			int mid = (right + left) / 2;
//			if (k > arr[mid])
//			{
//				left = mid + 1;dw                                                           
//			}
//			if (k < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//			}
//		}
//	
//		return -1;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//�ҵ��˾ͷ����ҵ���λ���±�
//	//�Ҳ����ͷ���-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
//	//��������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr1, key);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ� �±��ǡ�%d\n", ret);
//	}
//  
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//�����ǲ���Ƕ�׶���ģ�
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test()
//{
//	tes
//}


//��ʽ���ʣ���һ�������ķ���ֵ�������һ�������Ĳ���
//int main()
//{
//
//	/*int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));*/
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//��ӡ����Ļ�Ϸ��ĸ���
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��
//	int Add(int, int);
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
#include "sub.h"

//���뾲̬��
#pragma comment(lib, "sub.lib")
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);

	int c = sub(a, b);

	printf("%d\n", c);

	return 0;
}