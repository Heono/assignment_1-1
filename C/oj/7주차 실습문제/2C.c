#include <stdio.h>

int main() {
    int N, shifted_org, M = 0, cnt = 0;
    int min = -1, max = -1, temp;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        shifted_org = N;
        cnt = 0; M = 0;
        while (N) {
            M = M * 10 + N % 10;
            N /= 10;
            shifted_org *= 10;
        }
        temp = shifted_org+M;
        printf("%d ", temp);

        // min, max = -1 이므로 최초 temp를 min과 max에 배정함
        if (min == -1 || min > temp)
            min = temp;
        if (max == -1 || max < temp)
            max = temp;

        while (temp) {
            if ((temp % 10) == 3) cnt++;
            temp /= 10;
        }

        printf("%d ", cnt);
    }

    printf("\n%d %d\n", min, max);

    return 0;
}