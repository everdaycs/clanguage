#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ������ - ������ - ��һ�ִ��ָ�������
//����ָ�� - ��ָ�� - ��һ��ָ�������ָ�� - ��ŵ�������ĵ�ַ

//int main()
//{
//	//ָ������
//	char *arr[4];
//	//����ָ��
//	int arr[5];
//	int(*pa)[5] = &arr;
//	return 0;
//}


//int arr[10]
//arr �� &arr��ʲô����?

//���������󲿷���������Ԫ�صĵ�ַ
//������2������
//1. sizeof(������) - sizeof�ڲ�������һ����������ʱ��,��������ʾ������������,����õ�����������ܴ�С
//2. &arr - �������������ʾ��������,ȡ��������������ĵ�ַ,�ӵ�ֵַ�ĽǶ�������������Ԫ�صĵ�ַ��һ����,�������岻һ��
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int *
//	printf("%p\n", arr + 1);//4
//
//	printf("%p\n", &arr[0]);//int *
//	printf("%p\n", &arr[0] + 1);//4
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr + 1);
//
//	int(*P)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = arr;
//	
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i)
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6,3,4,5,6,7 };
//	//��ά�����������,Ҳ��ʾ��Ԫ�صĵ�ַ
//	//��ά�������Ԫ�� ��һ�еĵ�ַ
//	print(arr, 3, 5);
//	return 0;
//}
//
//int arr[5];
//int* parr1[10];
//int(*parr2)[10];
//int(*parr3[10])[5];//parr3������,�����ŵ�������ָ��


//һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//
//	return 0;
//}

//����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(*p);
//
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
////&�������õ����Ǻ����ĵ�ַ
//
//
//int main()
//{
//	//printf("%p", &Add);
//	//printf("%p", Add);
//	int (* pf)(int, int) = Add;//�����ĵ�ַҪ������,�͵÷���[����ָ�����]��
//	//��������     ����
//
//	//int out = (*pf)(3, 5);
//	int out = pf(3, 5);
//	//�����ĺ��������ǵ�ַ,���Կ���ֱ���ú�������ָ�������ú���.
//	printf("%d", out);
//	return 0;
//}

//char* test(int c, float* pf)
//{
//
//}
//
//int main()
//{
//	char* (*pa)(int, float*) = &test;
//	return 0;
//}


//typedef int* ptr_t;
//typedef void(*pf_t)(int);//��void(*)(int)���͵����������������pf_t
////����1
//int main()
//{
//	//1. ��0 ǿ������ת��Ϊvoid (*)() ���͵ĺ���ָ��
//	//2. �����ζ��0��ַ������һ������,û�в���,����������void
//	//3. ����0��ַ�����������
//	(*(void (*)())0)();
//	//(int) 0 ǿ��ָ��ת��
//
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	//�����Ĵ�����һ������������
//	//������������signal
//	//�ĺ���ָ��ĺ���������int,�ڶ�����void(*)(int)���͵�ָ��
//	//
//	//signal�����ķ�������Ҳ��һ������ָ��
//	//�ú���ָ��ָ��ĺ�����ʳ��int,����������void
//	return 0;
//}

//����ָ������
//�����ÿ��Ԫ����һ������ָ��

//ָ������
//����ָ�������
//int *arr[4];

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
	}
	int main()
	{

	int input = 0;
	do
	{
		meun();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;

		}
	}
	//��ź���ָ������� - ����ָ������
	int (*pf[4])(int, int) = { Add, Sub, Mul, Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pf[i](8, 4);
		printf("%d\n", ret);
	}

	return 0;
}