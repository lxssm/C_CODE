#define  _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
#include "Stack.h"
#include "Heap.h"

void BubbleSortTest(int* arr, int len)
{
	int begin = clock();
	BubbleSort(arr, len);
	int end = clock();
	printf("BubbleSort:%d\n", end - begin);
	//Print(arr, len);
}

void InsertSortTest(int* arr, int len)
{
	int begin = clock();
	InsertSort(arr, len);
	int end = clock();
	printf("InsertSort:%d\n", end - begin);
	//Print(arr, len);
}

void ShellSortTest(int* arr, int len)
{
	int begin = clock();
	ShellSort(arr, len);
	int end = clock();
	printf("ShellSort:%d\n", end - begin);
	//Print(arr, len);
}

void SelectSortTest(int* arr, int len)
{
	int begin = clock();
	SelectSort(arr, len);
	int end = clock();
	printf("SelectSort:%d\n", end - begin);
	/*Print(arr, len);*/
}

void QuickSortTest(int* arr, int len)
{
	int begin = clock();
	QuickSort(arr, 0,len-1);
	int end = clock();
	printf("QuickSort:%d\n", end - begin);
	//Print(arr, len);
}

void PartSortTest(int* arr, int len)
{
	int begin = clock();
	PartSort(arr, 0,len-1);
	int end = clock();
	printf("PartSort:%d\n", end - begin);
	//Print(arr, len);
}

void QuickSortNonRTest(int* arr, int len)
{
	int begin = clock();
	QuickSortNonR(arr, 0, len - 1);
	int end = clock();
	printf("QuickSortNonR:%d\n", end - begin);
	//Print(arr, len);
}

void MergeSortTest(int* arr, int len)
{
	int begin = clock();
	MergeSort(arr,len);
	int end = clock();
	printf("MergeSort:%d\n", end - begin);
	//Print(arr, len);
}

void MergeSortNonRTest(int* arr, int len)
{
	int begin = clock();
	MergeSortNonR(arr, len);
	int end = clock();
	printf("MergeSortNonR:%d\n", end - begin);
	//Print(arr, len);
}

void CountSortTest(int* arr, int len)
{
	int begin = clock();
	CountSort(arr, len);
	int end = clock();
	printf("CountSort:%d\n", end - begin);
	//Print(arr, len);
}

void HeapSortTest(int* arr, int len)
{
	int begin = clock();
	HeapSort(arr, len);
	int end = clock();
	printf("HeapSort:%d\n", end - begin);
	//Print(arr, len);
}




int main()
{
	int len = 10000000;
	int* arr1 = malloc(sizeof(int) * len);
	int* arr2 = malloc(sizeof(int) * len);
	int* arr3 = malloc(sizeof(int) * len);
	int* arr4 = malloc(sizeof(int) * len);
	int* arr5 = malloc(sizeof(int) * len);
	int* arr6 = malloc(sizeof(int) * len);
	int* arr7 = malloc(sizeof(int) * len);
	int* arr8 = malloc(sizeof(int) * len);
	int* arr9 = malloc(sizeof(int) * len);
	int* arr10 = malloc(sizeof(int) * len);
	int* arr11 = malloc(sizeof(int) * len);

	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		int num = rand();
		arr1[i] = arr2[i] = arr3[i] = arr4[i] = arr5[i] = arr6[i] =arr7[i] = arr8[i] =  arr9[i]= arr10[i] = arr11[i] =num;
	}
	//BubbleSortTest(arr1,len);
	//InsertSortTest(arr2,len);
	ShellSortTest(arr3, len);
	/*SelectSortTest(arr4, len);*/
	QuickSortTest(arr5, len);
	PartSortTest(arr6, len);
	QuickSortNonRTest(arr7, len);
	MergeSortTest(arr8, len);
	MergeSortNonRTest(arr9, len);
	CountSortTest(arr10, len);
	HeapSortTest(arr11, len);
	free(arr1);
	free(arr2);
	free(arr3);
	free(arr4);
	free(arr5);
	free(arr6);
	free(arr7);
	free(arr8);
	free(arr9);
	free(arr10);
	free(arr11);

	return 0;
}