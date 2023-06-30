#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

//int main()
//{
//	char arr[] = "zpengwei@yeah.net";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = "@.";
//	char* str = strtok(buf, p);
//	printf("%s\n", str);
//
//	str = strtok(NULL, p);
//	printf("%s\n", str);
//
//
//	str = strtok(NULL, p);
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	char arr[] = "192.168.3.212";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//
//	const char *p = ".";
//	char* str = NULL;
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}

//strorror
//把错误码翻译成错误信息
//其实 C语言的库函数在调用失败的时候会将一个错误码存放在一个叫: errrno的变量中,当我们想知道调用库函数的时候发生了什么错误信息, 就可以将errrno中的错误码翻译成错误信息
//int main()
//{
//	char* ret = strerror(0);
//	printf("%s\n", ret);
//
//	ret = strerror(1);
//	printf("%s\n", ret);
//
//	ret = strerror(2);
//	printf("%s\n", ret);
//
//	ret = strerror(3);
//	printf("%s\n", ret);
//
//
//	return 0;
//}

#include <errno.h>

//int main()
//{
//	// 打开文件
//	// 打开文件的时候, 如果文件的打开方式是"r"
//	// 文件存在则打开成功, 文件不存在则打开失败
//	FILE* pf = fopen("test.txt", "r");
//	// 打开文件失败的话会返回空指针
//	if (pf == NULL)
//	{
//		printf("打开文件失败, 原因是 %s\n",strerror(errno));
//		return 1;
//	}
//	// 读写文件
//	// ..
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	// 打开文件的时候, 如果文件的打开方式是"r"
//	// 文件存在则打开成功, 文件不存在则打开失败
//	FILE* pf = fopen("test.txt", "r");
//	// 打开文件失败的话会返回空指针
//	if (pf == NULL)
//	{
//		perror("打开文件失败:");
//		return 1;
//	}
//	// 读写文件
//	// ..
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	//把arr1中的前五个数据拷贝到arr2中
//	memcpy(arr2, arr1, 20);
//
//	return 0;
//}

void test2()
{
	float arr1[] = { 1.0f,2.0f,3.0f,4.0f,5.0f,6.0f,7.0f,8.0f,9.0f,10.0f };
	float arr2[8] = { 0 };
	memcpy(arr2, arr1, 12);
}

// memcpy 函数返回的是目标空间的起始地址

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest, src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
void test3()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[8] = { 0 };

	my_memcpy(arr2, arr1, 20);
}
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		// 前 -> 后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		// 后 -> 前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
void test4()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1 + 2, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

void test5()
{
	int arr1[] = { 1,2,3,4,5, };
	int arr2[] = { 1,2,3,4,6 };
	int ret = memcmp(arr1, arr2, 17);
	printf("%d", ret);
}

void test6()
{
	/*char arr[] = "hello world";
	memset(arr, 'x', 5);
	printf("%s\n", arr);*/

	// 以字节为单位来设置的
	// 这种写法无法将数组的每个元素设置为1 
	int arr[10] = { 0 };
	memset(arr, 1, 10);
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test7()
{
	printf("%d\n", isdigit('6'));
	printf("%d\n", isspace(' '));
	printf("%d\n", islower('x'));
	printf("%c\n", toupper('x'));
	printf("%c\n", tolower('X'));
}

void test8()
{
	char arr[128] = { 0 };
	gets(arr);
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
}
int main()
{
	//test3();
	//test4();
	//test2();
	//test5();
	//test6();
	//test7();
	test8();
	return 0;
}

// void* -- 通用类型的指针, 可以接受任意类型数据的地址.
// memcpy 函数的设计, 不知道未来程序员拷贝什么类型的数据.
// 在内存重叠的时候, 使用memcpy可能出现意想不到的效果
// 建议: 在内存重叠的时候, 使用memmove函数

//memmove
// C语言: memcpy拷贝不重叠的内存, 重叠的内存就交给memmove
