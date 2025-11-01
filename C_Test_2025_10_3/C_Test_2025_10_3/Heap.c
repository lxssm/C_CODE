#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapInit(Heap* php)
{
	php->data = malloc(sizeof(HPDataType) * 4);
	assert(php->data);
	php->size = 0;
	php->capacity = 4;
}

void AdjustUp(Heap* php, int child)
{
	int father = (child - 1) / 2;
	while (child>0)
	{
		if (php->data[father] > php->data[child])
		{
			Swap(&php->data[father], &php->data[child]);
			child = father;
			father = (father - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapCheck(Heap* php)
{
	assert(php);
	if (php->capacity == php->size)
	{
		php->data = realloc(php->data, sizeof(HPDataType) * 2 * php->capacity);
		assert(php->data);
		php->capacity  *= 2;
	}
}

void UnAutoHeapPush(Heap* php,HPDataType num)
{
	assert(php);
	HeapCheck(php);
	php->data[php->size] = num;
	php->size++;
}