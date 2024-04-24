#include <stdio.h>

int main() {
    int n, i, j, N, cnt, prev, flag;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &N);

        for (j = 2; j < N; j++) {
            if (N % j == 0) {
                flag = 0;
                break;
            }
        }
        if (N == j) {
            printf("%d ", N); prev = 1;
        } else {
            if (prev == 1) printf("*\n");
            prev = 0;
        }
    }
    if (prev == 1) printf("*");

    return 0;
}