#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//F5 - ��ʼ����
//ctrl + f5 ��ʼִ�У������ԣ�
//f9 ���öϵ�/ȡ���ϵ�
//f10 �����
//f11 �����  f11���뺯��
//f5 �� f9 ���ʹ�õ�
//�ô������е�����Ҫ�ĵط�������Ƕϵ�
//f5 ����ִ���߼�����һ���ϵ㣬���������ϵĶϵ�


//void test()
//{
//	printf("hehe\n");
//}
//int g_val = 100;
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", i);
//	}
//	for (j = 0; j < 10; j++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}

//int a[3][2]
//a �Ƕ�ά�����������
//����������Ԫ�صĵ�ַ
//a �ǵ�һ�еĵ�ַ

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 9; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	int i = 0;
//	while (*arr2 != '\0')
//	{		
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//��һ��������'\0'
//}

#include <assert.h>

//void my_strcpy(char* dest, const char* src)//���const�ļ���˵��src�ǲ��ܸ��ĵ�
//{
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//  //��src
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

int main()
{
	//int n = 10;
	//n = 20;

	//const ����*�����,*p���ܸı���,Ҳ����pָ�������,������ͨ��p���ı���,����p�ǿ��Ըı��,p����ָ�������ı���
	//const int* p = &n;
	//*p = 20;//err
	//p = &n;//ok


	//int* const p = &n;
	//p = &m;//err
	//*p = 20;//ok
	const int m = 0;
	int* p = &m;
	*p = 20;
	printf("%d", m);
	return 0;
}