#include <stdio.h>

int prime_number(int num);
int odd_number(int num);

int main() {
    int N, x[100], index = 0;

    /*
    while (1) {
        scanf("%d", &N);

        if (N <= 0) break;

        if (prime_number(N) || odd_number(N)) x[index++] = N;
    }
    */

    while (scanf("%d", &N) && N > 0) {
        if (prime_number(N) || odd_number(N)) {
            if (index < 100) { // 100개만 저장
                x[index++] = N;
            }
        }
    }

    if (!index) {
        printf("0");
    }
    else {
        for (int i = index - 1; i > -1; i--)
            printf("%d ", x[i]);
    }

    return 0;
}

int prime_number(int num) {
    int i;
    // for (i = 2; i <= num; i++) 등호 없어도 됨
    for (i = 2; i < num; i++)
        if (num % i == 0) break;

    /*
    if (i == num) return 1;
    else return 0;
    */
    return i == num;
}

int odd_number(int num) {
    while (num) {
        if ((num % 10) % 2 == 0) return 0;
        num /= 10;
    }
    return 1;
}