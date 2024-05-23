#include <stdio.h>

int main() {
    char x[101] = "", y[101] = "", t; // 문자열 초기화 "" <- 이런식으로 하기
    int i, j;

    for (i = 0; i < 100; i++) {
        scanf("%c", &t);
        if (t == '*') break;
        x[i] = t;
    }

    for (j = 0; j < 100; j++) {
        scanf("%c", &t);
        if (t == '*') break;
        y[j] = t;
    }

    for (int k = 0; k < 100; k++) {
        if (x[k] < y[k]) {
            printf("%s", x);
            printf("\n");
            return 0;
        }
        else if (x[k] > y[k]) {
            printf("%s", y);
            printf("\n");
            return 0;
        }
    }

    printf("%s", x);
    printf("\n");

    return 0;
}