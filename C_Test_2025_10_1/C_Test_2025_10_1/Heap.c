#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapInit(Heap* php)
{
	php->data = malloc(sizeof(HPDataType) * 4);
	assert(php->data);
	php->size = 0;
	php->capacity = 4;
}

void HeapDestory(Heap* php)
{
	assert(php);
	free(php->data);
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

void AdjustDown(Heap* php, int size, int father)
{
	int child = father * 2 + 1;
	while (child <= size - 1)
	{
		if (child != size - 1)
		{
			child = php->data[child] < php->data[child + 1] ? child : child+1;
		}
		if (php->data[father] > php->data[child])
		{
			Swap(&php->data[father], &php->data[child]);
			father = child;
			child = child * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


void Swap(HPDataType* x, HPDataType* y)
{
	HPDataType tmp = *x;
	*x = *y;
	*y = tmp;
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

void AutoHeapPush(Heap* php)
{
	HeapCheck(php);
	printf("请输入->");
	HPDataType num = 0;
	scanf(FORMAT, &num);
	php->data[php->size] = num;
	php->size++;
	AdjustUp(php, php->size-1);
	HeapSort(php);
	HeapPrint(php);
}

void UnAutoHeapPush(Heap* php,HPDataType num)
{
	assert(php);
	HeapCheck(php);
	php->data[php->size] = num;
	php->size++;
}


void UnAutoHeapPop(Heap* php)
{
	assert(php);
	if (php->size == 0)
	{
		printf("堆中无数据\n");
		return;
	}
	php->size--;
}

void AutoHeapPop(Heap* php)
{
	assert(php);
	if (php->size == 0)
	{
		printf("堆中无数据\n");
		return;
	}
	Swap(&php->data[0], &php->data[php->size - 1]);
	php->size--;
	AdjustDown(php, php->size, 0);
	HeapSort(php);
	HeapPrint(php);
}

void HeapFILEPush(Heap* php)
{
	assert(php);
	FILE* pf = fopen("data.txt", "r");
	assert(pf);
	HPDataType num = 0;
	while (fscanf(pf, FORMAT, &num) != EOF)
	{
		UnAutoHeapPush(php, num);
	}
}


void HeapPrint(Heap* php)
{
	system("cls");
	for (int i = 0; i < php->size;i++)
	{
		printf(PRINT_FORMAT, php->data[i]);
		printf(" ");
	}
	printf("\n");
	printf("******************************\n");
	printf("** 1.HeapPush   2.HeapPop   **\n");
	printf("** 3.HeapTopK    0.exit     ** \n");
	printf("******************************\n");
}

void HeapSort(Heap* php)
{
	for (int i = (php->size - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(php, php->size, i);
	}

	int size = php->size;
	while (size)
	{
		Swap(&php->data[0], &php->data[size - 1]);
		size--;
		AdjustDown(php, size, 0);
	}
}
void CreateNDate()
{
	int n = 10000;
	srand(time(NULL));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand();
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

void AutoHeapTopK(Heap* php)
{
	printf("请输入->");
	int input = 0;
	scanf("%d", &input);
	HeapPrint(php);
	for (int i = 0; i < input; i++)
	{
		printf("%d ", php->data[i]);
	}
	printf("\n");
}

void UnAutoHeapTopK(Heap* php, int n)
{
	php->data = malloc(sizeof(HPDataType) * n);
	php->capacity == 10;
	php->size = 10;
	FILE* pf = fopen("data.txt", "r");
	assert(pf);
	HPDataType num = 0;
	while (fscanf(pf, FORMAT, &num)!=EOF)
	{
		if (num > php->data[0])
		{
			php->data[0] = num;
			AdjustDown(php,10,0);
		}
	}
	HeapSort(php);
}