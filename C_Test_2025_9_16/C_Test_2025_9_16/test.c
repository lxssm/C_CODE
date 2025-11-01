#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//快递费

//int main() {
//    float a = 0;
//    char b = 0;
//    int r = 0;
//    scanf("%f %c", &a, &b);
//    if (a <= 1)
//    {
//        r = 20;
//    }
//    else {
//        int n = (int)a;
//        float b = a - n;
//        r = 20 + (n - 1);
//        if (b > 0)
//        {
//            r++;
//        }
//    }
//    if (b == 'y')
//    {
//        r += 5;
//    }
//    printf("%d", r);
//}

//打折

//int main() {
//    float a = 0;
//    scanf("%f", &a);
//    if (a >= 5000)
//    {
//        a = a * 0.6;
//    }
//    else if (a >= 2000)
//    {
//        a = a * 0.7;
//    }
//    else if (a >= 500)
//    {
//        a = a * 0.8;
//    }
//    else if (a >= 100)
//    {
//        a = a * 0.9;
//    }
//    printf("%f", a);
//}

//通勤

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    float b = a;
//    int c = 10 + a / 10.0;
//    if (b > c)
//    {
//        printf("v");
//    }
//    else {
//        printf("w");
//    }
//}


//拿金币

//int main() {
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a > c)
//    {
//        printf("l");
//    }
//    if (c > a)
//    {
//        printf("r");
//    }
//    if (b > d)
//    {
//        printf("d");
//    }
//    if (d > b)
//    {
//        printf("u");
//    }
//}

//星期

int main() {
    int a = 0;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
}