#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//void reverse_arr(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	
//}
//
//int main()
//{
//	int sz = 0;
//	char arr[10000];
//	scanf("%s", &arr);
//	sz = strlen(arr);
//	reverse_arr(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//	
////}
//
//
//void reverse_arr(char arr[], int sz)
//{
//	char tmp = *arr;
//	*arr = *(arr + sz - 1);
//	*(arr + sz - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_arr(arr + 1, sz);
//	}
//	*(arr + sz - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", &arr);
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_arr(arr, sz);
//	printf("%s", arr);
//
//	return 0;
//}
//3 + 1 + 1
//4 + 2 + 1
//5 + 2 +  1 + 1
//6 + 3 + 1 + 1


int main()
{
	int x = 0;
	int sn = 0;
	scanf("%d", &x);
	while (x / 2)
	{
		sn = sn + x;//第一次和
		x = x / 2 + x % 2;//空瓶
		if (x == 3)
		{
			sn = sn + 2;
			break;
		}
	}
	
	printf("%d", sn);
	return 0;
}