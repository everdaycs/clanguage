#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char x;
	char y;
	char str[100];
	printf("Input character in register A: ");
	scanf("%c", &x);
	while (getchar() != '\n');
	printf("\nInput character in register B: ");
	scanf("%c", &y);
	while (getchar() != '\n');
	printf("\nInput string in register C: ");
	gets(str);
	
	int i = 0;
	int m = 0;
	m = strlen(str);
	str[m] = '\0';
	for (i = 0; i < m; i++)
	{
		if (str[i] == x)
		{
			str[i] = y;
		}
	}
	
	printf("\nOutput string in register C: %s", &str);
	return 0;
}