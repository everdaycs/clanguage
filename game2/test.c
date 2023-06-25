#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("*********   1. play  *******\n");
	printf("*********   0. exit  *******\n");
	printf("****************************\n");

}


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
	
}

int main()
{
	srand((unsigned int)time(NULL));//每次重新定义rand函数起点
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);


	return 0;
}