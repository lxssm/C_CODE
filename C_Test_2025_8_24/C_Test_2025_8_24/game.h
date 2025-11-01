#pragma once
#include <stdio.h>
#include <time.h>
#include <windows.h>

#define rows 102  // 最大行数，包含边界
#define cols 102  // 最大列数，包含边界

// 函数声明
void menu();  // 显示主菜单
void initgame(int hide[rows][cols], char show[rows][cols], int row, int col, int num);  // 初始化游戏
void print(int hide[rows][cols], char show[rows][cols], int row, int col, int debug);  // 打印游戏界面
int checkwin(int hide[rows][cols], char show[rows][cols], int* x, int* y, int row, int col, int num, int* ret);  // 检查游戏胜负
void update(int hide[rows][cols], char show[rows][cols], int* x, int* y, int row, int col, int* ret);  // 更新游戏状态
void flag(char show[rows][cols], int x, int y, int row, int col);  // 插旗功能