#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int t;
    int f1 = 1;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        for (int j = 2; j < t; j++) {
            if ((t % j) == 0) {
                f1 = 0;
                break; // 반복문 탈출
            }
        }

        if (t == 1) f1 = 0; // 1은 소수 아님

        if (f1) { 
            cnt++;
            printf("%d ", t);
        }

        if (f1 && cnt >= 3) {
            printf("*\n");
            cnt = 0;
        }
        if (cnt >= 1 && i == n - 1) printf("*\n"); // 마지막에 별표시 하기
        f1 = 1;
    }

    return 0;
}


