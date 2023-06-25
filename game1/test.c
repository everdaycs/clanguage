#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("************ 1.play *********\n");
	printf("************ 0.exit *********\n");
	printf("*****************************\n");
}



void game()
{
	char ret = 0;
	//存放数据需要一个3*3的二维数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL); 
	//玩家走
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//需要判断是否赢得比赛
		ret = IsWin(board, ROW, COL);
		if (ret != 'S')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'S')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你比电脑牛逼 666 fw东西");
	}
	else if (ret == '#')
	{
		printf("电脑说 我是你爹");
	}
	else if (ret == 'Q')
	{
		printf("旗鼓相当的对手");
	}


}
int main()
{
	srand((unsigned int)time(NULL));//强制类型转换
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}
	} while (input);//只要不是0 就不会退出游戏，后面的五也是真的


	return 0;
}
