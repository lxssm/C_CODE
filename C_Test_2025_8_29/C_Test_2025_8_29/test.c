#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<assert.h>

//模拟实现strlen

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while (*(str + count))
//		count++;
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hell\0o bit";
//	size_t r = my_strlen(arr);
//	printf("%d", r);
//}

//模拟实现strcpy

//void my_strcpy(char* destination, const char* source)
//{
//	size_t count = 0;
//	while (*(destination + count) = *(source + count))
//		count++;
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//模拟实现strcat

//char* my_strcat(char* destination, const char* source)
//{
//	char* ret = destination;
//	while (*(destination))
//		destination++;
//	while (*(destination) = *(source))
//	{
//		destination++;
//		source++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "hello ";
//	my_strcat(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//模拟实现strstr

//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1)
//	{
//		if (*str1 == *str2)
//		{
//			const char* cmp1 = str1;
//			const char* cmp2 = str2;
//			while (*cmp2)
//			{
//				if (*cmp1 == *cmp2)
//				{
//					cmp1++;
//					cmp2++;
//				}
//				else
//				{
//					str1++;
//					break;
//				}
//			}
//			if (*cmp2 == '\0')
//				return str1;
//		}
//		else
//			str1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	const char* p = my_strstr(arr, "l");
//	printf("%s", p);
//	return 0;
//}

//模拟实现strcmp

//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 != '\0' || *str2 != '\0')
//	{
//		if (*str1 == *str2)
//			;
//		else if (*str1 > *str2)
//			return 1;
//		else
//			return -1;
//		str1++;
//		str2++;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abqdef";
//	char arr2[] = "abqc";
//	int r = my_strcmp(arr1, arr2);
//	printf("%d", r);
//	return 0;
//}

//模拟实现strncpy

//char* my_strncpy(char* str1, const char* str2,size_t num)
//{
//	assert(str1 && str2);
//	char* tmp = str1;
//	while (num-- != 0&&*str2!='\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { 0 };
//	my_strncpy(arr2, arr1, 5);
//	printf("%s", arr2);
//	return 0;
//}

//模拟实现strncat

//char* my_strncat(char* str1, const char* str2, size_t num)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	while (*str1)
//		str1++;
//	while (num-- != 0 && *str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[20] = "bit";
//	my_strncat(arr1, arr2, 1);
//	printf("%s", arr1);
//	return 0;
//}

//模拟实现memcpy

//void* my_memcpy(void* str1, const void* str2, size_t num)
//{
//	assert(str1 && str2);
//	char* p1 = (char*)str1;
//	char* p2 = (char*)str2;
//	while (num--)
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	return str1;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[20];
//	my_memcpy(arr2, arr1, 16);
//	for (int i = 0; i < 4; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}

//模拟实现memmove

//void* my_memmove(char* str1, const char* str2, size_t num)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	while (num--)
//	{
//		if (str1 > str2)
//		{
//			*(str1 + num) = *(str2 + num);
//		}
//		else
//		{
//			*str1 = *str2;
//			str1++;
//			str2++;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+3, 16);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}

//判断大小端

//int main()
//{
//	int a = 1;
//	char* pa = &(char)a;
//	if (*pa == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//模拟实现memset

//void* my_memset(void* str, int value, size_t num)
//{
//	char* p = (char*)str;
//	while (num--)
//	{
//	   *p = value;
//		p++;
//	}
//	return str;
//}
//
//int main()
//{
//	int arr[5];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_memset(arr, 1, sizeof(arr));
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

int my_memcpy(const void* str1, const void* str2, size_t num)
{
	assert(str1 && str2);
	char* p1 = (char*)str1;
	char* p2 = (char*)str2;
	while (num--)
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else if (*p1 > *p2)
			return 1;
		else
			return -1;
	}
	return 0;
}

int main()
{
	int arr1[5] = { 1,2,5,4,5 };
	int arr2[5] = { 1,2,3,4,5 };
	int r = my_memcpy(arr1, arr2, sizeof(arr1));
	if (r > 0)
	{
		printf(">");
	}
	else if (r < 0)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}

	return 0;
}
