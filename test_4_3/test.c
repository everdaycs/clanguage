#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// ���ʵ��
#define MAX(x,y) ((x)>(y)?(x):(y))

// ������ʵ��
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	// ����
//
//	scanf("%d %d", &a, &b);
//
//	// �ϴ�ֵ
//	int m1 = Max(a, b);
//	printf("%d\n", m1);
//
//	int m2 = MAX(a, b);
//	printf("%d\n", m2);
//	return 0;
//}


// ���������������Ĳ�������
// ����˵ֱ�Ӳ�������int float

//#define MALLOC(num,type)\
//(type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//
//	}
//
//	int* p2 = MALLOC(10, int);
//	if (p == NULL)
//	{
//
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//#define M 100
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}


//int main()
//{
//#if 1== 3
//	printf("hehe\n");
//#elif 1== 2
//	printf("hehe\n");
//
//#endif
//	return 0;
//
//}



//int main()
//{
//#if defined(MAX);
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#include <limits.h>
//#include <assert.h>
//#include <ctype.h>
//enum State
//{
//	VALID,
//	INVALID
//};
//
//// State ��ȫ�ֱ���
//enum State s = INVALID; //�Ƿ���״̬
//
//
//int my_atoi(const char* str)
//{
//	int flag = 1;
//
//	// ��ָ��
//	assert(str);
//	// ���ַ���
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	// + - 
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	} 
//
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return ret;
//			}
//		}
//		else
//		{
//			return ret;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		s = VALID;
//		return (int)ret;
//	}
//}
//
//
//int main()
//{
//	int ret = my_atoi("-21312312343254526544552452345423354");
//
//	if (s == INVALID)
//	{
//		printf("�Ƿ�ת��%d", ret);
//	}
//	else
//	{
//		printf("�Ϸ�ת��%d", ret);
//	}
//	return 0;
//}


//#include <stddef.h>
//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//
//#define OFFSETOF(type, name)    (size_t)&(((type*)0)->name)
//
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	return 0;
//}


// дһ����, ���Խ�һ������������λ��ż��λ����λ��
#define SWAP_BIT(x) (x = ((x & 0x55555555) << 1) + ((x&0xaaaaaaaa) >> 1))

int main()
{
	int a = 5;
	SWAP_BIT(a);
	printf("%d\n", a);

	return 0;
}