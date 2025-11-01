#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//使用指针打印数组内容

//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	return 0;
//}

//实现一个对整形数组的冒泡排序

//void test(int arr[], int sz)
//{
//	int tmp = 0;
//	for (int i = sz-1; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,5,2,7,9,0,8,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

//void test(char arr1[], char arr2[], int sz,int n)
//{
//	char tmp[100] = { 0 };
//	for (int i = 0; i < sz; i++)
//	{
//		int j = 0;
//		if (i < sz - n)
//			tmp[i] = arr1[i+n];
//		else
//		{
//			tmp[i] = arr1[j];
//			j++;
//		}
//	}
//	int r = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (tmp[i] != arr2[i])
//			r = 1;
//	}
//	if (r == 0)
//		printf("yes");
//	else
//		printf("no");
//}
//
//int main()
//{
//	char arr1[5] = "ABCDE";
//	char arr2[5] = "BCDEA";
//	int n = 1;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	test(arr1, arr2, sz,n);
//
//	return 0;
//}

//杨氏矩阵

//bool searchMatrix(int matrix[][4], int rows, int cols, int target) {
//    int row = 0;
//    int col = cols - 1;
//    while (row < rows && col >= 0) {
//        if (matrix[row][col] == target) {
//            return true;
//        }
//        else if (matrix[row][col] > target) {
//            col--;
//        }
//        else {
//            row++;
//        }
//    }
//    return false;
//}
//int main() {
//    int matrix[3][4] = {
//        {1, 4, 7, 11},
//        {2, 5, 8, 12},
//        {3, 6, 9, 16}
//    };
//    int target = 5;
//    int rows = 3;
//    int cols = 4;
//    bool found = searchMatrix(matrix, rows, cols, target);
//    if (found) {
//        printf("数字 %d 存在于矩阵中。\n", target);
//    }
//    else {
//        printf("数字 %d 不存在于矩阵中。\n", target);
//    }
//    return 0;
//}

//找凶手

//int main() {
//    for (int i = 0; i < 4; i++) {
//        
//        int truth_A = (i != 0);
//        int truth_B = (i == 2); 
//        int truth_C = (i == 3); 
//        int truth_D = !truth_C; 
//
//    
//        int truth_count = truth_A + truth_B + truth_C + truth_D;
//
//        if (truth_count == 3) {
//          
//            if (i == 0) {
//                printf("凶手是A\n");
//            }
//            else if (i == 1) {
//                printf("凶手是B\n");
//            }
//            else if (i == 2) {
//                printf("凶手是C\n");
//            }
//            else if (i == 3) {
//                printf("凶手是D\n");
//            }
//            break; 
//        }
//    }
//    return 0;
//}

//杨辉三角
//      1
//     101
//    10201
//   1030301
//int main()
//{
//	int n = 10;
//	int arr[101][101] = { 0 };
//	arr[0][51] = 1;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < 2 * i +1 ; j++)
//		{
//			arr[i][51 - i +j] = arr[i-1][50 - i +j] + arr[i-1][52 - i + j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 51+i; j++)
//		{
//			if (arr[i][j] == 0)
//				printf(" ");
//			else
//				printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//计算器

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("************************\n");
//	printf("****  1.add  2.sub  ****\n");
//	printf("****  3.mul  4.div  ****\n");
//	printf("****  0.exit        ****\n");
//	printf("************************\n");
//
//}
//
//int fun(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字->");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input = 0;
//	int r = 0;
//	int (*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请选择-> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//			r = fun(pfarr[input]);
//			printf("%d\n", r);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//找单身狗2
//
//int main()
//{
//	int r = 0;
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//			{
//				r = 1;
//				break;
//			}
//		}
//		if (r == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//		r = 0;
//	}
//
//
//	return 0;
//}

//月份判断

int main() {
    int year = 0;
    int month = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        if (month == 2)
        {
            if (year % 4 == 0)
            {
                if (year % 100 == 0)
                {
                    if (year % 400 == 0)
                        printf("29");
                    else
                        printf("28");
                }
                else
                    printf("29");
            }
            else
                printf("28");
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month == 12)
        {
            printf("31");
        }
        else {
            printf("30");
        }
    }
}