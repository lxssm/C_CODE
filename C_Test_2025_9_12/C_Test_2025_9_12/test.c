#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//喝酸奶

//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        int r = a * b - c;
//        printf("%d", r / b);
//    }
//}

//温度转换

//int main() {
//	double a = 0;
//	scanf("%lf", &a);
//	printf("%.3lf", (5 * (a - 32)) / 9);
//}

//圆的面积

//int main() {
//    double a = 0;
//    scanf("%lf", &a);
//    printf("%lf", a * a * 3.14);
//}

//等效电阻

//int main() {
//    double a, b;
//    scanf("%lf %lf", &a, &b);
//    printf("%lf", (a * b) / (a + b));
//}

//喝水

//#include <math.h>
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    double c = 3.14 * a * b * b;
//    c = 10000 / c;
//    int r = (int)ceil(c);
//    printf("%d", r);
//}

//等差数列

//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", 2 * b - a);
//}

//球的体积

//int main() {
//	double a = 0;
//	scanf("%lf", &a);
//	double r = (4 * (3.14 * a * a * a)) / 3;
//	printf("%lf", r);
//}

//定闹钟

//int main() {
//    size_t a, b, c;
//    scanf("%zu:%zu %zu", &a, &b, &c);
//    size_t r = a * 3600 + b * 60 + c * 60;
//    while (r > 24 * 60 * 60)
//    {
//        r -= 24 * 60 * 60;
//    }
//    int n = r / 3600;
//    r = r % 3600;
//    int m = r / 60;
//    printf("%02d:%02d", n, m);
//}

//坐电梯

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int r = 0;
//	r = (n / 12) * 4 + 2;
//	printf("%d", r);
//}

//辗转相除法

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    size_t n, m;
    while (scanf("%zu %zu", &n, &m) != EOF) {
        int g = gcd(n, m);
        long long lcm = (long long)n * m / g;
        long long result = g + lcm;
        printf("%lld\n", result);
        return 0;
    }
    return 0;
}