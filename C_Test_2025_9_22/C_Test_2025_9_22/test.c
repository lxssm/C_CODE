#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//1013
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int count = 0;
    int num = 2;
    int outputCount = 0;

    while (count < N) {
        if (isPrime(num)) {
            count++;
            if (count >= M) {
                outputCount++;
                if (outputCount % 10 == 1) {
                    printf("%d", num);
                }
                else {
                    printf(" %d", num);
                    if (outputCount % 10 == 0) {
                        printf("\n");
                    }
                }
            }
        }
        num++;
    }
    if (outputCount % 10 != 0) {
        printf("\n");
    }
    return 0;
}
#include <ctype.h>

//1014
int main() {
    char str1[61], str2[61], str3[61], str4[61];
    scanf("%s %s %s %s", str1, str2, str3, str4);

    char* days[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    int day, hour, minute;
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G') {
            day = str1[i] - 'A';
            break;
        }
        i++;
    }

    i++;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] == str2[i]) {
            if (str1[i] >= '0' && str1[i] <= '9') {
                hour = str1[i] - '0';
                break;
            }
            else if (str1[i] >= 'A' && str1[i] <= 'N') {
                hour = str1[i] - 'A' + 10;
                break;
            }
        }
        i++;
    }

    i = 0;
    while (str3[i] != '\0' && str4[i] != '\0') {
        if (str3[i] == str4[i] && isalpha(str3[i])) {
            minute = i;
            break;
        }
        i++;
    }

    printf("%s %02d:%02d\n", days[day], hour, minute);
    return 0;
}