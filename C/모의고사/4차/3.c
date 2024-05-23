#include <stdio.h>

int prime_number(int num);
int odd_number(int num);
int count_number(int cnt, int num);

int main() {
    int n, x[100], xI = 0;
    while (scanf("%d", &n) && n > 0) {
        if (prime_number(n) || odd_number(n))
            x[xI++] = n;
    }

    int max = 0, cnt = 0, last = 0;


    // 복습하기
    for (int i = 0; i < xI; i++) {
        cnt = count_number(cnt, x[i]);
        if (cnt > max) {
            max = cnt;
            last = i;
        }
    }
    if (!max) printf("0\n");
    else {
        for (int i = last - max + 1; i <= last; i++) 
            printf("%d ", x[i]);
    }

    return 0;
}

int prime_number(int num) {
    int i;
    for (i = 2; i < num; i++) // i = 2부터 시작해야함.
        if (num % i == 0) break;
    return i == num;
}

int odd_number(int num) {
    while (num) {
        if ((num % 10) % 2 == 0) return 0;
        num /= 10;
    }
    return 1;
}

int count_number(int cnt, int num) {
    if (prime_number(num) && odd_number(num)) return cnt+1;
    else return 0;
}