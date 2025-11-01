#pragma once  // 防止头文件被重复包含

// 包含必要的标准库头文件
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>    // Windows API，用于控制台操作和键盘输入检测
#include <locale.h>     // 本地化设置，用于支持宽字符打印
#include <stdbool.h>    // 布尔类型支持
#include <time.h>       // 时间函数，用于随机数种子

// 游戏常量定义
#define COLS = 58       // 游戏区域宽度（实际未使用）
#define LINES = 29      // 游戏区域高度（实际未使用）
#define WALL L'□' 
#define BODY L'●'  
#define FOOD L'★'  
#define KEY_PRESS(VK)  ((GetAsyncKeyState(VK)&0x1) ? 1 : 0)  // 检测按键状态的宏
#define POS_X 24        // 蛇初始位置的X坐标
#define POS_Y 5         // 蛇初始位置的Y坐标

/**
 * @brief 方向枚举，表示蛇的移动方向
 */
enum DIRECTION {
	UP = 1,    // 向上
	DOWN,      // 向下
	LEFT,      // 向左
	RIGHT,     // 向右
};

/**
 * @brief 游戏状态枚举
 */
enum STATE {
	ING,    // 游戏进行中
	DEAD,   // 游戏结束（蛇死亡）
	EXIT,   // 游戏退出
};

/**
 * @brief 蛇身节点结构体
 *
 * 使用链表结构表示蛇的各个身体部分
 */
typedef struct SnakeNode {
	int x;                 // 节点的X坐标
	int y;                 // 节点的Y坐标
	struct SnakeNode* Next; // 指向下一个节点的指针
} SN;

/**
 * @brief 食物结构体
 */
typedef struct Food {
	int x;     // 食物的X坐标
	int y;     // 食物的Y坐标
	int score; // 吃掉该食物可获得的分数
} Food;

/**
 * @brief 蛇结构体，包含游戏的所有状态信息
 */
typedef struct Snake {
	SN* snake;            // 蛇头指针，指向蛇身链表
	enum DIRECTION Dir;   // 当前移动方向
	size_t score;         // 当前游戏分数
	size_t Best_Score;    // 历史最高分数
	enum STATE State;     // 当前游戏状态
	int _SleepTime;       // 控制蛇移动速度的睡眠时间（毫秒）
	Food* food;           // 食物指针
} Snake;

// 函数声明

/**
 * @brief 初始化游戏
 * @param Snake 指向蛇结构体的指针
 */
void InitGame(Snake* Snake);

/**
 * @brief 设置控制台光标为不可见
 */
void SetCursorInfoInVisible();

/**
 * @brief 游戏主循环
 * @param Snake 指向蛇结构体的指针
 */
void Gaming(Snake* Snake);

/**
 * @brief 打印游戏菜单
 */
void MenuPrint();

/**
 * @brief 设置控制台光标位置
 * @param x 光标的X坐标
 * @param y 光标的Y坐标
 */
void SetPos(short x, short y);

/**
 * @brief 打印游戏边界和说明信息
 * @param Snake 指向蛇结构体的指针
 */
void BoardPrint(Snake* Snake);

/**
 * @brief 创建食物并放置在随机位置
 * @param Snake 指向蛇结构体的指针
 */
void CreateFood(Snake* Snake);

/**
 * @brief 初始化蛇身
 * @param Snake 指向蛇结构体的指针
 */
void InitSnake(Snake* Snake);

/**
 * @brief 移动蛇
 * @param Snake 指向蛇结构体的指针
 */
void SnakeMove(Snake* Snake);

/**
 * @brief 更新游戏状态
 * @param Snake 指向蛇结构体的指针
 */
void UpdataGame(Snake* Snake);

/**
 * @brief 检测键盘输入并更新蛇的移动方向
 * @param Snake 指向蛇结构体的指针
 */
void CheckKeyBoard(Snake* Snake);

/**
 * @brief 游戏暂停功能
 */
void SnakeSleep();

/**
 * @brief 检查蛇是否吃到食物
 * @param Snake 指向蛇结构体的指针
 * @param ps 指向蛇头节点的指针
 * @return int 1表示吃到食物，0表示未吃到
 */
int IfEatFood(Snake* Snake, SN* ps);

/**
 * @brief 保存最高分数到文件
 * @param Snake 指向蛇结构体的指针
 */
void SaveScore(Snake* Snake);

/**
 * @brief 从文件读取最高分数
 * @param Snake 指向蛇结构体的指针
 */
void GetScore(Snake* Snake);

/**
 * @brief 清空输入缓冲区
 */
void ClearInputBuffer();

/**
 * @brief 结束游戏，释放资源
 * @param Snake 指向蛇结构体的指针
 */
void EndGame(Snake* Snake);
