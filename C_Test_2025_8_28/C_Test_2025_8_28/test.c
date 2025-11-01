#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//Ä£ÄâÊµÏÖqsort

//struct stu {
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int cmp_char(const void* a, const void* b)
//{
//	return *(char*)a - *(char*)b;
//}
//
//int cmp_name(const void* a, const void* b)
//{
//	return strcmp(((struct stu*)a)->name, ((struct stu*)b)->name);
//}
//
//int cmp_age(const void* a, const void* b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age;
//}
//
//void print_int(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", *(arr + i));
//	printf("\n");
//}
//
//void print_char(char* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%c ", *(arr + i));
//	printf("\n");
//}
//
//void print_stu(struct stu* a,int sz3)
//{
//	for (int i = 0; i < sz3; i++)
//	{
//		printf("%s %d ", a->name, a->age);
//		a++;
//	}
//}
//
//void my_qsort(void* base, size_t num, size_t size, int (*pf)(const void* a, const void* b))
//{
//	for (int i = num; i >1; i--)
//	{
//		for (int j = 0; j < i-1; j++)
//		{
//			if (pf((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//
//Swap(void* a, void* b,int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		char tmp = *((char*)a + i);
//		*((char*)a + i) = *((char*)b + i);
//		*((char*)b + i) = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 5,1,8,7,2,6,3,0,4,9 };
//	char arr2[] = { 'b','c','g','f','t','i','z' };
//	struct stu arr3[] = { {"zhangsan",18},{"lisi",30},{"wangwu",50} };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	print_int(arr1, sz1);
//
//	my_qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
//	my_qsort(arr2, sz2, sizeof(arr2[0]), cmp_char);
//	my_qsort(arr3, sz3, sizeof(arr3[0]), cmp_name);
//	print_int(arr1,sz1);
//	print_char(arr2, sz2);
//	print_stu(arr3,sz3);
//	return 0;
//}



