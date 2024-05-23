// 배열 안 중복 요소 제거
#include <stdio.h>

int main() {
    char x[101] = "", y[101] = "", t;
    int i, cnt = 0, yI = 0;

    for (i = 0; i < 100; i++) {
        scanf("%c", &t);
        if (t == '!') break;
        x[i] = t;
    }

    for (int j = 0; j < i; j++) {
        for (int k = 0; k <= j; k++) {
            if (x[j] == x[k]) cnt++;
        }
        if (cnt == 1) {
            y[yI] = x[j];
            yI++;
        }
        cnt = 0;
    }

    for (int j = yI - 1; j >= 0; j--) {
        printf("%c", y[j]);
    }

    return 0;
}