#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////调整数组使奇数全部都位于偶数前面。
//
//void change(int arr[], int sz)
//{
//	int left = 0;
//	int right = 1;
//	int i = 0;
//	while (right < sz - 1)
//	{
//		if (arr[left] % 2 == 0 && arr[right] % 2 != 0)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right++;
//		}
//		else if(arr[left] % 2 != 0 && arr[right] % 2 != 0)
//		{
//			left++;
//			right++;
//		}
//		else if(arr[])
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[n] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		int a = 0;
//		scanf("%d\n", &a);
//		arr[i] = a;
//	}
//	int sz = n;
//	change(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}



//void my_strcpy(char arr[], char arr1[], int sz)
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{ 
//		arr1[i] = arr[i];
//		i++;
//	}
//	i = i + 1;
//	arr[i] = '\0';
//}
//
//int main()
//{
//	char arr[] = "abcedf";
//	char arr1[] = { 0 };	
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	my_strcpy(arr, arr1, sz);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//
//	return 0;
//
//}


//my_strlen函数
int my_strlen(char arr[])
{
	int i = 0;
	while (*(arr+i) != '\0')
	{
		i++;
	}
	i = i + 1;
	return i;
}


int main()
{
	char arr = "abcdef";
	int ret = 0;
	ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}