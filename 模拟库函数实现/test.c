#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int my_strlen(char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}

void my_strcpy(char arr1[], char arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr2[i] = arr1[i];
	}
}

int my_strcmp(char arr1[], char arr2[], int sz)
{
	int i = 0;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr1[i] > arr2[i])
		{
			flag = 1;
			break;
		}
		else if (arr1[i] < arr2[i])
		{
			flag = -1;
			break;
		}
	}
	return flag;
}


void my_strcat(char arr1[], char arr2[], int m , int n)
{
	int i = 0;
	int j = 0;
	
	for (i = m, j = 0; i < m + n; i++, j++)
		{
			arr1[i] = arr2[j];
		}
	
}


char* my_strstr(char arr1[], char arr2[])
{
	char* l;
	char* tmp = NULL;
	tmp = arr1[0];
	for (tmp = arr1[0];; tmp++)
	{
		if (my_strcmp(tmp, arr2, 50) == 0)
		{
			l = tmp;
			return l;
		}
	}
	return NULL;
}


int main()
{
	char arr1[50] = { "abcdefg" };
	char arr2[50] = { "bcd"};
	int ret = my_strlen(arr1);

	int cmp = my_strcmp(arr1, arr2, ret);
	printf("%d\n", cmp);

	char* l = my_strstr(arr1, arr2);
	printf("%s", l);

	int m = my_strlen(arr1);
	int n = my_strlen(arr2);
	my_strcat(arr1, arr2, m, n);
	int i = 0;
	for (i = 0; i < m + n; i++)
	{
		printf("%c", arr1[i]);
	}
	printf("\n");
	my_strcpy(arr1, arr2, ret);
	for (i = 0; i < ret; i++)
	{
		printf("%c", arr2[i]);
	}
	printf("%d\n", ret);
	return 0;
}