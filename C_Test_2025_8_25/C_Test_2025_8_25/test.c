#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

//void test(int* r, int n)
//{
//	*r = *r + n;
//	n = n / 2;
//	if (n == 0)
//		return;
//	test(r, n);
//}
//
//
//int main()
//{
//	int n = 20;
//	int r = 0;
//	test(&r, n);
//	printf("%d", r);
//	return 0;
//}

//打印菱形
//int main()
//{
//	int n = 13;
//	for (int i = 0; i <= 12; i++)
//	{
//		for (int j = 1; j <= 13; j++)
//		{
//			if (i <= n / 2)
//			{
//				if (j >= (n + 1) / 2 - i && j <= (n + 1) / 2 + i)
//					printf("*");
//				else
//					printf(" ");
//			}
//			else
//			{
//				if (j >= (i- n/2) +1&& j <= n-(i-n/2))
//					printf("*");
//				else
//					printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//}

//打印水仙花数

//int main()
//{
//	int arr[6];
//	for (int n = 0; n <= 100000; n++)
//	{
//		int n1 = n;
//		int i = 0;
//		int r = 0;
//		int tmp = 1;
//		for (i = 0; n1 > 0; i++)
//		{
//			arr[i] = n1 % 10;
//			n1 = n1 / 10;
//		}
//		for (int a = 0; a < i; a++)
//		{
//			for (int b = 0; b < i; b++)
//			{
//				tmp = tmp * arr[a];
//			}
//			r = r + tmp;
//			tmp = 1;
//		}
//		if (r == n)
//			printf("%d ", n);
//	}
//
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int n = 2;
//	int r = 0;
//	int tmp = n;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			tmp = tmp * 10 + n;
//		}
//		r = r + tmp;
//		tmp = n;
//	}
//	printf("%d", r);
//	
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50];
//    int r = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf(" %d", arr + i);
//    }
//    if (arr[0] >= arr[1])
//    {
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (arr[i] >= arr[i + 1])
//                r++;
//        }
//        if (r == n - 1)
//        {
//            printf("sorted");
//            return 0;
//        }
//    }
//    else if (arr[0] < arr[1])
//    {
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (arr[i] < arr[i + 1])
//                r++;
//        }
//        if (r == n - 1)
//        {
//            printf("sorted");
//            return 0;
//        }
//    }
//    printf("unsorted");
//}

//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//int main() {
//    int n = 0;
//    int a = 0;
//    int b = 0;
//    int arr[50];
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr + i);
//    }
//    scanf("%d", &a);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > a && b == 0)
//        {
//            printf("%d ", a);
//            i--;
//            b = 1;
//            continue;
//        }
//        printf("%d ", arr[i]);
//        if (i == n - 1 && arr[n - 1] <= a)
//        {
//            printf("%d ", a);
//        }
//    }
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//若序列中有多个指定的数，需要一起删除。
/*int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", arr + i);
    }
    int a = 0;
    scanf("%d ", &a);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            continue;
        }
        printf("%d ", arr[i]);
    }

}*/

//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//int main() {
//    int n = 0;
//    int arr[1000];
//    scanf("%d ", &n);
//    int r = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", arr + i);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == arr[i])
//                r = 1;
//        }
//        if (r == 1)
//        {
//            r = 0;
//            continue;
//        }
//        printf("%d ", arr[i]);
//    }
//}

//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", arr + i);
//    }
//    int a = 0;
//    int r = 0;
//    scanf("%d ", &a);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == a)
//        {
//            r++;
//        }
//    }
//    printf("%d", r);
//}
//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int arr[100];
        for (int i = 0; i <= n - 2; i++)
        {
            arr[i] = i + 2;
        }
        for (int i = 0; i <= n - 2; i++)
        {
            for (int j = 2; j < i+2; j++)
            {
                if (arr[i] % j == 0)
                {
                    arr[i] = 0;
                    break;
                }
            }
            if (arr[i] != 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
}