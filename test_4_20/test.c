#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void test(int arr[])//������Դ��ݻ���
//{
//	arr[0] = 1;
//	arr[1] = 2;
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//void test(int* p1, int* p2)
//{
//	*p1 = 2;
//	*p2 = 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//}

//int a = 0;//����ȫ�ֱ���
//int b = 0;
//void test()
//{
//	a = 1;//ȫ�ֱ�������������ط�ʹ�ã������ں�������ı䣬��ôȫ�ֱ���Ҳ��ı�
//	a = 2;
//}
//
//int main()
//{
//	test();//����test��ֵ֮�󣬾��Ѿ����ı���
//	return 0;
//}
//#include <stdio.h>
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d =%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print_table(n);
//	//������������������ֺ����Ĺ���
//
//	return 0;
//}

//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	printf("%d", Fun(2));
//	return 0;
//}

//int my_strlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}


//void reverse_string(char* string)
//{
//	int i = 0;
//	int j = 0;
//	int length;
//	length = my_strlen(string);
//	char ch;
//	for (j = 0, i = length; j <= length / 2 - 1; j++, i--)
//	{
//		
//		ch = string[j];
//		string[j] = string[i - 1];
//		string[i - 1] = ch;
//	}
//}
//void reverse_string(char* string)
//{
//	char temp;
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	while (left < right)
//	{
//		temp = string[left];//*(str + left)
//		*(str + left) = *(str + right);
//		string[right] = temp;
//		left++;
//		right--;
//	}
//}


//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char char1[] = "abcdef";
//	printf("%s\n", char1);
//	reverse_string(char1);
//	printf("%s", char1);
//	return 0;
//}

//��10�������е����ֵ
//���ַ�

//int binary_search(int arr[], int x)
//{
//	int left = 0;
//	int sz = sizeof(arr);
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		{
//			if (x > arr[mid])
//			{
//				left = mid + 1;
//			}
//			if (x < arr[mid])
//			{
//				right = mid - 1;
//			}
//			if (x == arr[mid])
//			{
//				return 1;
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr);
//	int x;
//	scanf("%d", &x);
//	int ret = binary_search(arr, x);
//	if (ret == 1)
//	{
//		printf("�ҵ���");
//	}
//	else if (ret == -1)
//	{
//		printf("û�ҵ�");
//	}
//
//	return 0;
//}


//DigitSum(int n)
//{	
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	if (n <= 9)
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
 


//int main()
//{
//	/*int arr[8];
//	char ch[5];*/
//	//�����е�Ԫ�����ͣ����������������ʽ
//	//int n = 8;
//	//int arr[n];
//	//Ӧ���볣�����ʽ
//
//	//int a = 10;//��ʼ��
//	//int arr1[10] = { 1 ,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	//int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	//int arr3[] = { 1,2,3,4,5 };
//	////int arr2[5] = { 1,2,3,4,5 }; ���
//
//	char ch1[5] = { 'b', 'i', 't' };
//	char ch2[] = { 'b','i','t' };
//	char ch3[5] = "bit";// b i t /0 0
//	char ch4[] = "bit";// b i t /0
//
//	char ch5[] = "bit";
//	// b i t \0
//	char ch6[] = { 'b' ,'i', 't' };
//	// b i t  ����ֻ֪�������������ַ�����֪��t�ĺ�����ʲô��Ҫ����/0֮���ֹͣ��ӡ
//
//	printf("%d\n", strlen(ch5));
//	printf("%d\n", strlen(ch6));//strlen����Ҳ����/0
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };
//	//��ʼ����һ��ֵΪ0��ʣ�µ�Ĭ��Ϊ0
//
//	arr1[4] = 5;//[] ����������±����ò�����
//	printf("%d\n", arr1[4]);
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}


//%p - ����ַ�ĸ�ʽ��ӡ
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i , &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;//��������������Ԫ�صĵ�ַ
//	//����һ������ָ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *p);
//		p++;//������Ϊ�������ڴ�����������ŵ����Բſ�����p++���㶨
//	}
//	return 0;
//}