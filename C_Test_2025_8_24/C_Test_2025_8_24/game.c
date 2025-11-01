#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#define rows 102  // 最大行数，包含边界
#define cols 102  // 最大列数，包含边界
// 显示游戏主菜单
void menu()
{
    printf("**********************\n");
    printf("****  Minesweeper  ***\n");
    printf("****  1.play      ****\n");
    printf("****  0.exit      ****\n");
    printf("****  2.settings  ****\n");
    printf("**********************\n");
}

// 初始化游戏
void initgame(int hide[rows][cols], char show[rows][cols], int row, int col, int num)
{
    // 初始化隐藏矩阵（存储地雷和数字）
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            hide[i][j] = 0;  // 初始化为0
        }
    }

    // 初始化显示矩阵（玩家看到的界面）
    for (int i = 0; i < row + 1; i++)
    {
        for (int j = 0; j < col + 1; j++)
        {
            show[i][j] = '*';  // 初始化为'*'，表示未揭开
        }
    }

    // 随机生成地雷
    srand(time(NULL));  // 设置随机种子
    for (int n = 0; n < num; n++)
    {
        int x = 1 + rand() % row;  // 随机行
        int y = 1 + rand() % col;  // 随机列
        if (hide[x][y] != -1)      // 如果该位置没有地雷
            hide[x][y] = -1;       // 放置地雷
        else
            n--;                   // 如果已有地雷，重新生成
    }

    // 计算每个格子周围的地雷数量
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (hide[i][j] != -1)  // 如果不是地雷
            {
                int count = 0;
                // 检查周围8个格子
                for (int a = i - 1; a <= i + 1; a++)
                {
                    for (int b = j - 1; b <= j + 1; b++)
                    {
                        if (hide[a][b] == -1)  // 如果是地雷
                            count++;           // 计数增加
                    }
                }
                hide[i][j] = count;  // 记录周围地雷数量
            }
        }
    }
}

// 打印游戏界面
void print(int hide[rows][cols], char show[rows][cols], int row, int col, int debug)
{
    system("cls");  // 清屏

    // 调试模式：显示隐藏矩阵（地雷和数字）
    if (debug == 1)
    {
        for (int i = 0; i <= row; i++)
        {
            for (int j = 0; j <= col; j++)
            {
                if (i == 0)
                    printf("%3d ", j);  // 列号
                else if (j == 0)
                    printf("%3d ", i);  // 行号
                else
                    printf("%3d ", hide[i][j]);  // 地雷(-1)或数字
            }
            printf("\n");
        }
    }

    // 显示玩家看到的界面
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if (i == 0)
                printf("%2d ", j);  // 列号
            else if (j == 0)
                printf("%2d ", i);  // 行号
            else
                printf("%2c ", show[i][j]);  // 显示字符：*（未揭开）、F（旗子）、数字或空格
        }
        printf("\n");
    }
}

// 检查游戏胜负
int checkwin(int hide[rows][cols], char show[rows][cols], int* x, int* y, int row, int col, int num, int* ret)
{
    // 检查是否踩到地雷（且未插旗）
    if (*x >= 1 && *x <= row && *y >= 1 && *y <= col && hide[*x][*y] == -1 && show[*x][*y] != 'F')
    {
        *ret = 0;  // 游戏失败
        return 0;
    }

    // 统计正确和错误插旗的数量
    int CorrectFlagged = 0;
    int IncorrectFlagged = 0;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (hide[i][j] == -1 && show[i][j] == 'F')  // 地雷位置插旗
                CorrectFlagged++;
            else if (hide[i][j] != -1 && show[i][j] == 'F')  // 非地雷位置插旗
                IncorrectFlagged++;
        }
    }

    // 所有地雷都被正确标记且没有错误标记
    if (CorrectFlagged == num && IncorrectFlagged == 0)
    {
        *ret = 1;  // 游戏胜利
        return 0;
    }

    // 检查是否所有非地雷格子都已揭开
    int r = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (hide[i][j] != -1 && show[i][j] == '*')  // 非地雷且未揭开
            {
                r = 0;
                break;
            }
        }
        if (!r)
            break;
    }

    if (r)  // 所有非地雷格子都已揭开
    {
        *ret = 1;  // 游戏胜利
        return 0;
    }

    return 1;  // 游戏继续
}

// 更新游戏状态
void update(int hide[rows][cols], char show[rows][cols], int* x, int* y, int row, int col, int* ret)
{
    // 游戏结束，显示所有地雷
    if (*ret == 0 || *ret == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                if (hide[i][j] == -1)
                {
                    show[i][j] = '#';  // 显示地雷
                }
            }
        }
        return;
    }

    // 检查坐标是否有效
    if (show[*x][*y] == 'F')  // 已插旗，不揭开
        return;
    if (*x < 1 || *x > row || *y < 1 || *y > col || (show[*x][*y] != '*' && show[*x][*y] != 'F'))
        return;
    if (*x == 0 && *y == 0)
        return;

    // 揭开格子
    if (hide[*x][*y] > 0)  // 周围有地雷
    {
        show[*x][*y] = hide[*x][*y] + '0';  // 显示数字
        return;
    }

    // 空白格子，使用递归算法揭开周围区域
    show[*x][*y] = ' ';  // 显示空白

    // 递归揭开周围的空白格子
    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1; dy++)
        {
            if (dx == 0 && dy == 0)
                continue;  // 跳过自身

            int newX = *x + dx;
            int newY = *y + dy;

            // 检查新坐标是否有效
            if (newX >= 1 && newX <= row && newY >= 1 && newY <= col)
            {
                update(hide, show, &newX, &newY, row, col, ret);
            }
        }
    }
}

// 插旗功能
void flag(char show[rows][cols], int x, int y, int row, int col)
{
    // 检查坐标是否有效
    if (x < 1 || x > row || y < 1 || y > col)
    {
        return;
    }

    // 切换插旗状态
    if (show[x][y] == '*')  // 未揭开
    {
        show[x][y] = 'F';  // 插旗
    }
    else if (show[x][y] == 'F')  // 已插旗
    {
        show[x][y] = '*';  // 取消插旗
    }
}