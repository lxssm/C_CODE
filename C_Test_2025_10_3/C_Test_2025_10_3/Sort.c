#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
#include "Stack.h"
#include "Heap.h"

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void Print(int* arr, size_t len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void BubbleSort(int* arr, size_t len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void InsertSort(int* arr, size_t len)
{
	for (int i = 0; i < len-1; i++)
	{
		int tmp = arr[i + 1];
		int left = i;
		while(left>=0)
		{
			if (arr[left] > tmp)
			{
				arr[left + 1] = arr[left];
			}
			else
			{
				break;
			}
			left--;
		}
		arr[left+1] = tmp;
	}
}

void ShellSort(int* arr, size_t len)
{
	int gap = (int)len;
	while (gap > 1)
	{
		gap = (gap / 3) + 1;
		for (int i = 0; i < len - gap; i++)
		{
			int tmp = arr[i+gap];
			int j = i;
			while (j >= 0)
			{
				if (arr[j] > tmp)
				{
					arr[j + gap] = arr[j];
				}
				else
				{
					break;
				}
				j -= gap;
			}
			arr[j + gap] = tmp;
		}
	}
}

void SelectSort(int* arr, size_t len)
{
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		for (int i = left; i <= right; i++)
		{
			if (arr[i] < arr[left])
			{
				Swap(&arr[i], &arr[left]);
			}
			if (arr[i] > arr[right])
			{
				Swap(&arr[i], &arr[right]);
			}
		}
		left++;
		right--;
	}
}

void QuickSort(int* arr, size_t left, size_t right)
{
	if (left >= right)
	{
		return;
	}
	if (right - left < 10)
	{
		InsertSort(arr + left, right - left + 1);
		return;
	}
	size_t begin = left;
	size_t end = right;
	size_t cur = begin + 1;
	size_t key = left;
	while (cur <= end)
	{
		if (arr[cur] < arr[key])
		{
			Swap(&arr[cur], &arr[key]);
			key++;
			cur++;
		}
		else if (arr[cur] > arr[key])
		{
			Swap(&arr[cur], &arr[end]);
			end--;
		}
		else
		{
			cur++;
		}
	}
 	QuickSort(arr, left, key);
	QuickSort(arr, cur , right);
}

void PartSort(int* arr, size_t left, size_t right)
{
	size_t prev = left;
	size_t cur = prev + 1;
	if (left >= right || cur > right)
	{
		return;
	}
	size_t key = left;
	while (cur <= right)
	{
		if (arr[cur] < arr[key] && ++prev != cur)
		{
			Swap(&arr[cur], &arr[prev]);
		}
		cur++;
	}
	Swap(&arr[key], &arr[prev]);
	key = prev;
	if (key > left)
		PartSort(arr, left, key - 1);
	if (key < right)
		PartSort(arr, key + 1, right);
}

void QuickSortNonR(int* arr, size_t left, size_t right)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, left);
	StackPush(&st, right);
	while (st.size)
	{
		size_t r = StackTop(&st);
		StackPop(&st);
		size_t l = StackTop(&st);
		StackPop(&st);
		size_t key = l;
		size_t prev = l;
		size_t cur = prev+1;
		if (l >= r || cur > r)
		{
			continue;
		}
		while (cur <= r)
		{
			if (arr[cur] < arr[key] && ++prev != cur)
			{
				Swap(&arr[cur], &arr[prev]);
			}
			cur++;
		}
		Swap(&arr[key], &arr[prev]);
		key = prev;
		if (key < r)
		{
			StackPush(&st, key+1);
			StackPush(&st, r);
		}
		if (key > l)
		{
			StackPush(&st, l);
			StackPush(&st, key-1);
		}
	}
	StackDestroy(&st);
}

void _MergeSort(int* arr, int* tmp, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	_MergeSort(arr, tmp, left, mid);
	_MergeSort(arr, tmp, mid+1, right);
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid+1;
	int end2 = right;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[i] = arr[begin1];
			begin1++;
		}
		else
		{
			tmp[i] = arr[begin2];
			begin2++;
		}
		i++;
	}
	while (begin1 <= end1)
	{
		tmp[i] = arr[begin1];
		begin1++;
		i++;
	}
	while (begin2 <= end2)
	{
		tmp[i] = arr[begin2];
		begin2++;
		i++;
	}
	memcpy(arr + left, tmp + left, sizeof(int) * (right - left + 1));
}


void MergeSort(int* arr,  int len)
{
	int* tmp = malloc(sizeof(int) * len);
	assert(tmp);
	_MergeSort(arr, tmp, 0, len - 1);
	free(tmp);
}

void MergeSortNonR(int* arr, int len)
{
	int* tmp = malloc(sizeof(int) * len);
	int gap = 1;
	while (gap < len)
	{
		for (int j = 0; j < len - gap; j += 2*gap)
		{
			int begin1 = j;
			int end1 = j + gap-1;
			int begin2 = end1 + 1;
			int end2 = (begin2 + gap > len) ? len - 1:begin2 + gap-1;
			int i = j;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (arr[begin1] < arr[begin2])
				{
					tmp[i] = arr[begin1];
					begin1++;
				}
				else
				{
					tmp[i] = arr[begin2];
					begin2++;
				}
				i++;
			}
			while (begin1 <= end1)
			{
				tmp[i] = arr[begin1];
				begin1++;
				i++;
			}
			while (begin2 <= end2)
			{
				tmp[i] = arr[begin2];
				begin2++;
				i++;
			}
			memcpy(arr + j, tmp + j, sizeof(int) * (end2 - j + 1));
		}
		gap *= 2;
	}
	free(tmp);
}

void CountSort(int* arr, int len)
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] >max)
		{
			max = arr[i];
		}
	}
	int range = max - min + 1;
	int* tmp = calloc(range, sizeof(int));
	for (int i = 0; i < len; i++)
	{
		tmp[arr[i] - min]++;
	}
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (tmp[i]--)
		{
			arr[j] = i+ min;
			j++;
		}
	}
	free(tmp);
}

void AdjustDown(Heap* php, int size, int father)
{
	int child = father * 2 + 1;
	while (child <= size - 1)
	{
		if (child != size - 1)
		{
			child = php->data[child] > php->data[child + 1] ? child : child + 1;
		}
		if (php->data[father] < php->data[child])
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

void HeapSort(int* arr, int len)
{
	Heap* php = malloc(sizeof(Heap));
	php->data = arr;
	php->size = len;
	php->capacity = len;
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
	free(php);
}