#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void InitQueue(Queue* ps)
{
	ps->Head = malloc(4 * sizeof(Data));
	ps->Front = 0;
	ps->Rear = -1;
	ps->Capacity = 4;
	ps->Size = 0;
}

void QueueCheck(Queue* ps)
{
	assert(ps);
	if (ps->Size == ps->Capacity)
	{
		Data* NewQueue = realloc(ps->Head, sizeof(Data)*ps->Capacity*2);
		assert(NewQueue);
		ps->Head= NewQueue;
		ps->Capacity *= 2;
	}
}

void QueuePush(Queue* ps,STDataType num)
{
	assert(ps);
	QueueCheck(ps);
	ps->Rear = (ps->Rear + 1) % (ps->Capacity);
	ps->Head[ps->Rear].data = num;
	ps->Size++;
}

void QueuePop(Queue* ps)
{
	assert(ps);
	if (ps->Front == ps->Rear)
	{
		printf("队列中无数据\n");
		QueuePrint(ps);
		return;
	}
	ps->Front++;
	ps->Size--;
}

void QueueTop(Queue* ps)
{
	assert(ps);
	printf(PRINT_FORMAT"\n", ps->Head[ps->Front]);
}

void QueuePrint(Queue* ps)
{
	system("cls");
	assert(ps);
	printf("Head->");
	size_t count = 0;
	for (int i = ps->Front; count!=ps->Size;i = (i+1)%(ps->Capacity))
	{
		printf(PRINT_FORMAT"->", ps->Head[i].data);
		count++;
	}
	printf("Tair\n");
	printf("*******************************\n");
	printf("** 1.QueuePush   2.QueuePop **\n");
	printf("** 3.QueueTop    0.exit      ** \n");
	printf("*******************************\n");
}

void QueueBreak(Queue* ps)
{
	assert(ps);
	free(ps->Head);
}
