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
//�Ѵ����뷭��ɴ�����Ϣ
//��ʵ C���ԵĿ⺯���ڵ���ʧ�ܵ�ʱ��Ὣһ������������һ����: errrno�ı�����,��������֪�����ÿ⺯����ʱ������ʲô������Ϣ, �Ϳ��Խ�errrno�еĴ����뷭��ɴ�����Ϣ
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
//	// ���ļ�
//	// ���ļ���ʱ��, ����ļ��Ĵ򿪷�ʽ��"r"
//	// �ļ�������򿪳ɹ�, �ļ����������ʧ��
//	FILE* pf = fopen("test.txt", "r");
//	// ���ļ�ʧ�ܵĻ��᷵�ؿ�ָ��
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��, ԭ���� %s\n",strerror(errno));
//		return 1;
//	}
//	// ��д�ļ�
//	// ..
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	// ���ļ���ʱ��, ����ļ��Ĵ򿪷�ʽ��"r"
//	// �ļ�������򿪳ɹ�, �ļ����������ʧ��
//	FILE* pf = fopen("test.txt", "r");
//	// ���ļ�ʧ�ܵĻ��᷵�ؿ�ָ��
//	if (pf == NULL)
//	{
//		perror("���ļ�ʧ��:");
//		return 1;
//	}
//	// ��д�ļ�
//	// ..
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	//��arr1�е�ǰ������ݿ�����arr2��
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

// memcpy �������ص���Ŀ��ռ����ʼ��ַ

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
		// ǰ -> ��
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		// �� -> ǰ
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

	// ���ֽ�Ϊ��λ�����õ�
	// ����д���޷��������ÿ��Ԫ������Ϊ1 
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

// void* -- ͨ�����͵�ָ��, ���Խ��������������ݵĵ�ַ.
// memcpy ���������, ��֪��δ������Ա����ʲô���͵�����.
// ���ڴ��ص���ʱ��, ʹ��memcpy���ܳ������벻����Ч��
// ����: ���ڴ��ص���ʱ��, ʹ��memmove����

//memmove
// C����: memcpy�������ص����ڴ�, �ص����ڴ�ͽ���memmove
