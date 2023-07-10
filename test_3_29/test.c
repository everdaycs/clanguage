#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
struct S
{
	char name[20];
	int age;
	float score;
};
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5f };
//	FILE *pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	fwrite(&s, sizeof(struct S),1, pf);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	//char string[100];
//	//fread(string, sizeof(struct S), 1, pf);
//	//printf("%s %d %f", string);
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	ch = fgetc(pf);
//	printf("%c\n", ch);// b
//	ch = fgetc(pf);
//	printf("%c\n", ch);// c
//	ch = fgetc(pf);
//	printf("%c\n", ch);// d
//	ch = fgetc(pf);
//	printf("%c\n", ch);// e
//
//	// 我们可以用fseek函数来让文件指针到我们想要去的地方,
//	// 从当前位置向左偏移3个字节
//	//fseek(pf, -3, SEEK_CUR);
//	fseek(pf, 2, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);// c
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



// ftell
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);// a
//	ch = fgetc(pf);
//	printf("%c\n", ch);// b
//	ch = fgetc(pf);
//	printf("%c\n", ch);// c
//	ch = fgetc(pf);
//	printf("%c\n", ch);// d
//	ch = fgetc(pf);
//	printf("%c\n", ch);// e
//	
//	// 相当于起始位置的偏移量
//	printf("%d\n", ftell(pf));
//	
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


// 内存中的


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// fgetc函数返回值的分析:
// 读取失败返回EOF
// 1. 遇到文件末尾, 返回EOF, 同时设置一个状态, 遇到文件末尾了, 使用feof来检测这个状态, 验证这个状态
// 2. 遇到错误, 返回EOF, 同时设置一个状态, 遇到了错误, 使用ferror来检测这个状态



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("popen");
//		return 1;
//	}
//	char ch = 0;
//	// 读文件
//	while( (ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	if (ferror(pf))
//	{
//		puts("I/O error when reading");
//	}
//	else if (feof(pf))
//	{
//		puts("End of file reached successfully");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}


//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	// 实现一个代码, 拷贝一个文件
//	// 打开文件
//	// 打开被读文件
//	FILE* pfRead = fopen("test1.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("open file for read");
//		return 1;
//	}
//
//	FILE* pfWrite = fopen("test2.txt", "w");
//	if (pfWrite == NULL)
//	{
//		fclose(pfRead);
//		pfRead = NULL;
//		perror("opeon file for write");
//		return 1;
//	}
//	// 读文件
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	
//	return 0;
//}


// 一个数组中只有两个数字是出现两次, 其他所有数字都出现了一次, 找出这两个数字, 编程实现.


// 版本1
// 单身狗
// 只有一个数字出现一次, 其他数字都是成对出现的, 找出只出现一次的数字
// eg
// 1, 2, 3, 4, 5, 1, 2, 3, 4, 6

//void find_single_dog(int arr[], int sz)
//{
//	// 1. 先将所有的数字进行异或
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pos = 0;
//	// 2. 计算ret中的哪一位是1
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	// 3. 分组异或
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//			// 这两个数是不会被埋没掉的
//		}
//	}
//	printf("%d %d\n", x, y);
//}
//
//
//
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_single_dog(arr, sz);
//
//	return 0;
//}


int main()
{
	int ret = atoi("1234");
	printf("%d", ret);

	return 0;
}