#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

typedef char STDataType;
#define FORMAT " %c"
#define PRINT_FORMAT "%c"

typedef struct Queue {
	struct Data* Front;//头节点
	struct Data* Rear;//尾节点
}qu;

typedef struct Data {
	STDataType data;
	struct Data* next;
}Data;

void InitQueue(qu* ps);//初始化队列
void QueuePush(qu* ps);//入队
void QueuePop(qu* ps);//出队
void QueueFront(qu* ps);//头部数据打印
void QueuePrint(qu* ps);//队列的打印
void QueueBreak(qu* ps);//队列的销毁