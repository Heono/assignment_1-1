#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int t;

    int flag1 = 1;
    int flag2 = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);

        for (int j = 2; j < t; j++) { // j = 2부터 시작해야함 1부터하면 무조건 나눠짐
            if (t % j == 0) flag1 = 0;
        }

        if (t == 1) flag1 = 0; // 1은 소수 아님

        if (flag1) {
            printf("%d ", t);
            flag2 = 1;
        }
        else if (!flag1 && flag2) { 
            printf("*\n");
            flag2 = 0;
        }

        if (i == n - 1 && flag1) printf("*");

        flag1 = 1;
    }


    return 0;
}