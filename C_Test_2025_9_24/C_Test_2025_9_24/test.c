#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1016
int main()
{
    char a[10] = { 0 };
    char b[10] = { 0 };
    char da, db;
    scanf("%s %c %s %c", a, &da, b, &db);
    char arr[10] = { 0 };
    char brr[10] = { 0 };
    int ra, rb;
    int cur = 0;
    int count = 0;
    while (*(a + cur) != '\0')
    {
        if (*(a + cur) == da)
        {
            arr[count] = da;
            count++;
        }
        cur++;
    }
    if (count == 0)
    {
        arr[0] = '0';
    }
    cur = 0;
    count = 0;
    while (*(b + cur) != '\0')
    {
        if (*(b + cur) == db)
        {
            brr[count] = db;
            count++;
        }
        cur++;
    }
    if (count == 0)
    {
        brr[0] = '0';
    }
    sscanf(arr, "%d", &ra);
    sscanf(brr, "%d", &rb);
    printf("%d", ra + rb);
    return 0;
}
//1017
#include <string.h>

int main() {
    char A[1001];
    int B;
    scanf("%s %d", A, &B);

    int len = strlen(A);
    int remainder = 0;
    char Q[1001];
    int index = 0;

    for (int i = 0; i < len; i++) {
        int current = remainder * 10 + (A[i] - '0');
        int quotient_digit = current / B;
        remainder = current % B;

        if (index > 0 || quotient_digit != 0) {
            Q[index++] = '0' + quotient_digit;
        }
    }

    if (index == 0) {
        Q[index++] = '0';
    }
    Q[index] = '\0';

    printf("%s %d\n", Q, remainder);

    return 0;
}