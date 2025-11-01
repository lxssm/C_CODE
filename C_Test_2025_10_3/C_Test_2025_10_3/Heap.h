#pragma once
#include <stdio.h>
#include <assert.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

typedef int HPDataType;
#define FORMAT "%d"
#define PRINT_FORMAT "%d"
typedef struct Heap
{
	HPDataType* data;
	int  size;
	int  capacity;
}Heap;

void HeapInit(Heap* php);
void HeapCheck(Heap* php);
void AdjustUp(Heap* php, int child);
void UnAutoHeapPush(Heap* php,HPDataType num);