#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i += 1;
//		count += 1;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//

//int my_strlen(char* str)//���str����������ַ��ĵ�ַ
//{
//	char* start = str;//���str��������
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

//for (vp = &values[N_VALUES]; vp > &values[0])
//{
//	*--vp = 0;
//}
//
//for (vp = &values[N_VALUES - 1]; vp >= &value[0]; vp--)
//{
//	*vp = 0;
//}

//ָ�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = &arr[9] - &arr[0];
//	int m = &arr[0] - &arr[9];
//
//	printf("%d\n", n);
//	printf("%d\n", m);
//
//	return 0;
//}



//����ָ��

//int main()
//{
//	int a = 10;//a ��Ҫ���ڴ�������4���ֽڵĿռ��
//	//һ��ָ��
//	int* pa = &a;//0x0012ff40, pa��ָ�������������ŵ�ַ��Ҳ�����ڴ�����ռ䣬�����ĸ�����8���ֽ�
//	//����ָ��
//	int* * ppa = &pa;//ȡ��pa��������ĵ�ַ
//	int** * pppa = &ppa;//��Ϊһ������˵������һ��ָ�룬Ҫָ��ʲô�������Ǹ�������������ʲô���Ͱ���һ�����õ���
//
//	//paָ��Ķ�����һ����ַ��Ҳ��һ��ָ������Ҫ��int *����ʾ
//	//ppa ����ı�ʾppa��ָ�룬ppaָ���������int * �����Ի���������
//	//һ���Ĵ�������ָ�룬Ȼ����԰�һ����Ĩȥ��ָ����ָ��ı�����������˵��������ʲôǰ��
//	printf("%d\n", **ppa);
//	return 0;
//}

//int main()
//{
//	/*int* p;
//	int arr[10];
//	char ch[5];*/
//
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arrָ������
//	//���ָ�������
//	int *arr[] = { &a, &b, &b };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	char* arr2[5];
//	float* arr3[7];
//	return 0;
//}

//int main()
//{
//	char* arr[5];//[char* char* char* char* char*]
//	char** p = arr;//&arr[0] char**
//
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* ptr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", ptr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 
 
//1   struct Book
//
//{
//char name[20];
//int price;
//}��


/*struct Book

{
	char name[20];
	int price;
}b3, b4, b5;  *///ȫ�ֱ���
//struct Book b3;
//struct Book b4;


//3
//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;
//
//int main()
//{
//	struct Book b1;
//	struct Book b2;//�ֲ�����
//	Book b3;
//	return 0;
//}


//struct S
//{
//	char c;
//	char arr[20];
//	int *p
//}s1, s2;
//
//struct S s3;
//
//
//struct B
//{
//	int a;
//	struct S s;
//	double d;
//}sb1, sb2;
//
//
//int main()
//{
//	struct S s4 = { 'c', "zhangsan", 'NULL' };
//	struct B sb4 = { 100, {'q', "lisi", &a}, 3.14 };
//	return 0;
//}




//struct Book
//{
//	char name[20];
//	int price;
//};
//
//void print(struct Book *p)//struct Book ���൱��int float ֮��Ķ�����Ȼ�� p ��ָ���������͵�ָ�� ���������͵ĵ�ַ
//{
//	printf("%s %d\n", p->name, p->price);
//}
//int main()
//{
//	struct Book b = { "����C����",66 };
//	struct Book b1 = { .price = 80, .name = "hehe" };
//
//	printf("%s %d", b.name, b.price);
//	printf("%s %d", b1.name, b1.price);
//
//
//	print(&b1);
//	return 0;
//}


//�ṹ��Ĵ���
struct S
{
	int arr[100];
	int n;
};

//���������Ǵ��ݵĵ�ַ
void print1(struct S ss)//�����ǰ������ṹ��ı�������ȥ�ˣ�Ȼ��ͻ��е�󣬻�ѹեջ���ռ�
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ss.arr[i]);
	}
	printf("\n%d ", ss.n);
}

int main()
{
	struct S s = { {1,2,3,4,5}, 100 };
	print1(s);

	return 0;
}