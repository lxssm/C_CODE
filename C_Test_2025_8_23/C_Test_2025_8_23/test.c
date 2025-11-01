#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int checkwin(char board[3][3], int* r, int* n)
{
	if (*r == 1)
		return;
	int x = 0;
	int y = 0;
	for (x = 0; x <= 2; x++)
	{
		if (board[x][y] == board[x][y + 1] && board[x][y + 1] == board[x][y + 2])
		{
			if (board[x][y] == '*')
			{
				printf("玩家赢\n");
				*r = 1;
				return;
			}
			else if (board[x][y] == '#')
			{
				printf("电脑赢\n");
				*r = 1;
				return;
			}
		}
	}
	x = 0;
	for (y = 0; y <= 2; y++)
	{
		if (board[x][y] == board[x + 1][y] && board[x + 1][y] == board[x + 2][y])
		{
			if (board[x][y] == '*')
			{
				printf("玩家赢\n");
				*r = 1;
				return;
			}
			else if (board[x][y] == '#')
			{
				printf("电脑赢\n");
				*r = 1;
				return;
			}
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		if (board[0][0] == '*')
		{
			printf("玩家赢\n");
			*r = 1;
			return;
		}
		else if (board[0][0] == '#')
		{
			printf("电脑赢\n");
			*r = 1;
			return;
		}
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
	{
		if (board[1][1] == '*')
		{
			printf("玩家赢\n");
			*r = 1;
			return;
		}
		else if (board[1][1] == '#')
		{
			printf("电脑赢\n");
			*r = 1;
			return;
		}
	}
	if (*n == 9 && *r != 1)
	{
		*r = 1;
		printf("平局\n");
	}
}

void menu()
{
	printf("******************\n");
	printf("******1.play******\n");
	printf("******2.exit******\n");
	printf("******************\n");
}
void Displayboard(char board[3][3])
{
	system("cls");
	printf(" %c | %c | %c  \n", board[0][0], board[0][1], board[0][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c  \n", board[1][0], board[1][1], board[1][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c  \n", board[2][0], board[2][1], board[2][2]);
	printf("---|---|---\n");

}
void PlayerMove(char board[3][3], int* n)
{
	int x = 0;
	int y = 0;
	printf("请输入坐标");
	for (int r1 = 1; r1 != 0;)
	{
		scanf("%d%d", &x, &y);
		if (x <= 3 && y <= 3 && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			r1 = 0;
		}
		else
			printf("坐标非法,请重新输入");
	}
	*n = *n + 1;



}

void ComputerMove(char board[3][3], int* n, int* r)
{
	if (*r == 1)
		return 0;
	srand(time(0));
	int min = 0;
	int max = 2;
	int x = 0;
	int y = 0;
again:x = min + rand() % (max - min + 1);
	y = min + rand() % (max - min + 1);
	if (board[x][y] != ' ')
		goto again;
	else
		board[x][y] = '#';
	*n = *n + 1;
}

void play()
{
	system("cls");
	int row = 0;
	int col = 0;
	int n = 0;
	char board[3][3] = { 0 };
	for (row = 0; row <= 2; row++)
		for (col = 0; col <= 2; col++)
		{
			board[row][col] = ' ';
		}
	int r = 0;
	while (r == 0)
	{
		Displayboard(board);
		PlayerMove(board, &n);
		checkwin(board, &r, &n);
		ComputerMove(board, &n, &r);
		checkwin(board, &r, &n);
	}
}


int main()
{
	int start = 2;
	while (start != 0)
	{
		menu();
		printf("请选择");
		scanf("%d", &start);
		if (start == 1)
		{
			play();
		}
		else if (start == 0);
		else
		{
			system("cls");
			printf("输入错误\n");
		}
	}
	return 0;
}