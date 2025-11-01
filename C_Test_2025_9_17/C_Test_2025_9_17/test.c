#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1001
int main()
{
    int count = 0;
    int n = 0;
    scanf("%d", &n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (3 * n + 1) / 2;
        }
        count++;
    }
    printf("%d", count);
}

//1002
int main()
{
    char arr[101] = { 0 };
    scanf("%s", arr);
    int i = 0;
    int num = 0;
    while (*(arr + i) != '\0')
    {
        num += *(arr + i) - '0';
        i++;
    }
    i = 0;
    int a = 0;
    char tmp[10] = { 0 };
    sprintf(tmp, "%d", num);
    while (*(tmp + i) != '\0')
    {
        a = *(tmp + i) - '0';
        switch (a)
        {
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        case 0:
            printf("ling");
            break;
        }
        i++;
        if (*(tmp + i) != '\0')
            printf(" ");
    }
    printf("\n");
    return 0;
}