#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "game.h"
//

//����������
//��ʼ������
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
		printf("\n");//��ӡһ��
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
			printf("\n");//��Ҫ���ǻ���//Ҫ�����˼��
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("�����");
	while (1)//һֱ��ѭ��������ѭ��Ϊֹ������������Կ�����˵��������Ҫ������ȷ������
	{
		printf("��������������꣺>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{
			//����
			//�ж������Ƿ�ռ��
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������");
			}
		}
		else
		{
			printf("�Ƿ����꣬����������\n");
		}
	}
}


//���鴫�ξ����ڴ����飬�����βο���д�������ָ�룬�����϶���ָ�룬���ǵ�ַ
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int i = rand() % row;//��Χ[0,2]
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

		//�ж�ƽ��
		//����������˷���1�� ��������0
		int ret = IsFull(board, row, col);
		if (ret == 1)
		{
			return 'Q';
		}
		return 'S';
	}
}