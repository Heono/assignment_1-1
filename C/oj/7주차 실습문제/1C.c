#include <stdio.h>

int main() {
    int i, N, M, double_cnt = 0, triple_cnt = 0;
    scanf("%d", &N);

    M = 0;
    while (N) {
        M = M * 10 + (N % 10); // N을 뒤집기
        N /= 10;
    }

    printf("%d\n", M);

    for (i = 1; i <= M; i++) {
        if (i % 2 == 0) double_cnt++;
        if (i % 3 == 0) triple_cnt++;
    }
    printf("%d %d\n", double_cnt, triple_cnt);

    return 0;
}