#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//����һ����������, ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��
//����ż��λ������ĺ�벿��
//void move_arr(int* arr, int num)
//{
//	int* p = arr;
//	int* x = NULL;
//	x = p + num;
//	while (x == p)
//	{
//		if (*p % 2 == 0)
//		{
//			while(*x % 2 != 0)
//			{
//				x--;
//				int tmp = 0;
//				tmp = *x;
//				*x = *p;
//				*p = tmp;
//			}
//		}
//		p++;
//	}
//}
//
//void move_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	// ����
//	int num = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// ����
//	move_arr(arr, num);
//	// ���
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//
//	printf("%d %d", a + b, c);
//
//	return 0;
//}


// ��32λ���ģʽ�������ϱ���b����

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}

// ��˴洢ģʽ: ��λ�ֽڴ���ڵ�λ��ַ
// С�˴洢ģʽ: ��λ�ֽڴ���ڵ�λ��ַ


// 5λ�˶�Ա�μ���10����̨����, ����������Ԥ��������
// Aѡ��˵: B�ڶ�, �ҵ��� // (b==2) + (a==3) == 1
// Bѡ��˵: �ҵڶ�, E����
// Cѡ��˵: �ҵ�һ, D�ڶ�
// Dѡ��˵: C���, �ҵ���
// Eѡ��˵: �ҵ���, A��һ
// ����������, ÿλѡ�ֶ�˵����һ��, ����ȷ������������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//							{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
//							}
//								
//							}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



// ����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ��е�һ��.
// ��A˵: ������
// ��B˵: ��C
// ��C˵: ��D
// ��D˵: C�ں�˵
// ��֪3����˵���滰, 1����˵���Ǽٻ�.
// �����������Щ��Ϣ, дһ��������ȷ������˭������


//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

// ����Ļ�ϴ�ӡ�������

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int line = 10;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//
//		}
//	}
//	int x = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (x = line - i - 1; x > 0; x--)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <=i; j++)
//		{
//			
//			printf("%3d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 32λϵͳ��ָ��Ĵ�С��4���ֽ�
// 64λϵͳ��ָ��Ĵ�С��8���ֽ�

// malloc ������������
// free ���������ͷ�

// ����ָ��
// 1. ����ָ����ָ�������ָ��
// 2. ����ָ��Ĳ���������Ĵ�С
// 3. ����ָ������������������
// 4. ����ָ��Ľ����������鱾��


// ָ������
// 1. ָ������������, �����д�ŵ���ָ��
// 2. ָ������Ĳ�����ָ��Ĵ�С
// 3. ָ�������������ָ��
// 4. ָ������Ľ�������ָ��ָ����ڴ�



// ʵ��һ������, ���������ַ����е�k���ַ�
// ABCDE 2
// CDEAB

//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k = k % len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}

//void reverse(char* left, char* right)
//{
//	char tmp;
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}




// ��һ�����־���, �����ÿ�д������ǵ�����, ������ϵ����ǵ�����, ���д�����������ľ����в���ĳ�������Ƿ����
// Ҫ��: ʱ�临�Ӷ�С��O(n)

// 1 2 3 
// 4 5 6
// 7 8 9

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//		printf("�ҵ����±��� %d %d\n", x, y);
//	else
//		printf("�Ҳ���\n");
//
//	return 0;
//}

//int is_left_move(int arr1[], int arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (0 == strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

int is_left_move(int arr1[], int arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, len1);
	if (strstr(arr1, arr2))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdeab";
	int ret = is_left_move(arr1, arr2);
	if (1 == ret)
	{
		printf("yes");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}