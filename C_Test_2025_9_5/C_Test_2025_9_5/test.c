#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void menu()
{
    printf("1.SListPushFront  2.SListPushBack\n");
    printf("3.SListPopFront   4.SLsitPopBack\n");
    printf("5.SListInsert     6.SListDelete\n");
    printf("7.SListReversePrint\n");  // 新增反向打印选项
    printf("0.exit\n");
}

int main()
{
    LL* phead = NULL;
    phead = InitSList();
    int input = 0;
    SLDataType n = 0;
    int pose = 0;
    SListPrint(&phead);
    do {
        menu();
        printf("请选择->\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            scanf("%d", &n);
            SListPushFront(&phead, n);
            break;
        case 2:
            scanf("%d", &n);
            SListPushBack(&phead, n);
            break;
        case 3:
            SListPopFront(&phead);
            break;
        case 4:
            SListPopBack(&phead);
            break;
        case 5:
            scanf("%d %d", &pose, &n);
            SListInsert(&phead, pose, n);
            break;
        case 6:
            scanf("%d", &pose);
            SListDelete(&phead, pose);
            break;
        case 7:
            SListReversePrint(&phead);  // 调用反向打印
            break;
        case 0:
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (input);
    SListBreak(&phead);
    return 0;
}
