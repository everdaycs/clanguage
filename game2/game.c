#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------------------\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");
}

//布置雷，随机分配
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count <= EASYCOUNT)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count += 1;
		}
	}
}


//数周围的雷数量
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数变量
static int CountMine(char board[ROWS][COLS],int x, int y)
{

	//*  *  * 
	//*  () * 
	//*  *  * 
	return board[x - 1][y - 1]
		+ board[x][y - 1]
		+ board[x + 1][y - 1]
		+ board[x - 1][y]
		+ board[x + 1][y]
		+ board[x - 1][y + 1]
		+ board[x][y + 1]
		+ board[x + 1][y + 1] - 8 * '0' ;//可以避免写八个if语句
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	
	
	while (count < row * col - EASYCOUNT)
	{
		
		printf("请输入需要的坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了，淘汰");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else if (mine[x][y] == '0')
			{
				int count1 = CountMine(mine, x, y);//count1 是坐标周围雷的数量
				count ++;
				show[x][y] = count1 + '0';
				DisplayBoard(show, ROW, COL);
			}
			//该坐标不是雷
			//该坐标周围没有雷
			//该坐标没有被排查过
			
		}
		else
		{
			printf("非法输入，请重新输入");
		}
		if (count == row * col - EASYCOUNT)
		{
			printf("排雷成功");
			DisplayBoard(mine, ROW, COL);
		}
	}
}