#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <assert.h>

typedef char STDataType;
#define FORMAT " %c"
#define PRINT_FORMAT "%c"
typedef struct Stack {
	struct StackData* data;
	size_t num;
}st;

typedef struct StackData {
	STDataType data;
	struct StackData* next;
}sd;

void InitStack(st* ps);
void StackPush(st* ps);
void StackPop(st* ps);
void StackTop(st* ps);
void StackPrint(st* ps);
void StackBreak(st* ps);
