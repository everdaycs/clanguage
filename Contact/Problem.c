#define _CRT_SECURE_NO_WARNING 1

#include <stdio.h>


char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}


int main()
{
	Test();
	return 0;
}

// 1. ����GetMemory������ʱ��, str�Ĵ�����Ϊֵ����, p��str����ʱ����,
// ������GetMemory�����ڲ�����̬���ٿռ�ĵ�ַ�����p�е�ʱ��, ����Ӱ��
// str. ����GetMemory��������֮��, str����Ȼ��NULLָ��. strcpy�����ͻ�
// ����ʧ��, ԭ���Ƕ�NULL�Ľ����ò���, ��������

// 2. GetMemory ��������malloc����Ŀռ�û�л����ͷ�, ������ڴ�й¶