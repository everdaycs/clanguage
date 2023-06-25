#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//void change_arr(char arr[], int n)
//{
//	n = n - 1;
//	int left = 0;
//	int right = n;
//	while (left < right)
//	{
//		char tmp;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void print_arr(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//
//int main()
//{
//	char arr[50] = { 0 };
//	scanf("%s", &arr);
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	scanf("%d", &n);
//	change_arr(arr, n);
//	print_arr(arr, sz);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50][50] = { 0 };
//	int i;
//	while (n < arr[i][0])
//	{
//		i++;
//	}
//	int j = 0;
//	while (n < arr[i][j])
//	{
//		j++;
//	}
//	printf("%d %d", i , j);
//	return 0;
//}



void reverse_arr(char arr[], int n, int m)
{
	int left = n;
	int right = m -1;
	while (left < right)
	{
		char tmp;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}



int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = "defabc";
	int ret = 0;
	int i = 0;
	int sz = 0;
	sz = sizeof(arr1[0]) / sizeof(arr1);
	for (i = 0; i < sz - 1; i++)
	{
		reverse_arr(arr1, 0, i);
		reverse_arr(arr1, i, sz -1);
		reverse_arr(arr1, 0, sz - 1);
		int ret = 1;
		ret = strcmp(arr1, arr2);
		if (ret == 0)
		{
			break;
		}
	}
	if (ret == 0)
	{
		printf("godd\n");
	}
	else
	{
		printf("fsd\n");
	}
	return 0;
}