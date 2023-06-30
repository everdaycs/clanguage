#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//正确使用strlen 必须要有\0
//int main()
//{
//	char arr[] = "abc\0def";
//	int len = strlen("abcdef");
//	int len1 = strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n", len1);
//	return 0;
//}


//strlen函数的返回类型是size_t, 无符号数
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//1.计数器
// //int my_strlen(const char* str)
//{
//	int i = 0;
//	while (*str != '\0')
//	{
//		str++; 
//		i++;
//	}
//	return i;
//}
//2.递归
//不创建临时变量
//3.指针



//int my_strlen(const char* str)
//{
//
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//	return 0;
//}

//strcpy 拷贝
//int main()
//{
//	char arr1[] = "abc\0def";
//	char arr2[20] = "xxxxxxxxxxx";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//char arr1[] = "fewqfwefwerwer";
//	//char arr2[20] = arr1;
//	//printf("%s", arr2);
//	return 0;
//}+-

//void my_strcpy( char* arr2, const char* arr1)
//{
//	while (*arr1 != '\0')
//	{
//		*arr2 = *arr1;
//		arr1++;
//		arr2++;
//	}
//	arr2++;
//	arr2 = '\0';
//}

//#include <assert.h>
////返回的是目标空间的地址
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//保证不是空指针
//	while (*dest++ = *src++)//最后的\0 就直接变假
//	{
//		;
//	}
//	return ret;
//}
//int main()

//	char arr1[] = "hehe";
//	char arr2[20] = { 0 };
//	//my_strcpy(arr2, arr1);
//	//printf("%s", arr2);
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	//找目标空间中的\0
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//
//int main() 
//{
//	char arr1[20] = "hello "; 
//	char arr2[] = "world";
//	//追加
//	my_strcat(arr1, arr1);
//	printf("%s", arr1);
//	return 0;
//}



//strcmp
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	int ret = 0;
//	while (*arr1 != '\0' && *arr2 != '\0')
//	{
//		if (*arr1 > *arr2)
//		{
//			ret = 1;
//			return ret;
//		}
//		else if (*arr1 < *arr2)
//		{
//			ret = -1;
//			return ret;
//		}
//		else if (*arr1 == *arr2)
//		{
//			arr1++;
//			arr2++;
//		}
//	}
//	return ret;
//}

//int my_strcmp(const char* arr1, const char* arr2)
//{
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[] = "bbq";
//	char arr2[] = "bbq";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[5] = "XXXX ";
//	strncpy(arr2, arr1, 3);
//	printf("%s", arr2);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "abcdef";
//
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);
//	printf("%d", ret);
//	return 0;
//}


//strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 != '\0')
//	{
//		if (*str1 == *str2)
//		{
//			char* tmp = str1;
//			char* ret = str2;
//			tmp++;
//			ret++;
//			while (*tmp == *ret && *ret != '\0')
//			{
//				tmp++;
//				ret++;
//			}
//			if (*ret == '\0')
//			{
//				return str2;
//			}
//		}
//		str1++;
//	}
//	if (*str1 == '\0')
//	{
//		return NULL;
//	}
//}

char* my_strstr(const char* str1, const char* str2)
{
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = s1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcq";
	char *p = my_strstr(arr1, arr2);
	if (p == NULL)
	{
		printf("找不到");
	}
	else
	{
		printf("%s\n", p);
	}
	return 0;
}