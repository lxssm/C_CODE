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
void HeapDestory(Heap* php);
void AutoHeapPush(Heap* php);
void AutoHeapPop(Heap* php);
void AutoHeapTopK(Heap* php);
void UnAutoHeapTopK(Heap* php, int n);
void HeapCheck(Heap* php);
void HeapPrint(Heap* php);
void AdjustUp(Heap* php, int child);
void AdjustDown(Heap* php, int size, int father);
void HeapSort(Heap* php);
void Swap(HPDataType* x, HPDataType* y);
void UnAutoHeapPush(Heap* php,HPDataType num);
void UnAutoHeapPop(Heap* php);
void HeapFILEPush(Heap* php);
void CreateNDate();
