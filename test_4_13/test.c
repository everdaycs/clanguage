#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//
//	scanf("%d%d%d", &a, &b, &c);
//	int min = 0;
//	int mid = 0;
//	int max = 0;
//	if (a - b > 0 && a - c > 0)
//	{
//		max = a;
//		if (b - c > 0)
//		{
//			mid = b;
//			min = c;
//		}
//		else
//		{
//			mid = c;
//			min = b;
//		}
//	}
//	else if (b - a > 0 && b - c > 0)
//	{
//		max = b;
//		if (a - c > 0)
//		{
//			mid = a;
//			min = c;
//		}
//		else
//		{
//			mid = c;
//			min = a;
//		}
//	}
//	else if (c - a > 0 && c - b > 0)
//	{
//		max = c;
//		if (b - a > 0)
//		{
//			mid = b;
//			min = a;
//		}
//		else
//		{
//			mid = a;
//			min = b;
//		}
//	}
//	printf("max = %d, mid = %d, min = %d", max, mid, min);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);//�����û�λ�õ�˼·
//	if (a < b)
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a < c)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	printf("%d, %d, %d", a, b, c);
//}


//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		//�ж��Ƿ�Ϊ3�ı���
//		if (n % 3 == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i = i + 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int x = 0;
//	int i = 0;
//	int divide = 0;
//	if (m >= n)
//	{
//		x = n;
//	}
//	else
//	{
//		x = m;
//	}
//	for (i = 1; i <= x; i++)
//	{
//		if (((m % i) == 0) && ((n % i) == 0))
//		{
//			divide = i;
//		}
//	}
//	printf("%d", divide);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	max = m - n ? m : n;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("max %d", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

//շת�����
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;//18 24������һ��շת���֮��ͻ� ֱ�ӱ������18 % 24 = 18��
//		//Ȼ��n = 18, m = 24
//	}
//	printf("%d", n);
//
//	return 0;
//}

//��ӡ����
//int main()
//{
//	int y = 0;
//	int count = 0;
//
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;		
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//��õĴ���ģ�� 

//дһ�������ӡ100 ~ 200 ������
//����ֻ�ܱ�1������������
//int main()
//{
//	int num = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		//�ж�num �Ƿ�Ϊ����
//		//2->i - 1֮�������ȥ�Գ�
//		int j = 0;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j == num)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count = count + 1;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d \n", count);
//	return 0;
//}


//m = a * b
//a �� b ��һ��������һ������ <= ��ƽ��m ��
//16 = 2 * 8 = 4 * 4   4 <= 4
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}			
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d  ", count);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i = i + 2)//�Ż��㷨
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d  ", count);
//	return 0;
//}

//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծͻ�1�����ڹػ���������룻��������ȡ���ػ�
//�ػ�
//shutdown -s -t 60
//ȡ���ػ�
//shutdown -a
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system() - ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�������˧����ȡ���ػ�\n");
//	scanf("%s", input);//��Ϊ��������������һ����ַ
//	//if (input == "������")//�����ַ����Ƚ��ǲ���ʹ��==�ģ� Ӧ��ʹ��strcmp() string compare
//	if (strcmp(input, "�������˧") == 0)// string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�������˧����ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "�������˧") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//goto ֻ����һ��������Χ����ת�����ܿ纯��
//void test()
//{
//flag:
//	printf("test\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - �ַ����ĸ�ʽ����ӡ
//
//	return 0;
//}

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);

	return 0;
}