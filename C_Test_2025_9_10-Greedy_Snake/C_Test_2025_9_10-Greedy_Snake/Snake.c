#define _CRT_SECURE_NO_WARNINGS 1  // 禁用Visual Studio的安全警告
#include "Snake.h"

/**
 * @brief 设置控制台光标为不可见
 *
 * 通过Windows API获取控制台光标信息并设置为不可见
 */
void SetCursorInfoInVisible()
{
	HANDLE Houtput = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取标准输出句柄
	CONSOLE_CURSOR_INFO CursorInfo;                    // 光标信息结构体
	GetConsoleCursorInfo(Houtput, &CursorInfo);        // 获取当前光标信息
	CursorInfo.bVisible = false;                       // 设置光标不可见
	SetConsoleCursorInfo(Houtput, &CursorInfo);        // 应用新的光标设置
}

/**
 * @brief 设置控制台光标位置
 * @param x 光标的X坐标
 * @param y 光标的Y坐标
 */
void SetPos(short x, short y)
{
	COORD pos = { x,y };                              // 创建坐标结构体
	HANDLE Houtput = GetStdHandle(STD_OUTPUT_HANDLE); // 获取标准输出句柄
	SetConsoleCursorPosition(Houtput, pos);           // 设置光标位置
}

/**
 * @brief 打印游戏主菜单
 *
 * 显示游戏标题和选项，处理用户输入
 */
void MenuPrint()
{
	int input = 0;  // 用户输入选项
	do {
		SetPos(40, 8);
		wprintf(L"贪吃蛇小游戏");  // 打印游戏标题
		SetPos(40, 13);
		wprintf(L"1.开始游戏");    // 开始游戏选项
		SetPos(40, 16);
		wprintf(L"0.退出游戏");    // 退出游戏选项
		SetPos(40, 20);
		wprintf(L"请选择->");      // 提示用户输入
		scanf("%d", &input);       // 读取用户输入
		ClearInputBuffer();        // 清空输入缓冲区
		switch (input)
		{
		case 1:
			system("cls");         // 清屏
			SetPos(25, 10);
			wprintf(L"按 W,A,S,D 来操作蛇,空格为加速,Z为减速");  // 游戏操作说明
			SetPos(25, 12);
			wprintf(L"加速可获得更高的分数");                     // 分数规则说明
			SetPos(25, 18);
			input = 0;             // 设置input为0以退出循环
			system("pause");       // 暂停等待用户按键
			break;
		case 0:
			break;                 // 退出游戏
		default:
			system("cls");         // 清屏
			SetPos(40, 18);
			wprintf(L"输入错误");  // 输入错误提示
		}
	} while (input);               // 循环直到输入有效选项
}

/**
 * @brief 从文件读取最高分数
 * @param Snake 指向蛇结构体的指针
 */
void GetScore(Snake* Snake)
{
	FILE* p1 = fopen("score.txt", "r");  // 以只读方式打开分数文件
	if (p1 == NULL) {                    // 如果文件不存在
		p1 = fopen("score.txt", "w");    // 创建新文件
		if (p1 != NULL) {
			fprintf(p1, "0");            // 写入初始分数0
			fclose(p1);                  // 关闭文件
		}
		Snake->Best_Score = 0;           // 设置最高分为0
		return;
	}

	// 从文件读取最高分
	if (fscanf(p1, "%zu", &Snake->Best_Score) != 1) {
		Snake->Best_Score = 0;           // 读取失败时设置最高分为0
	}

	fclose(p1);                          // 关闭文件
}

/**
 * @brief 初始化游戏
 * @param Snake 指向蛇结构体的指针
 *
 * 设置控制台窗口，初始化游戏状态
 */
