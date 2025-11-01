#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

// 全局变量：游戏设置
int row = 10;     // 默认行数
int col = 10;     // 默认列数
int debug = 0;    // 默认关闭调试模式
int num = 10;     // 默认地雷数量

// 游戏主函数
void game()
{
    int ret = 2;  // 游戏状态：2-进行中，1-胜利，0-失败
    int x = 0, y = 0;  // 玩家输入的坐标
    char action;       // 玩家操作：C-揭开，F-插旗

    int hide[rows][cols];  // 隐藏矩阵（存储地雷和数字）
    char show[rows][cols]; // 显示矩阵（玩家看到的界面）

    initgame(hide, show, row, col, num);  // 初始化游戏

    // 游戏主循环
    do {
        print(hide, show, row, col, debug);  // 打印游戏界面

        printf("操作说明：C-揭开, F-插旗/取消插旗\n");
        printf("格式：C 3 4 或 F 3 4\n");

    again:
        printf("请输入操作和坐标->");
        scanf(" %c %d %d", &action, &x, &y);  // 读取操作和坐标

        // 转换为大写，方便处理
        if (action >= 'a' && action <= 'z')
            action = action - 'a' + 'A';

        // 检查坐标是否有效
        if (x < 1 || x > row || y < 1 || y > col)
        {
            printf("输入错误\n");
            goto again;
        }

        // 处理玩家操作
        if (action == 'F')  // 插旗操作
        {
            flag(show, x, y, row, col);
        }
        else if (action == 'C')  // 揭开操作
        {
            update(hide, show, &x, &y, row, col, &ret);
        }
        else
        {
            printf("操作类型错误，请使用 C 或 F\n");
            goto again;
        }

    } while (checkwin(hide, show, &x, &y, row, col, num, &ret));  // 检查游戏状态

    // 游戏结束，显示最终界面和结果
    update(hide, show, &x, &y, row, col, &ret);
    print(hide, show, row, col, debug);

    if (ret == 1)
        printf("你赢了\n");
    else
        printf("你输了\n");
}

// 游戏设置函数
void settings()
{
    system("cls");
    printf("************************\n");
    printf("****  1.debug mode  ****\n");
    printf("****  2.change num  ****\n");
    printf("****  0.exit        ****\n");
    printf("************************\n");

    int input = 0;
    do {
        printf("请选择->");
        scanf("%d", &input);

        switch (input)
        {
        case 1:  // 切换调试模式
            if (debug == 0)
            {
                debug = 1;
                printf("作弊模式开启\n");
            }
            else
            {
                debug = 0;
                printf("作弊模式关闭\n");
            }
            break;
        case 2:  // 修改游戏参数
            printf("请依次输入 行 列 炸弹数量\n");
            printf("行列不大于100,不小于10;炸弹数量不大于界面面积\n");
            printf("->");

        again:
            scanf(" %d %d %d", &row, &col, &num);

            // 检查输入是否有效
            if (row >= 10 && row <= 100 && col >= 10 && col <= 100 && num > 0 && num <= row * col)
            {
                printf("选择成功\n");
            }
            else
            {
                printf("选择错误\n");
                goto again;
            }
            break;
        case 0:  // 退出设置
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);  // 循环直到选择退出
   system("cls");
}

// 主函数
int main()
{
    int input = 1;

    do
    {
        menu();  // 显示主菜单
        printf("请选择->\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:  // 开始游戏
            game();
            break;
        case 2:  // 进入设置
            settings();
            break;
        case 0:  // 退出游戏
            printf("退出游戏\n");
            break;
        default:
            system("cls");
            printf("选择错误\n");
        }
    } while (input);  // 循环直到选择退出

    return 0;
}