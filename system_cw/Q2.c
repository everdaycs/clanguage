#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int count_substr_n(const char*, const char*, int, const char*);

int main()
{
	const char input[100];
	const char s1[25];
	const char s2[25];
	const char s3[25];
	int N;
	gets(input);
	sscanf(input, "P1:\"%[^\"]\";P2:\"%[^\"]\";P3:%d;P4:\"%[^\"]\";", s1, s2, &N, s3);
	int result = count_substr_n(s1, s2, N, s3);
	printf("%d", result);
	
		return 0;

}

int count_substr_n(const char* s1, const char* s2, int n, const char* s3){

	int count = 0;
	strncat(s3, s2, n);
	char* temp = strstr(s1, s3);
	while (temp != NULL) {
		count++;
		temp++;
		temp = strstr(temp, s3);
		
	}
	
	return count;
	
}