void InitGame(Snake* Snake)
{
	GetScore(Snake);                     // 读取最高分
	system("mode con cols=100 lines=35 ");  // 设置控制台窗口大小
	system("title 贪吃蛇");              // 设置控制台窗口标题
	SetCursorInfoInVisible();            // 隐藏光标
	MenuPrint();                         // 显示菜单
	BoardPrint(Snake);                   // 绘制游戏边界
	InitSnake(Snake);                    // 初始化蛇身
	CreateFood(Snake);                   // 创建食物
}

/**
 * @brief 初始化蛇身
 * @param Snake 指向蛇结构体的指针
 *
 * 创建蛇身链表并设置初始位置和方向
 */
void InitSnake(Snake* Snake)
{
	Snake->snake = (SN*)malloc(sizeof(SN));  // 分配蛇头内存
	Snake->snake->x = POS_X;                 // 设置蛇头X坐标
	Snake->snake->y = POS_Y;                 // 设置蛇头Y坐标
	Snake->Dir = RIGHT;                      // 设置初始方向为右
	Snake->_SleepTime = 200;                 // 设置初始移动速度
	Snake->score = 0;                        // 初始化分数
	Snake->State = ING;                      // 设置游戏状态为进行中

	SN* ps = Snake->snake;                   // 指向蛇头的指针
	SN* pn = NULL;                           // 用于创建新节点的指针

	// 创建初始蛇身（4个节点）
	for (int i = 1; i < 5; i++)
	{
		pn = (SN*)malloc(sizeof(SN));        // 分配新节点内存
		ps->Next = pn;                       // 连接节点
		pn->x = POS_X - 2 * i;               // 设置节点X坐标（向左延伸）
		pn->y = POS_Y;                       // 设置节点Y坐标
		pn->Next = NULL;                     // 设置下一节点为空
		ps = pn;                             // 移动指针到新节点
	}
	ps->Next = NULL;                         // 设置最后一个节点的下一节点为空

	// 打印初始蛇身
	ps = Snake->snake;                       // 重新指向蛇头
	while (ps)
	{
		SetPos(ps->x, ps->y);                // 移动光标到节点位置
		wprintf(L"%c", BODY);                // 打印蛇身字符
		ps = ps->Next;                       // 移动到下一个节点
	}
}

/**
 * @brief 打印游戏边界和说明信息
 * @param Snake 指向蛇结构体的指针
 */
void BoardPrint(Snake* Snake)
{
	system("cls");                           // 清屏

	// 打印上边界
	SetPos(0, 0);
	for (int i = 0; i < 58; i += 2)
	{
		wprintf(L"%c", WALL);                // 打印墙壁字符
	}

	// 打印下边界
	SetPos(0, 26);
	for (int i = 0; i < 58; i += 2)
	{
		wprintf(L"%c", WALL);                // 打印墙壁字符
	}

	// 打印左边界
	for (int i = 1; i < 26; i++)
	{
		SetPos(0, i);
		wprintf(L"%c", WALL);                // 打印墙壁字符
	}

	// 打印右边界
	for (int i = 1; i < 26; i++)
	{
		SetPos(56, i);
		wprintf(L"%c", WALL);                // 打印墙壁字符
	}

	// 打印游戏信息
	SetPos(64, 13);
	printf("最佳成绩: %zu ", Snake->Best_Score);  // 显示最高分
	SetPos(64, 15);
	printf("不能穿墙，不能咬到自己\n");           // 游戏规则
	SetPos(64, 16);
	printf("用WASD分别控制蛇的移动.");           // 控制说明
	SetPos(64, 17);
	printf("空格为加速，Z为减速\n");             // 加速减速说明
	SetPos(64, 18);
	printf("ESC ：暂停游戏.X：退出游戏.");       // 功能键说明
}

/**
 * @brief 创建食物并放置在随机位置
 * @param Snake 指向蛇结构体的指针
 */
