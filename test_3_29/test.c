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
//	// д�ļ�
//	fwrite(&s, sizeof(struct S),1, pf);
//	// �ر��ļ�
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
//	// д�ļ�
//	//char string[100];
//	//fread(string, sizeof(struct S), 1, pf);
//	//printf("%s %d %f", string);
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s);
//	// �ر��ļ�
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
//	//���ļ�
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
//	// ���ǿ�����fseek���������ļ�ָ�뵽������Ҫȥ�ĵط�,
//	// �ӵ�ǰλ������ƫ��3���ֽ�
//	//fseek(pf, -3, SEEK_CUR);
//	fseek(pf, 2, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);// c
//	// �ر��ļ�
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
//	//���ļ�
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
//	// �൱����ʼλ�õ�ƫ����
//	printf("%d\n", ftell(pf));
//	
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


// �ڴ��е�


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// fgetc��������ֵ�ķ���:
// ��ȡʧ�ܷ���EOF
// 1. �����ļ�ĩβ, ����EOF, ͬʱ����һ��״̬, �����ļ�ĩβ��, ʹ��feof��������״̬, ��֤���״̬
// 2. ��������, ����EOF, ͬʱ����һ��״̬, �����˴���, ʹ��ferror��������״̬



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("popen");
//		return 1;
//	}
//	char ch = 0;
//	// ���ļ�
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
////VS2013 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	// ʵ��һ������, ����һ���ļ�
//	// ���ļ�
//	// �򿪱����ļ�
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
//	// ���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	
//	return 0;
//}


// һ��������ֻ�����������ǳ�������, �����������ֶ�������һ��, �ҳ�����������, ���ʵ��.


// �汾1
// ����
// ֻ��һ�����ֳ���һ��, �������ֶ��ǳɶԳ��ֵ�, �ҳ�ֻ����һ�ε�����
// eg
// 1, 2, 3, 4, 5, 1, 2, 3, 4, 6

//void find_single_dog(int arr[], int sz)
//{
//	// 1. �Ƚ����е����ֽ������
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pos = 0;
//	// 2. ����ret�е���һλ��1
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	// 3. �������
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
//			// ���������ǲ��ᱻ��û����
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