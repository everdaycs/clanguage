#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�����ָ��
//���� - �ܹ����һ����ͬ���͵�Ԫ��,����Ĵ�Сȡ���������Ԫ�ظ�����Ԫ������
//ָ�� - ��ַ - ָ�����, ��С��4/8�ֽ�
//����������,ָ����ָ��
//��������������Ԫ�صĵ�ַ,�����ַ�Ϳ��Դ����ָ�������
//���ǾͿ���ʹ��ָ������������
//
//������
//�󲿷��������������������Ԫ�صĵ�ַ
//��������������
//sizeof(������) - ��������ʾ��������,���������������Ĵ�С
//&������ - ��������־��������,ȡ����������ĵ�ַ
//int main()     
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof( * a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	//&a ȡ����������ĵ�ַ,��������ĵ�ַҲ�ǵ�ַ,�ǵ�ַ��С����4/8���ֽ�
//	//int (*pa)[4] = &a;
//	//���� int(*)[]
//	printf("%d\n", sizeof(*&a));
//	//sizeof(a) = 16
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));//ȡ����Ԫ�صĵ�ַ 4/8
//	printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//
//}


//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	
//	//strlen���ܵĶ��ǵ�ַ
//	printf("%d\n", strlen(arr));//���ֵ,��Ϊ��֪��\0��λ��
//	printf("%d\n", strlen(arr + 0));//
//	printf("%d\n", strlen(*arr));//��97������ַ, ���γɷǷ�����
//	printf("%d\n", strlen(arr[1]));//����γɷǷ�����, ������
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));


	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));//*arr����Ԫ��,���������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));//����һ������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));


//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//
//
//	//printf("%d\n", sizeof(arr));//7 ֻ��������Ĵ�С ��\0
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));//*arr - ��������Ԫ�� 1
//	////int sz = sizeof(arr) / sizeof(*arr);
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));//4 ����ĵ�ַ
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0/))
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	/*printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));*/
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//p + 1��b�ĵ�ַ 5
//	printf("%d\n", strlen(*p));//
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));//a[0]���ǵ�������sizeof�ڲ�,a[0]��ʾ����Ԫ�صĵ�ַ,����һ�е�һ��Ԫ�صĵ�ַ - &a[0][0]
//	//a[0] + 1�ǵ�һ�еڶ���Ԫ�صĵ�ַ &a[0][1]
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	//a ��Ϊ��ά��������������ǵ�������sizeof �ڲ�,���Ա�ʾ��Ԫ�صĵ�ַ
//	//��ά�������Ԫ���ǵ�һ��,�����a���ǵ�һ�еĵ�ַ--- int (*)[4]
//	//a + 1��������һ��, ָ���˵ڶ���
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	//&a[0]�ǵ�һ�еĵ�ַ
//	//&a[0] + 1�ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));//���ǵ�һ��
//	printf("%d\n", sizeof(a[3]));//ÿһ�ж���16���ֽ�
//	return 0;
//}

//int main()
//{
//	int a[3] = { 0 };
//
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", a[0] + 1);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

struct Test
{
	int Num;
	char* pcName;
	short sDara;
	char cha[2];
	short sBa[4];
} *p;


int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	return 0;
}