void CreateFood(Snake* Snake)
{
	int x = POS_X + 2;                       // 初始X坐标
	int y = POS_Y;                           // 初始Y坐标

	// 如果食物不存在，则分配内存
	if (Snake->food == NULL)
	{
		Snake->food = malloc(sizeof(Food));  // 分配食物内存
		Snake->food->score = 2;              // 设置基础分数
	}

	SN* ps = Snake->snake;                   // 指向蛇头的指针

	// 标签，用于重新生成食物位置
again:
	// 随机生成食物位置
	do {
		x = rand() % 53 + 2;                 // 生成2-54之间的随机X坐标
		y = rand() % 25 + 1;                 // 生成1-25之间的随机Y坐标
	} while (x % 2 != 0);                    // 确保X坐标为偶数（保持对齐）

	// 检查食物是否与蛇身重叠
	while (ps)
	{
		if (ps->x == x && ps->y == y)        // 如果与蛇身重叠
			goto again;                      // 重新生成位置
		ps = ps->Next;                       // 检查下一个节点
	}

	// 设置食物位置并打印
	Snake->food->x = x;
	Snake->food->y = y;
	SetPos(Snake->food->x, Snake->food->y);
	wprintf(L"%c", FOOD);                    // 打印食物字符
}

/**
 * @brief 检测键盘输入并更新蛇的移动方向
 * @param Snake 指向蛇结构体的指针
 */
void CheckKeyBoard(Snake* Snake)
{
	// 检测W键（向上）且当前方向不是向下
	if ((KEY_PRESS('W')) && Snake->Dir != DOWN)
	{
		Snake->Dir = UP;                     // 设置方向为上
	}
	// 检测D键（向右）且当前方向不是向左
	else if ((KEY_PRESS('D')) && Snake->Dir != LEFT)
	{
		Snake->Dir = RIGHT;                  // 设置方向为右
	}
	// 检测S键（向下）且当前方向不是向上
	else if ((KEY_PRESS('S')) && Snake->Dir != UP)
	{
		Snake->Dir = DOWN;                   // 设置方向为下
	}
	// 检测A键（向左）且当前方向不是向右
	else if ((KEY_PRESS('A')) && Snake->Dir != RIGHT)
	{
		Snake->Dir = LEFT;                   // 设置方向为左
	}
	// 检测空格键（加速）
	else if ((KEY_PRESS(VK_SPACE)))
	{
		// 确保速度不低于最小值
		if (Snake->_SleepTime >= 80)
		{
			Snake->_SleepTime -= 30;         // 增加速度（减少睡眠时间）
			Snake->food->score += 2;         // 增加食物分数
		}
	}
	// 检测Z键（减速）
	else if ((KEY_PRESS('Z')))
	{
		// 确保速度不高于最大值
		if (Snake->_SleepTime <= 200)
		{
			Snake->_SleepTime += 30;         // 降低速度（增加睡眠时间）
			Snake->food->score -= 2;         // 减少食物分数
		}
	}
	// 检测ESC键（暂停）
	else if ((KEY_PRESS(VK_ESCAPE)))
	{
		SnakeSleep();                        // 暂停游戏
	}
	// 检测X键（退出）
	else if (KEY_PRESS('X'))
	{
		Snake->State = EXIT;                 // 设置游戏状态为退出
	}
}

/**
 * @brief 游戏暂停功能
 */
void SnakeSleep()
{
	SetPos(60, 6);
	wprintf(L"游戏暂停，按ESC继续");          // 显示暂停提示

	// 等待用户按下ESC继续游戏
	while (1)
	{
		if (KEY_PRESS(VK_ESCAPE))           // 检测ESC键
		{
			SetPos(60, 6);
			wprintf(L"                  ");  // 清除暂停提示
			return;                          // 退出暂停
		}
		Sleep(200);                         // 短暂睡眠以减少CPU占用
	}
}

/**
 * @brief 移动蛇
 * @param Snake 指向蛇结构体的指针
 */
