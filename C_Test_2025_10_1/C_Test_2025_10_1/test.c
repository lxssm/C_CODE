#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"


void AutoHeap()
{
	Heap SmallHeap = { 0 };
	void (*Hp[4])(Heap*) = { NULL,AutoHeapPush,AutoHeapPop,AutoHeapTopK };
	HeapInit(&SmallHeap);
	HeapPrint(&SmallHeap);
	int input = 0;
	do {
		printf("«Î ‰»Î->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		case 2:
		case 3:
			Hp[input](&SmallHeap);
			break;
		case 0:
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ\n");
			break;
		}
	} while (input);
	HeapDestory(&SmallHeap);
	return 0;
}

void UnAutoHeap()
{
	Heap SmallHeap = { 0 };
	HeapInit(&SmallHeap);
	CreateNDate();
	HeapFILEPush(&SmallHeap);
	/*HeapSort(&SmallHeap);*/
	UnAutoHeapTopK(&SmallHeap, 10);
	HeapPrint(&SmallHeap);
	HeapDestory(&SmallHeap);
}

int main()
{
	UnAutoHeap();
}