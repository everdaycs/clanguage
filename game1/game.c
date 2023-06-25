#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "game.h"
//

//函数的声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	//memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	// * | * | * 
	//---|---|---
	// * | * | *
	//---|---|---
	// * | * | * 
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
		printf("\n");//打印一行
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");//不要忘记换行//要有组的思想
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家走");
	while (1)//一直会循环到跳出循环为止，利用这个特性可以来说明我们需要输入正确的坐标
	{
		printf("请输入下棋的坐标：>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{
			//下棋
			//判断坐标是否被占用
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入");
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}
}


//数组传参就是在传数组，但是形参可以写成数组或指针，本质上都是指针，都是地址
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int i = rand() % row;//范围[0,2]
		int j = rand() % col;//[m,n] = rand[n - m + 1] + m
		if(board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
	
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[ROW][COL] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		for (j = 0; j < col; j++)
		{
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			{
				return board[0][j];
			}
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		{
			return board[0][2];
		}

		//判断平局
		//如果棋盘满了返回1， 不满返回0
		int ret = IsFull(board, row, col);
		if (ret == 1)
		{
			return 'Q';
		}
		return 'S';
	}
}