void SnakeMove(Snake* Snake)
{
	SN* shead = malloc(sizeof(SN));          // 创建新的蛇头
	SN* ps = Snake->snake;                   // 指向当前蛇头的指针

	// 根据当前方向设置新蛇头位置
	if (Snake->Dir == UP)
	{
		shead->x = ps->x;                    // X坐标不变
		shead->y = ps->y - 1;                // Y坐标减1（向上移动）
		shead->Next = ps;                    // 连接新蛇头到原蛇身
	}
	else if (Snake->Dir == DOWN)
	{
		shead->x = ps->x;                    // X坐标不变
		shead->y = ps->y + 1;                // Y坐标加1（向下移动）
		shead->Next = ps;                    // 连接新蛇头到原蛇身
	}
	else if (Snake->Dir == RIGHT)
	{
		shead->x = ps->x + 2;                // X坐标加2（向右移动，注意宽度为2）
		shead->y = ps->y;                    // Y坐标不变
		shead->Next = ps;                    // 连接新蛇头到原蛇身
	}
	else if (Snake->Dir == LEFT)
	{
		shead->x = ps->x - 2;                // X坐标减2（向左移动，注意宽度为2）
		shead->y = ps->y;                    // Y坐标不变
		shead->Next = ps;                    // 连接新蛇头到原蛇身
	}

	// 移动到蛇尾的前一个节点
	while (ps->Next->Next)
	{
		ps = ps->Next;
	}

	// 检查是否吃到食物
	int ret = IfEatFood(Snake, shead);
	if (ret == 1)
	{
		free(shead);                         // 如果吃到食物，释放新蛇头内存
		return;                              // 直接返回（蛇身已增长）
	}

	// 清除蛇尾
	SetPos(ps->Next->x, ps->Next->y);
	wprintf(L"  ");                          // 用空格覆盖蛇尾
	free(ps->Next);                          // 释放蛇尾内存
	ps->Next = NULL;                         // 设置新的蛇尾

	// 更新蛇头并打印
	Snake->snake = shead;                    // 设置新蛇头
	SetPos(shead->x, shead->y);
	wprintf(L"%c", BODY);                    // 打印新蛇头
}

/**
 * @brief 检查蛇是否吃到食物
 * @param Snake 指向蛇结构体的指针
 * @param ps 指向蛇头节点的指针
 * @return int 1表示吃到食物，0表示未吃到
 */
int IfEatFood(Snake* Snake, SN* ps)
{
	// 检查蛇头是否与食物位置重合
	if (ps->x == Snake->food->x && ps->y == Snake->food->y)
	{
		Snake->score += Snake->food->score;  // 增加分数
		SN* shead = malloc(sizeof(SN));      // 创建新蛇头
		shead->x = Snake->food->x;           // 设置新蛇头位置为食物位置
		shead->y = Snake->food->y;
		shead->Next = Snake->snake;          // 连接新蛇头到原蛇身
		Snake->snake = shead;                // 更新蛇头指针
		CreateFood(Snake);                   // 创建新食物
		SetPos(shead->x, shead->y);
		wprintf(L"%c", BODY);                // 打印新蛇头
		return 1;                            // 返回吃到食物
	}
	return 0;                                // 返回未吃到食物
}

/**
 * @brief 检查游戏是否结束
 * @param Snake 指向蛇结构体的指针
 *
 * 检查蛇是否撞墙或撞到自己
 */
void IfLose(Snake* Snake)
{
	// 检查是否撞到左右边界或上下边界
	if (Snake->snake->x == 0 || Snake->snake->x == 56 ||
		(Snake->snake->y == 0) || (Snake->snake->y == 26))
	{
		Snake->State = DEAD;                 // 设置游戏状态为死亡
		return;
	}

	// 检查是否撞到自己
	SN* ps = Snake->snake->Next;             // 从蛇头后第一个节点开始检查
	while (ps)
	{
		// 检查蛇头是否与身体节点重合
		if (Snake->snake->x == ps->x && Snake->snake->y == ps->y)
		{
			Snake->State = DEAD;             // 设置游戏状态为死亡
			return;
		}
		ps = ps->Next;                       // 检查下一个节点
	}
}

