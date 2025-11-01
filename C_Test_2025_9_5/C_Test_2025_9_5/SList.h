#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>

typedef int SLDataType;

typedef struct LinkedList {
    SLDataType Data;
    struct LinkedList* Prev;
    struct LinkedList* Next;
} LL;

extern size_t count;  // 声明全局变量count

LL* InitSList();
void SListPushFront(LL** phead, SLDataType n);
void SListPushBack(LL** phead, SLDataType n);
void SListPrint(LL** phead);
void SListReversePrint(LL** phead);  // 新增反向打印函数
void SListBreak(LL** phead);
void SListInsert(LL** phead, int pose, SLDataType n);
void SListDelete(LL** phead, int pose);
void SListPopBack(LL** phead);
void SListPopFront(LL** phead);


