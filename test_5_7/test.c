#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 3 / 5;//��������ߺ��ұ߶���������������������
//	//float a = 6.0 / 5.0;
//
//	//��Ҫ�õ�С�������ŵ����˱�����һ����С��
//	float a = 6.0 / 5.0;
//	printf("%f\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -1;//int ���ĸ��ֽ� ��32λ 00000000000000000000000000000010
//	int b = a << 1; // 00000000000000000000000000000100  ���油��
//	//��ǰ�����Ʋ���������������
//	int c = a >> 1; // ��a �Ķ�����λ�����ƶ�һλ
//	//��a�Ķ����������ƶ�һλ
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//^ ��λ�������ƣ����
//	//��Ӧ�Ķ�����λ�������
//	//������ͬΪ0�� ����Ϊ1
//
//	int f = a ^ b;
//	// | - ���������ƣ�λ��
//	int d = a | b;
//	//& - ���������ƣ�λ��
//	int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001    c;
//	//00000000000000000000000000000111    d;
//	//00000000000000000000000000000110    f;
//	printf("%d\n", f);
//	printf("%d\n", d);
//	return 0;
//}


//��ʹ�õ�������������a b ��ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d \n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d %d \n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 6;
//	printf("%d %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;//a ^ b ^ b//a ^ 0����a a ^ a ���� 0
//	a = a ^ b;
//	printf("%d %d \n", a, b);
//	return 0;
//}

//int count(int a)
//{
//	int count = 0;
//	while (a != 0)
//	{
//		if ((a & 1) == 1)
//		{
//			count = count + 1;
//		}
//		a = a >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//
//	int ret = count(3);
//	//00000000000000000000000000001101
//	//
//	printf("%d", ret);
//	return 0;
//
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;
//	a += 100;//���ϸ�ֵ
//	a = a >> 3;
//	a >>= 3;
//	return 0;
//}

//=  -- ��ֵ
//== -- �ж����

//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);
//	//flagΪ�棬��ӡ
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//flagΪ��Ӧ�ô�ӡhaha
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//��Ŀ������ ֻ��һ����������

//int main()
//{
//	//int a = 0;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//sizeof Ҳ���Խ��м��������С
//	//printf("%d\n", sizeof(int[10]));//40 - int [10]��arr���������
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	////���ڱ���������sizeof��ʱ�򣬿��Բ�д����
//	//printf("%d\n", sizeof a);
//	////sizeof��һ�������������Ǻ���
//	
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//2
//	//s�������ֽ�����ǰ���ٺõģ�������Ϊa��������£�s��4�����Խض�
//	printf("%d\n", s);//5
//	//short ռ�����ֽ�
//	return 0;
//}


//~��ȫ���Ķ�����λȡ��
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 ԭ��
//	//11111111111111111111111111111110 ����  ����λ����
//	//11111111111111111111111111111111 ����
//
//	int b = ~a;//��������λ
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//
//}

//int main()
//{
//	int a = 13;
//	//��a�Ķ������еĵ���λ���һ
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//	a = a & ~(1 << 4);
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++�� ��ʹ�ã���++
//	int b = ++a//ǰ��++ ��++����ʹ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	int *pa = &a;//paʱ������ŵ�ַ�� - pa����һ��ָ�����
//	*pa = 20;//* - �����ò����� - ��ӷ��ʲ�����
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	//ǿ������ת��
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n  c = %d\n d = %d\n", a, b, c, d);
//	//Ϊʲô��1234
//	//��һ��0���֣��Ͳ�������������
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 1;
//	}
//	else b = -1;
//
//	b = (a > 5 ? 1 : -1);
//	//    ���ʽ1
//	return 0;
//}


int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	
	//���ű��ʽ - Ҫ�����������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
    //       c = 10

	printf("%d\n", d);
	return 0;
}

//if (a = b + 1, c = a /2, d > 0);
//���d����0 �Ż��ȥ
//a = get_val();
//count_val(a);
//while (a > 0)
//{
//	a = get_val();
//	count_val(a);
//}
//
//
//while (a = get_val(), count_val, a > 0)
//{
//
//}
