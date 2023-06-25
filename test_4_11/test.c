#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认密码(Y/N)：");
//	//清理缓冲区
//	//getchar();//处理'\n'
//
//	//清理缓冲区中的字符和多个字符
//	int tmp = 0;
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分   三个部分会影响
//	}
//
//	return 0;
//}

//for 循环将初始化，判断部分，和调整部分放到了一起


//int main()
//{
//	int i = 0;
//	//   初始化   判断    调整
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) //建议写成左闭右开区间 这样10就有了意义 循环了10次
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//判断部分的省略 - 判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)//为什么只有三个
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; k++, i++)
//	{
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x = x * i;
//	}
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int all = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = 1;//计算阶乘之前， 把ret初始为1
//		for (j = 1; j <= i; j++)
//		{
//			ret = j * ret;
//		}
//		all = ret + all;
//	}
//	printf("%d\n", all);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int all = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret * i;
//		all = all + ret;
//	}
//	printf("%d\n", all);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//再arr这个有序的数组中查找k的值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了 %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//#include <Windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	
//	while (left <= right) //这是判断条件 需要符合这个条件才能进行下面的东西
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!!!");
//	return 0;
//}



#include <string.h>
//strlen
//strcmp

//abcedf    一个一个进行比较 对应位置上的ASCII码值
//abccqqqqqqq
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串”123456“
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);//为什么没有& 因为password是个数组 数组名本来就是一个地址 不需要&
//		//if (password == "123456")//err - 两个字符串比较， 不能使用==，应该使用strcmp
//		//这种写法只是再比较两个字符串的地址，没有任何意义
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码军错误，退出程序\n");
//	}
//	return 0;
//}






//写一个猜数字游戏
//1.会自动产一个1-100之间的随机数
//2.猜数字
//a. 猜对了，就恭喜你，游戏结束
//b. 猜错了，会告诉你，才打了还是猜小了， 继续猜
//c. 游戏可以一直玩，除非推出游戏

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*****************************\n");
	printf("********* 1.play  ***********\n");
	printf("********* 0.exit  ************\n");
	printf("*****************************\n");


}

void game()
{
	//猜数字游戏的实现
	//1.先生成随机数
	//电脑上的时间一直在发生变化
	//是一个rand的起点
	int ret = rand() % 100 + 1;//%100 的余数是0~99， 然后+1， 范围就是1~100
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//在rand之前
	do
	{
		menu();//打印菜单
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		case 0:
			printf("推出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