/**
 * @brief 更新游戏状态
 * @param Snake 指向蛇结构体的指针
 */
void UpdataGame(Snake* Snake)
{
	char ch;
	// 标签，用于游戏结束后重新开始
again:
	SetPos(1, 28);
	system("pause");                         // 暂停等待用户按键
	SetPos(1, 28);
	// 清除暂停提示
	for (int i = 0; i < 20; i++)
		printf(" ");

	// 游戏主循环
	do
	{
		SetPos(64, 10);
		printf("得分：%d", Snake->score);     // 显示当前分数
		SetPos(64, 11);
		printf("每个食物得分: %d 分", Snake->food->score);  // 显示当前食物分数
		CheckKeyBoard(Snake);                // 检测键盘输入
		if (Snake->State != ING)             // 检查游戏状态
			break;                           // 如果游戏结束，退出循环
		SnakeMove(Snake);                    // 移动蛇
		IfLose(Snake);                       // 检查是否游戏结束
		Sleep(Snake->_SleepTime);            // 控制游戏速度
	} while (Snake->State == ING);           // 游戏进行中循环
}

/**
 * @brief 结束游戏，释放资源
 * @param Snake 指向蛇结构体的指针
 */
void EndGame(Snake* Snake)
{
	SN* ps = Snake->snake;                   // 指向蛇头的指针
	SN* pn = ps;                             // 临时指针

	// 遍历蛇身链表，释放所有节点内存
	while (ps)
	{
		pn = pn->Next;                       // 保存下一个节点指针
		free(ps);                            // 释放当前节点内存
		ps = pn;                             // 移动到下一个节点
	}
	Snake->snake = NULL;                     // 设置蛇头指针为空

	// 释放食物内存
	if (Snake->food != NULL) {
		free(Snake->food);
		Snake->food = NULL;                  // 设置食物指针为空
	}
}

/**
 * @brief 游戏主循环
 * @param Snake 指向蛇结构体的指针
 */
void Gaming(Snake* Snake)
{
	srand(time(NULL));                       // 设置随机数种子
	setlocale(LC_ALL, "");                   // 设置本地化，支持宽字符打印
	int input = 0;                           // 用户输入

	// 标签，用于游戏结束后重新开始
again:
	InitGame(Snake);                         // 初始化游戏
	UpdataGame(Snake);                       // 更新游戏状态（主游戏循环）
	SaveScore(Snake);                        // 保存最高分
	EndGame(Snake);                          // 结束游戏，释放资源

	// 检查游戏退出状态
	if (Snake->State == EXIT)
	{
		return;                              // 如果是主动退出，直接返回
	}

	// 游戏结束处理
	SetPos(1, 28);
	system("pause");                         // 暂停等待用户按键
	printf("你输了,是否重玩?(1/0)");         // 提示用户选择
	scanf("%d", &input);                     // 读取用户输入
	ClearInputBuffer();                      // 清空输入缓冲区

	// 检查用户选择
	if (input == 1)
	{
		Snake->State = ING;                  // 重置游戏状态
		goto again;                          // 重新开始游戏
	}
	SetPos(1, 28);
}

/**
 * @brief 保存最高分数到文件
 * @param Snake 指向蛇结构体的指针
 */
void SaveScore(Snake* Snake)
{
	// 检查当前分数是否高于最高分
	if (Snake->score > Snake->Best_Score)
	{
		FILE* pw = fopen("score.txt", "w");  // 以写入方式打开文件
		fprintf(pw, "%zu", Snake->score);    // 写入新最高分
		fclose(pw);                          // 关闭文件
	}
}

/**
 * @brief 清空输入缓冲区
 */
void ClearInputBuffer()
{
	int c;
	// 读取并丢弃缓冲区中的所有字符，直到遇到换行符或文件结束符
	while ((c = getchar()) != '\n' && c != EOF);
}