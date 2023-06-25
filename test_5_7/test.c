#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 3 / 5;//操作符左边和右边都是整数，进行整数除法
//	//float a = 6.0 / 5.0;
//
//	//想要得到小数，除号的两端必须有一个是小数
//	float a = 6.0 / 5.0;
//	printf("%f\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -1;//int 是四个字节 有32位 00000000000000000000000000000010
//	int b = a << 1; // 00000000000000000000000000000100  后面补零
//	//当前的右移操作符是算数右移
//	int c = a >> 1; // 把a 的二进制位向右移动一位
//	//把a的二进制向左移动一位
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//^ 按位（二进制）异或
//	//对应的二进制位进行异或
//	//规则：相同为0， 相异为1
//
//	int f = a ^ b;
//	// | - 按（二进制）位或
//	int d = a | b;
//	//& - 按（二进制）位与
//	int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001    c;
//	//00000000000000000000000000000111    d;
//	//00000000000000000000000000000110    f;
//	printf("%d\n", f);
//	printf("%d\n", d);
//	return 0;
//}


//不使用第三个变量交换a b 的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d \n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d %d \n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 6;
//	printf("%d %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;//a ^ b ^ b//a ^ 0就是a a ^ a 就是 0
//	a = a ^ b;
//	printf("%d %d \n", a, b);
//	return 0;
//}

//int count(int a)
//{
//	int count = 0;
//	while (a != 0)
//	{
//		if ((a & 1) == 1)
//		{
//			count = count + 1;
//		}
//		a = a >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//
//	int ret = count(3);
//	//00000000000000000000000000001101
//	//
//	printf("%d", ret);
//	return 0;
//
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;
//	a += 100;//复合赋值
//	a = a >> 3;
//	a >>= 3;
//	return 0;
//}

//=  -- 赋值
//== -- 判断相等

//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);
//	//flag为真，打印
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//flag为假应该打印haha
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//单目操作符 只有一个操作数、

//int main()
//{
//	//int a = 0;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//sizeof 也可以进行计算数组大小
//	//printf("%d\n", sizeof(int[10]));//40 - int [10]是arr数组的类型
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	////对于变量名进行sizeof的时候，可以不写括号
//	//printf("%d\n", sizeof a);
//	////sizeof是一个操作符，不是函数
//	
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//2
//	//s的两个字节是提前开辟好的，不会因为a过大而导致，s变4，可以截断
//	printf("%d\n", s);//5
//	//short 占两个字节
//	return 0;
//}


//~对全部的二进制位取反
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 原码
//	//11111111111111111111111111111110 反码  符号位不变
//	//11111111111111111111111111111111 补码
//
//	int b = ~a;//包括符号位
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//
//}

//int main()
//{
//	int a = 13;
//	//把a的二进制中的第五位变成一
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//	a = a & ~(1 << 4);
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++， 先使用，再++
//	int b = ++a//前置++ 先++，后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	int *pa = &a;//pa时用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	//强制类型转换
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\n b = %d\n  c = %d\n d = %d\n", a, b, c, d);
//	//为什么是1234
//	//有一个0出现，就不会算后面的数了
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 1;
//	}
//	else b = -1;
//
//	b = (a > 5 ? 1 : -1);
//	//    表达式1
//	return 0;
//}


int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	
	//逗号表达式 - 要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
    //       c = 10

	printf("%d\n", d);
	return 0;
}

//if (a = b + 1, c = a /2, d > 0);
//如果d大于0 才会进去
//a = get_val();
//count_val(a);
//while (a > 0)
//{
//	a = get_val();
//	count_val(a);
//}
//
//
//while (a = get_val(), count_val, a > 0)
//{
//
//}
