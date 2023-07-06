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

// 1. 调用GetMemory函数的时候, str的传参作为值传递, p是str的临时拷贝,
// 所以再GetMemory函数内部讲动态开辟空间的地址存放在p中的时候, 不会影响
// str. 所以GetMemory函数返回之后, str中依然是NULL指针. strcpy函数就会
// 调用失败, 原因是对NULL的解引用操作, 程序会崩溃

// 2. GetMemory 函数内容malloc申请的空间没有机会释放, 造成了内存泄露