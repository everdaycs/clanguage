#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//二进制中1的个数
//int main()
//{
//    int i = 0;
//    int count = 0;
//    scanf("%d", &i);
//    int j = 0;
//    for (j = 0; j < 32; j++)
//    {
//        if ((i >> j  & 1))
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

两个整数二进制位不同个数
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int c = x ^ y;
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((c >> i) & 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) != ((y >> i) & 1))
//		{
//			count++;
//		}
//	
//	}
//	printf("%d", count);
//	return 0;
//}



//打印整数二进制的奇数位和偶数位
int main()
{
	int x = 0;
	scanf("%d", &x);
	int i = 0;
	int m = 0;
	int n = 0;
	int odds[16] = { 0 };
	int evens[16] = { 0 };
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			evens[m] = (x >> i) & 1;
			m++;
		}
		else
		{
			odds[n] = (x >> i) & 1;
			n++;
		}
	}
	for (m = 15; m >= 0; m--)
	{
		printf("%d", evens[m]);
	}
	printf("\n");
	for (n = 15; n >= 0; n--)
	{
		printf("%d", odds[n]);
	}

	return 0;
}