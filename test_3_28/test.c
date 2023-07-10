#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


// c++方向 初阶的数据结构, c++, 高阶的数据结构, Linux系统变成, 网络编程, MySQL, 实战项目
// java/测开 c, javaSE, Java初阶DS, 进阶的DS, javaEE初阶(操作系统, 网络, 网络编程), 数据库

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


// 文件的操作:
// 1. 文件的打开
// 2. 文件的(读/写)
// 3. 文件的关闭


//int main()
//{
//	// 打开文件
//	FILE * pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	// 写文件
//	
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	// 把26个字母写到文件中去
//	int i = 0;
//	for (i = 0; i < 25; i++)
//	{
//		fputc('A' + i, pf);
//	}
//	// a + 1 ==  b
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//
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
//	// 读文件
//	int i = 0;
//	int ch = 0;
//	for (i = 0; i < 25; i++)
//	{
//		ch = fgetc(pf);
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


// fputs  写一行数据
//int main()
//{
//	FILE * pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写一行数据 : hello bit
//
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


// fgets 读一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读数据
//	char string1[100];
//	char string2[100];
//	fgets(string1, 100, pf);
//	fgets(string2, 100, pf);
//
//	printf("%s\b", string1);
//	printf("%s\b", string2);
//
//	return 0;
//}


// 格式化的读写
// fscanf  fprintf

//struct S
//{
//	int num;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3,14, "zhangsan" }; // 这是带有格式的
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	fprintf(pf,"%d %f %s", s.num, s.f, s.arr);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



// 测试fscanf 函数

//struct S
//{
//	int num;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 0 }; // 这是带有格式的
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	fscanf(pf, "%d %f %s", &(s.num), &(s.f), s.arr);
//	// 从文件中放到file中
//	
//	printf("%d %f %s", s.num, s.f, s.arr);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


// 读写文件的时候: 文件流
// 终端设备-屏幕: 标准输出流 stdout
// 键盘        : 标准输入流 stdin
// 屏幕        : 标准错误流 stderr

// 一个C语言程序会默认打开这三个流


//int main()
//{
//	fputc('a', stdout);
//	return 0;
//}
// 
//
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


// 对比一组函数
// scanf/fscanf/sscanf
// printf/fprintf/sprintf


//scanf   针对标准输入流 (stdin) 的格式化的输入函数
//printf  针对标准输出流 (stdout) 的格式化的输出函数

//fscanf  针对所有输入流(文件流, stdin)的格式化的输入函数
//fprintf 针对所有输出流(文件流, stdout)的格式化的输出函数

//sscanf  将字符串转化为格式化的数据
//sprintf 将格式化的数据转化为字符串

struct S
{
	int n;
	float f;
	char arr[20];
};


int main()
{
	// 序列化和反序列化的时候

	struct S s = { 200, 3.14, "zhangsan" };
	// 把一个结构体转换成字符串
	char arr[200] = { 0 };
	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
	printf("字符串的数据: %s\n", arr);

	// 把一个字符串转换成对应的格式化数据
	struct S tmp = { 0 };
	sscanf(arr,"%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
	printf("结构体的数据: %d %f %s", tmp.n, tmp.f, tmp.arr);
	return 0;
}