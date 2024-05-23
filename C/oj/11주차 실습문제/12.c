#include <stdio.h>

int reverse_num(int n);
int is_equal(int n, int m);

int main() {
    int N;
    scanf("%d", &N);

    printf("%d %d %d\n", N, reverse_num(N), is_equal(N, reverse_num(N)));

    return 0;
}

int reverse_num(int n) {
    int t = 0;
    while (n) {
        t = t * 10 + n % 10;
        n /= 10;
    }

    return t;
}

int is_equal(int n, int m) {
    /*
    if (n == m) return 1;
    else return 0;
    */
    return n == m;
}