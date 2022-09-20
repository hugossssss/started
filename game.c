#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
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

}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.打印第一行的数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");

			}

			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
		{
			int x = 0;
			int y = 0;
			printf("玩家走:>\n");
			
			while (1)
			{
				printf("\n请输入要下的坐标（请用空格隔开）:>");
				scanf("%d%d", &x, &y);
				//判断坐标合法性
				if (x >= 1 && x <= row && y >= 1 && y <= col)
				{
					if ((board[x - 1][y - 1]) == ' ')
					{
						board[x - 1][y - 1] = '*';
						break;
					}
				   else  
					{
						printf("\n该坐标被占用\n");
					}
				}
				else
				{
					printf("\n该坐标非法，请重新输入！\n");
				}

			}	

}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{

		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{

			board[x][y] = '#';

			break;
		}


	}
}
//返回1表示棋盘满了
//返回0表示棋盘没满


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

// 如果
//返回


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}

	}
	//竖三列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];

	//判断是否平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}










