#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

size_t count = 0;  // 全局变量，记录节点数（不包括头节点）

LL* InitSList()
{
    LL* phead = malloc(sizeof(LL));
    assert(phead);
    phead->Data = 0;  // 头节点数据无效，可设为0
    phead->Prev = NULL;
    phead->Next = NULL;
    count = 0;  // 初始化count为0
    return phead;
}

void SListPushFront(LL** phead, SLDataType n)
{
    LL* new_node = malloc(sizeof(LL));
    assert(new_node);
    new_node->Data = n;
    new_node->Prev = *phead;  // 新节点的Prev指向头节点
    new_node->Next = (*phead)->Next;  // 新节点的Next指向头节点的Next

    if ((*phead)->Next != NULL) {
        (*phead)->Next->Prev = new_node;  // 如果存在下一个节点，设置其Prev指向新节点
    }
    (*phead)->Next = new_node;  // 头节点的Next指向新节点
    count++;
    SListPrint(phead);
}

void SListPushBack(LL** phead, SLDataType n)
{
    LL* new_node = malloc(sizeof(LL));
    assert(new_node);
    new_node->Data = n;
    new_node->Next = NULL;

    LL* pfind = *phead;
    while (pfind->Next != NULL) {
        pfind = pfind->Next;
    }
    pfind->Next = new_node;
    new_node->Prev = pfind;  // 设置新节点的Prev指向最后一个节点
    count++;
    SListPrint(phead);
}

void SListPrint(LL** phead)
{
    assert(*phead);
    system("cls");
    LL* pl = (*phead)->Next;  // 跳过头节点，从第一个数据节点开始
    printf("phead->");
    while (pl) {
        printf("%d->", pl->Data);
        pl = pl->Next;
    }
    printf("phead");
    printf("\n");
}

void SListReversePrint(LL** phead)
{
    assert(*phead);
    system("cls");
    LL* pl = *phead;
    // 找到最后一个节点
    while (pl->Next != NULL) {
        pl = pl->Next;
    }
    // 从最后一个节点向前遍历，直到头节点
    while (pl != *phead) {
        printf("%d->", pl->Data);
        pl = pl->Prev;
    }
    printf("NULL\n");  // 打印结束标志
}

void SListBreak(LL** phead)
{
    assert(*phead);
    LL* pl = *phead;
    LL* pn = NULL;
    while (pl != NULL) {
        pn = pl->Next;
        free(pl);
        pl = pn;
    }
    *phead = NULL;
    count = 0;  // 重置count
}

void SListInsert(LL** phead, int pose, SLDataType n)
{
    assert(*phead);
    if (pose < 1 || pose > count + 1) {
        printf("位置错误\n");
        return;
    }
    LL* new_node = malloc(sizeof(LL));
    assert(new_node);
    new_node->Data = n;

    LL* pl = *phead;
    // 找到插入位置的前一个节点（第pose-1个节点）
    for (int i = 0; i < pose - 1; i++) {
        pl = pl->Next;
    }
    new_node->Next = pl->Next;
    new_node->Prev = pl;
    if (pl->Next != NULL) {
        pl->Next->Prev = new_node;
    }
    pl->Next = new_node;
    count++;
    SListPrint(phead);
}

void SListDelete(LL** phead, int pose)
{
    assert(*phead);
    if (pose < 1 || pose > count) {
        printf("位置错误\n");
        return;
    }
    LL* pl = *phead;
    // 找到要删除的节点（第pose个节点）
    for (int i = 0; i < pose; i++) {
        pl = pl->Next;
    }
    pl->Prev->Next = pl->Next;  // 前驱节点的Next指向pl的Next
    if (pl->Next != NULL) {
        pl->Next->Prev = pl->Prev;  // 后继节点的Prev指向pl的Prev
    }
    free(pl);
    count--;
    SListPrint(phead);
}

void SListPopBack(LL** phead)
{
    assert(*phead);
    if (count == 0) {
        printf("链表为空，无法PopBack\n");
        return;
    }
    LL* pl = *phead;
    while (pl->Next != NULL) {
        pl = pl->Next;
    }
    pl->Prev->Next = NULL;  // 前驱节点的Next设为NULL
    free(pl);
    count--;
    SListPrint(phead);
}

void SListPopFront(LL** phead)
{
    assert(*phead);
    if (count == 0) {
        printf("链表为空，无法PopFront\n");
        return;
    }
    LL* pl = (*phead)->Next;  // 第一个数据节点
    (*phead)->Next = pl->Next;
    if (pl->Next != NULL) {
        pl->Next->Prev = *phead;
    }
    free(pl);
    count--;
    SListPrint(phead);
}
