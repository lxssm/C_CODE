#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;
#define FORMAT "%d"
#define PRINT_FORMAT "%d "

typedef struct Queue {
	struct QueueData* Head;//数组库
	size_t Front;//头节点
	size_t Rear;//尾节点
	size_t Capacity;//队列容量
	size_t Size;//有效数据个数
}Queue;

typedef struct QueueData {
	STDataType data;
}Data;

void InitQueue(Queue* ps);//初始化队列
void QueuePush(Queue* ps,  STDataType num);//入队
void QueuePop(Queue* ps);//出队
void QueueTop(Queue* ps);//头数据打印
void QueuePrint(Queue* ps);//整个队列的打印
void QueueBreak(Queue* ps);//队列的销毁
