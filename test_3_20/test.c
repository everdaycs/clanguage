#define _CRT_SECURE_NO_WARINGS 1

#include <stdio.h>

//union Un
//{
//	char c;// 1
//	int i;// 4
//};
//
//int main()
//{
//	union Un u;
//	u.i = 1;
//	if (u.c == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


// 联合体也是存在对齐的
//union Un
//{
//	char arr[5];
//	int n;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


union Un
{
	short s[7];
	int n;
};

int main()
{
	printf("%d\n", sizeof(union Un));

	return 0;
}