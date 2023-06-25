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
	//���������Ҫһ��3*3�Ķ�ά����
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ʾ����
	DisplayBoard(board, ROW, COL); 
	//�����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//��Ҫ�ж��Ƿ�Ӯ�ñ���
		ret = IsWin(board, ROW, COL);
		if (ret != 'S')
		{
			break;
		}
		//��������
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
		printf("��ȵ���ţ�� 666 fw����");
	}
	else if (ret == '#')
	{
		printf("����˵ �������");
	}
	else if (ret == 'Q')
	{
		printf("����൱�Ķ���");
	}


}
int main()
{
	srand((unsigned int)time(NULL));//ǿ������ת��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;

		}
	} while (input);//ֻҪ����0 �Ͳ����˳���Ϸ���������Ҳ�����


	return 0;
}
