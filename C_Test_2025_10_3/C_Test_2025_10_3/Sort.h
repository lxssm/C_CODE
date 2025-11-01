#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void Swap(int* x, int* y);
void Print(int* arr, size_t len);
void BubbleSort(int* arr, size_t len);
void InsertSort(int* arr, size_t len);
void ShellSort(int* arr, size_t len);
void SelectSort(int* arr, size_t len);
void HeapSort(int* arr, size_t len);
void QuickSort(int* arr, size_t left, size_t right);
void PartSort(int* arr, size_t left, size_t right);
void QuickSortNonR(int* arr, size_t left, size_t right);
void _MergeSort(int* arr, int* tmp, int left, int right);
void MergeSort(int* arr, int len);
void MergeSortNonR(int* arr, int len);
void CountSort(int* arr, int len);
void HeapSort(int* arr, int len);

