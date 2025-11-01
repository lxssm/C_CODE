#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void InitQueue(qu* ps)
{
	assert(ps);
	ps->Front = malloc(sizeof(Data));
	ps->Front->data = 0;
	ps->Front->next = NULL;
	ps->Rear = ps->Front;
}

void QueuePush(qu* ps)
{
	assert(ps);
	printf("ÇëÊäÈëÊý¾Ý->");
	STDataType num = 0;
	Data* head = ps->Front;
	scanf(FORMAT, &num);
	Data* newtype = malloc(sizeof(Data));
	assert(newtype);
	newtype->data = num;
	newtype->next = NULL;
	ps->Rear = newtype;
	if (ps->Front->next == NULL)
	{
		ps->Front->next = newtype;
		QueuePrint(ps);
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = ps->Rear;
	QueuePrint(ps);
}

void QueuePop(qu* ps)
{
	assert(ps);
	Data* tmp = ps->Front->next;
	ps->Front->next = tmp->next;
	free(tmp);
	QueuePrint(ps);
}

void QueueFront(qu* ps)
{
	assert(ps);
	QueuePrint(ps);
	printf(PRINT_FORMAT"\n", ps->Front->next->data);
}

void QueuePrint(qu* ps)
{
	system("cls");
	assert(ps);
	printf("Head->");
	Data* head = ps->Front->next;
	while (head != NULL)
	{
		printf(PRINT_FORMAT"->", head->data);
		head = head->next;
	}
	printf("Tail\n");
	printf("*******************************\n");
	printf("** 1.QueuePush   2.QueuePop **\n");
	printf("** 3.QueueTop    0.exit      ** \n");
	printf("*******************************\n");
}

void QueueBreak(qu* ps)
{
	assert(ps);
	Data* head = ps->Front;
	while (head != NULL)
	{
		Data* nex = head->next;
		free(head);
		head = nex;
	}
}