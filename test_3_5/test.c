#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//a ^ 0 = a;
//a ^ a = 0;
//��ͬΪ 0 ���� Ϊ1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}


//ͳ�ƶ������е�1�ĸ���

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bit(n);
//
//	printf("%d", ret);
//	return 0;
//}

//ԭ���ڼ�����ж��ǲ�����ڵ�
//n = n&(n - 1)
//ֻҪ����һ��,n�Ķ����������ұߵ�һ��1�ͻ���ʧ

//int count_one_bit(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	return count;
//}





//int count_one_bit(unsigned int num)
//{
//	int  count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bit(n);
//
//	printf("%d", ret);
//
//	return 0;
//}

//��ȡһ���������������������е�ż��ά������λ,�ֱ��ӡ������������

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}
//


//����int (32λ)����m��n�Ķ����Ʊ����,�ж��ٸ�λ(bit)��ͬ

////int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//����^ ���
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	printf("%d", count);
//
//	return 0;
//}




//����ж�һ�����ǲ���2���ݴη�
//2 ���ݴη�����: ��������ֻ��1��1
//int main()
//{
//	int m = 0;
//	int count = 0;
//	scanf("%d", &m);
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	if (count == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}


//�ϲ���������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[50];
//	int arr2[50];
//	int arr3[50];
//	int i = 0;
//	//����arr1
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", arr1[i]);
//	}
//	//arr2
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr2[i]);
//	}
//	//�ϲ�arr1��arr2��arr3������
//
//	int j = 0;
//	i = 0;
//	int k = 0;
//	while ((i < m) && (j < n))
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//		if (arr2[j] < arr1[i])
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	if (i == m)
//	{
//		for (; j < n; j++)
//		{
//			arr3[k] = arr2[j];
//			k++;
//		}
//	}
//	if (j == n)
//	{
//		for (; i < m; i++)
//		{
//			arr3[k] = arr1[i];
//			k++;
//		}
//	}
//	
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d", arr3[i]);
//	}
//	return 0;
//}



////С������̨��
//
//int Fib(int n)
//{
//	if (n = 1)
//	{
//		return 1;
//	}
//	if (n = 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}



//����ˮ�ɻ���
//��� 5λ���е����� Lily Number
//12345
//12345 / 10 = 1234  12345%10 = 5
//12345/100 = 123  12345 % 100 = 45

//ͷ�ļ�
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		//�ж�i�Ƿ���liliy number
//		for (j = 1; j <= 4; j++)
//		{
//			int n = (int)pow(10, j);
//			sum += (i / n) * (i % n);
//		}
//		if (sum == i)
//		{
//			printf("%d ֥ʿlilynumber\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		//�ж�
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("�ǵȱ�������");
//			}
//			else if((a == b && b != c) || (a == c && b != a) || (b == c && a != b))
//			{
//				printf("����������");
//			}
//			else
//			{
//				printf("��ͨ������");
//			}
//		}
//		else
//		{
//			printf("����������");
//		}
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}