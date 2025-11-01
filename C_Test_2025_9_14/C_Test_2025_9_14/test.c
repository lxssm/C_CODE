#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ÔªÒô

//int main() {
//    char a = 0;
//    while (scanf("%c\n", &a) != EOF) {
//        if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}


//ÖÐ¼äÖµ

//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a >= ((b > c) ? c : b) && a <= ((b > c) ? b : c))
//    {
//        printf("true\n");
//    }
//    else {
//        printf("false\n");
//    }
//}


//ÅÐ¶ÏÈòÄê

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 4 == 0)
//    {
//        if (a % 100 == 0)
//        {
//            if (a % 400 == 0)
//            {
//                printf("yes");
//            }
//            else {
//                printf("no");
//            }
//        }
//        else {
//            printf("yes");
//        }
//    }
//    else {
//        printf("no");
//    }
//}

//ÅÐ¶Ï×ÖÄ¸

//int main() {
//    char ch = 0;
//    scanf("%c", &ch);
//    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//}

//ËÄ¼¾

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    a = a % 100;
//    if (a <= 5 && a >= 3)
//    {
//        printf("spring");
//    }
//    else if (a >= 6 && a <= 8)
//    {
//        printf("summer");
//    }
//    else if (a >= 9 && a <= 11)
//    {
//        printf("autumn");
//    }
//    else
//    {
//        printf("winter");
//    }
//}

//½¡¿µÆÀ¹À

int main() {
    int a = 0;
    float b = 0;
    scanf("%d %f", &a, &b);
    float r = a / (b * b);
    if (r >= 18.5 && r <= 23.9)
    {
        printf("Normal");
    }
    else {
        printf("Abnormal");
    }
}