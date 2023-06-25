#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	;//空语句
//
//	return 0;
//}

//int main()
//{
//	//int age = 4654654;
//
//	//if (age < 18)
//	//{
//	//	printf("少年\n");
//	//}
//	//else if (age >= 18 && age < 26)
//	//{
//	//	printf("青年\n");
//	//}
//	//else if (age >= 26 && age < 40)
//	//{
//	//	printf("中年\n");
//	//}
//	//else if (age >= 40 && age < 60)
//	//{
//	//	printf("壮年\n");
//	//}
//	//else if (age >= 60 && age < 100)
//	//{
//	//	printf("老年\n");
//	//}
//	//else
//	//	printf("老不死");
//	//int age = 10;
//
//	//if (age >= 18)//if 和 else 默认只能控制一条语句
//	//{
//	//	printf("成年\n");
//	//}
//	//else
//	//	printf("未成年\n");
//
//	//printf("不能谈恋爱");//这是独立的一句话
//	//if (age >= 18)//为真才会执行{}里面的语句
//	//{
//	//	printf("adult");
//	//}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

//int test()
//{
//	if (0)
//		return 0;
//	printf("hehe\n");
//	return 1; 
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
////	if (num = 5)
//	if (5 == num)//当常量和变量进行比较的话，可以将常量放在左边，防止在敲‘ == ’的时候只有一个
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//C++
//	//c99 标准里面支持 直接在for里面声明变量
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if ((i % 2) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;//字符也是可以的， 字符底层存储时用到时ASCII码
//	scanf("%d", &day);
//	switch (day) // 不能用float 只能用整型
//	{
//	case 1://case后面必须包含常量值 整型
//		printf("星期一");
//		break;
//	//int n = 2
//	//case n:  // error
//	case 2://case后面是整型常量 表达式  不能是2.0
//		printf("星期二");
//		break;
//	case 3://可以写成3+0
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期wu");
//		break;
//	case 6:
//		printf("星期liu");
//		break;
//	case 7:
//		printf("星期qi");
//		break;
//	}
//	return 0;
//}



//1-5工作日
//6-7休息日

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default://这个也可以放在最上面 只要是符合需求就行
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	//在while循环中，continue的作用是跳过本次循环continue后面的代码
//	//直接去判断部分，看是否进行下一次循环
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;//在while循环中，break用于永久的的终止循环
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
//	return 0;
//}


//getchar
//stdin 标准输入，从键盘获取一些字符
//EOF - end of file - 文件的结束标志

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch); //输出一个字符
//	
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl+z - getchar 就读取结束
	//putchar 是不会忽略\n 的
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}