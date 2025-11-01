#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//改数字

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    char arr[10] = { 0 };
//    int tmp = 0;
//    sprintf(arr, "%d", a);
//    for (int i = 0; i < 10; i++)
//    {
//        if (*(arr + i) == '\0')
//        {
//            break;
//        }
//        tmp = (*(arr + i) - '0');
//        if (tmp % 2 == 0)
//        {
//            *(arr + i) = '0';
//        }
//        else {
//            *(arr + i) = '1';
//        }
//    }
//    sscanf(arr, "%d", &tmp);
//    printf("%d", tmp);
//}

//期末成绩

//int main() {
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	double r = a / 5.0 + b / 10.0 + c / 5.0 + d / 2.0;
//	printf("%.1lf", r);
//}

//乘法

//int main() {
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d", (a + b - c) * d);
//}

//线段长度

//int main() {
//    int x1, y1, x2, y2;
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    int dx = x1 - x2;
//    int dy = y1 - y2;
//    int result = dx * dx + dy * dy;
//    printf("%d\n", result);
//    return 0;
//}

//算数

//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        a = a % 100;
//        b = b % 100;
//        printf("%d", (a + b) % 100);
//    }
//    return 0;
//}

//及格

//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        if (a >= 60)
//        {
//            printf("Pass\n");
//        }
//        else {
//            printf("Fail");
//        }
//    }
//    return 0;
//}

//奇偶

int main() {
    int a;
    while (scanf("%d", &a) != EOF) {
        if (a % 2 == 0)
        {
            printf("Even\n");
        }
        else {
            printf("Odd\n");
        }

    }
    return 0;
}
