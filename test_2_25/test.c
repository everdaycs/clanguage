#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	//ָ������
//	char* arr[10];
//	//����ָ��
//	int arr2[5] = { 0 };
//	int(*p)[5] = &arr2;
//	//����ָ��
//	int(*pf)(const char*) = &my_strlen;//pf��һ��ָ�����ĺ���ָ�����
//	(*pf)("abcedf");
//	return 0;
//}

//ָ����ָ�������ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//����ָ������
//	int (*pfArr[4])(int, int) = { Add, Sub };
//	int (*(*ppfArr)[4])(int, int);
//	ppfArr = &pfArr;//ppfArr ��һ��ָ����ָ�������ָ��
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*pa[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	if (input >= 1 && input <= 4)
//	{
//		int x = 0;
//		int y = 0;
//		scanf("%d %d", &x, &y);
//		ret = pa[input](x, y);	
//		printf("%d", ret);
//	}
//	else
//	{
//		printf("����������");
//	}
//
//	return 0;
//}
//
//
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//9 8 7 6 5 4 3 2 1 ��ѭ��, ��һ������Ҫ9��ѭ��,���ܵ�����λ����,ÿһ��ѭ����������һ�������������ó��ֵĵط�
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����
//	//ʹ��ð��������㷨, ������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void qsort(void* base,//ָ���˴���������ĵ�һ��Ԫ��
//	size_t num,//�������Ԫ�ظ���
//	size_t size,//ÿ��Ԫ�صĴ�С,��λ���ֽ�,size
//	int (*cmp)(const void*, const void*)//ָ��һ������,����������ԱȽ�����Ԫ�صĴ�С
//);

//qsort������ʹ����,�ṩ�������
#include <stdlib.h>
#include <string.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;//��Ҫ����ǰ�������
//	//ָ��Ҫ�Ƚϵ�����Ԫ��  
//}
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//test1()
//{
//	int arr[] = { 3, 4, 2 ,1,5,8,7,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��qsort������������,�����Ҫ�ṩһ���ȽϺ���,����ȽϺ����ܹ��Ƚ����������Ĵ�С
//	qsort(arr, sz, sizeof(arr[0]),cmp_int);
//	print_arr(arr, sz);
//}
//
////����qsort ����ṹ����
//
//
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 25}, {"wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s), cmp_stu_by_age);
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	void* p = &a;//void * - �޾������͵�ָ��,���������Խ����κ����͵ĵ�ַ
//	*p;//err ,  void*��ָ�벻���ܽ����ò�����
//	//p++;
//	*(int*)p;//����ת����������ָ��
//	return 0;
//}

//ϣ�����bubble_sort�������������������͵�����
//��Ϊ�޷��̶��ж��Ժ������ʲô����

//һ���ֽ�һ���ֽڵĽ���
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void * base, size_t num, size_t width, int (*cmp)(const void*p1, const void*p2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;//ֻ�ܷ���ѭ����ͷ
		for (j = 0; j < num - 1; j++)
		{
			//�������ڵ�Ԫ�رȽ�
			//arr[j] arr[j+1]
			//char һ���ֽ�
			if (cmp((char*)base +j *width, (char*)base + (j+1)*width) > 0)
			{
				//����
				flag = 0;
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;//��Ҫ����ǰ�������
	//ָ��Ҫ�Ƚϵ�����Ԫ��  
}

void test3()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

int main()
{
	test3();
	return 0;
}