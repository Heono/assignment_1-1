#include <stdio.h>

int prime_number(int num);
int odd_number(int num);
int count_number(int cnt, int num);

int main() {
    int n;
    int x[100];
    int cnt = 0;
    int max = 0;
    int index = 0;
    int end = 0;
    int i = 0;

    while(scanf("%d", &n) && n > 0) {
        if (prime_number(n) || odd_number(n)) x[i++] = n;
    }

    for (int j = 0; j < i; j++) {
        cnt = count_number(cnt, x[j]);
        if (cnt) {
            if (cnt > max) {
                max = cnt;
                end = j+1;
            }
        }
    }

    if (!max) printf("0");
    else 
        for (int k = end - max; k < end; k++)
            printf("%d ", x[k]);

    printf("\n");
    return 0;    
}

int prime_number(int num) {
    int i;
    for (i = 2; i < num; i++)
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