#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[30][30] = { 0 };
	int i = 0;
	int input = 0;
	printf("输入行数");
	scanf("%d", &input);
	//初始化数组
	for (i = 0; i < input; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	i = 0;
	int j = 0;
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < i - 1; j++)
		{
			arr[i][j + 1] = arr[i - 1][j] + arr[i - 1][j + 1];
		}
	}


	j = 0;
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


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
//						if ((b != 2 && a == 3) || (b == 2 && a != 3) == 1)
//						{
//							if ((b == 2 && e != 4) || (b != 2 && e == 4) == 1)
//							{
//								if ((c == 1 && d != 2) || (c != 1 && d == 2) == 1)
//								{
//									if ((c == 5 && d != 3) || (c != 5 && d == 3) == 1)
//									{
//										if ((e == 4 && a != 1) || (e != 4 && a == 1) == 1)
//										{
//											if (a * b * c * d * e == 120)
//											{
//												printf("%d %d %d %d %d", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (((a == 0) + (c == 1) + (d == 1) + (d == 0)) == 3)
//					{
//						if (a + b + c + d == 1)
//						{
//							printf("%d %d %d %d", a, b, c, d);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}