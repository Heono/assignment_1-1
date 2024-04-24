// *********
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int t;

    int f1 = 1;
    int f2 = 0;

    int cnt = 0, maxCnt = 0, last = 0, maxLast = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t >= 100 || t == 1) f1 = 0;
        for (int j = 2; j < t; j++) {
            if (t % j == 0) f1 = 0;
        }

        if (f1) {
            cnt++;
            last = t; // 이것도 까먹음
        }

        if ((!f1 && f2) || i == n - 1) {
            if (cnt > maxCnt) {
                maxCnt = cnt;
                maxLast = last; // 이거 까먹음
            }
            cnt = 0; // 이것도 까먹음
        }

        f2 = f1;
        f1 = 1;

    }

    printf("%d\n", maxCnt);
    if (maxCnt) printf("%d", maxLast);
}

