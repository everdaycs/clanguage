#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// ����һ��ѧ������
//struct Stu
//{
//	char name[20];
//	int age;
//	float weight;
//} s4, s5, s6;// ȫ�ֱ���

//int main()
//{
//	struct Stu s1; // �ֲ�����
//	struct Stu s2;
//	struct Stu s3;
//
//	return 0;
//}


// �����ṹ������
//struct 
//{
//	char c;
//	int a;
//	double d;
//}s1;
//
//struct
//{
//	char c;
//	int a;
//	double d;
//}*ps;
//
//
//
//int main()
//{
//	// s1 = *ps; error
//	return 0;
//}


// ���ݽṹ
// ���������������ڴ��еĴ洢�ṹ

//struct Node
//{
//	int data;
//	struct Node n;
//};

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	struct Node n1;
//	struct Node n2;
//	n1.next = &n2;
//
//	return 0;
//}


//typedef struct
//{
//	int data;
//	char c;
//} S;
//
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


// �ṹ��ĳ�ʼ��
//struct S
//{
//	int a;
//	char c;
//}s1;
//
//
//struct B
//{
//	float f;
//	struct S s;
//};
//int main()
//{
//	//int arr[10] = {};
//	struct S s2 = { 100, 'q' };
//	struct S s3 = { .c = 'r', .a = 2000 };
//	struct B sb = { 3.14, {200, 'w'} };
//	printf("%f, %d, %c\n", sb.f, sb.s.a, sb.s.c);
//	return 0;
//}

//struct S
//{
//	char name[1000];
//	int* ptr;
//};
//
//int main()
//{
//	int a = 100;
//	struct S s = { "abcdef", &a };
//
//	return 0;
//}


//struct S1
//{
//	int a;
//	char c;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S3
//{
//	char c1;
//	int a;
//	char c2;
//	char c3;
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

// 1.�ṹ��ĵ�һ����Ա��Զ������0ƫ�ƴ�
// 2.�ӵڶ�����Ա��ʼ, �Ժ��ÿ����Ա��Ҫ���뵽ĳ������������������
// ���������: ��Ա�����С��Ĭ�϶������Ľ�Сֵ
// ��ע:
// VS ������, Ĭ�϶�������8
// gcc ������, û��Ĭ�϶�����ʱ, ���������ǳ�Ա����Ĵ�С
// 3. ����Աȫ�����ȥ��
// �ṹ����ܴ�С������, ���г�Ա�Ķ�����������������������, �������, ���˷ѿռ��˷�
// 4. ���Ƕ���˽ṹ��, Ƕ�׵Ľṹ���ԱҪ���뵽�����Ա��������������������
// �����ṹ��Ĵ�С, ����������������������. ������������Ƕ�׵Ľṹ���Ա�еĶ�����


// Ϊʲô�����ڴ����
// 1. ƽ̨ԭ��:
// �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵ�; ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵�����, �����׳�Ӳ���쳣
// 2. ����ԭ��:
// ���ݽṹ(������ջ) Ӧ�þ����ܵ�����Ȼ�߽��϶���
// ԭ������, δ������δ������ڴ�, ��������Ҫ�����ڴ����; ��������ڴ���ʽ���Ҫһ�η���

//#include <stddef.h>
//struct S
//{
//	char c;
//	int a;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, a));
//	return 0;
//}


//struct S3
//{
//	double c1;
//	char c2;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//#pragma pack(1)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

// ʲô��λ��
// λ�ε������ͽṹ�����Ƶ�, ��������ͬ:
// 1. λ�εĳ�Ա������ int, unsigned . �� signed int
// 2. λ�εĳ�Ա�������һ��ð�ź�һ������

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//
//int main()
//{
//	struct A sa = { 0 };
//
//	printf("%d\n", sizeof(sa));
//
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

// λ�εĿ�ƽ̨����
// 1. intλ�α������з��Ż����޷����ǲ�ȷ����
// 2. λ�������Ϊ����Ŀ����ȷ��
// 3. λ���еĳ�Ա���ڴ��д������ҷ���, ���Ǵ�����������׼��δ����


enum Sex
{
	// ö�ٵĿ���ȡֵ
	MALE,
	FEMALE,
	SECRET
};


int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}