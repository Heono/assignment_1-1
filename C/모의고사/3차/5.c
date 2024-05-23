#include <stdio.h>

int main() {
    char x[101] = "", ch;
    int m, i, xI = 0;

    while (scanf("%c", &ch) && ch != '!') {
        for (i = 0; i < xI; i++)
            if (x[i] == ch) break;
        if (i == xI) x[xI++] = ch;
    }

    printf("%s\n", x);

    scanf("%d", &m);

    for (i = 0; i < xI; i++) {
        if ('a' <= x[i] && x[i] <= 'z') {
            x[i] = (x[i] - 'a' + m) % ('z' - 'a' + 1) + 'A';
        }
        else if ('A' <= x[i] && x[i] <= 'Z') {
            x[i] = (x[i] - 'A' + m) % ('Z' - 'A' + 1) + 'a';
        }
    }

    printf("%s\n", x);

    int max = 0, cnt = 1, last = 0;

    // 이거 복습하기
    // 대소문자 번갈아 나오는 구간 체크하기
    for (i = 0; i < xI - 1; i++) {
        if ((x[i] <= 'Z' && x[i+1] >= 'a') || (x[i] >= 'a' && x[i+1] <= 'Z')) {
            cnt++;
            if (cnt > max) {
                max = cnt;
                last = i+1;
            }
        }
        else cnt = 1;
    }

    if (!max) printf("none");
    else {
        for (i = last - max + 1; i <= last; i++)
            printf("%c", x[i]);
    }

    return 0;
}