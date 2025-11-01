#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void InitStack(st* ps)
{
	ps->data = malloc(sizeof(sd));
	ps->data->next = NULL;
	ps->num = 0;
}

void StackPush(st* ps)
{
	STDataType n = 0;
	printf("请输入数据->");
	scanf(FORMAT, &n);
	sd* cur = ps->data;
	for (int i = 0; i < ps->num; i++)
	{
		cur = cur->next;
	}
	sd* newtype = malloc(sizeof(sd));
	assert(newtype);
	newtype->next = NULL;
	newtype->data = n;
	cur->next = newtype;
	ps->num++;
	StackPrint(ps);
}

void StackPop(st* ps)
{
	sd* cur = ps->data;
	for (int i = 0; i < ps->num; i++)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
	ps->num--;
	StackPrint(ps);
}

void StackTop(st* ps)
{
	StackPrint(ps);
	if (ps->num == 0)
	{
		printf("栈中无数据\n");
		return;
	}
	sd* cur = ps->data;
	for (int i = 0; i < ps->num; i++)
	{
		cur = cur->next;
	}
	printf(PRINT_FORMAT, cur->data);
	printf("\n");
}

void StackPrint(st* ps)
{
	system("cls");
	printf("Head->");
	sd* cur = ps->data->next;
	for (int i = 0; i < ps->num; i++)
	{
		printf(PRINT_FORMAT,cur->data);
		printf("->");
		cur = cur->next;
	}
	printf("Tail\n");
	printf("******************************\n");
	printf("** 1.StackPush   2.StackPop **\n");
	printf("** 3.StackTop    0.exit     ** \n");
	printf("******************************\n");
}

void StackBreak(st* ps)
{
	sd* cur = ps->data;
	while (cur != NULL)
	{
		sd* nex = cur->next;
		free(cur);
		cur = nex;
	}
}
