#include <stdio.h>

int is_prime(int x);
int next_prime(int x);

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < m; i++) {
        n = next_prime(n);
        printf(" %d", n);
    }

    return 0;
}

int is_prime(int x) {
    int i;
    //for (i = 2; i <= x; i++)
    for (i = 2; i < x; i++) // 등호 없어도 됨
        if (x % i == 0) break;

    /*
    if (i == x) return 1;
    else return 0;
    */

    return x == i;
}

int next_prime(int x) {
    int f = 1;

    while (f) {
        f = !is_prime(++x);
    }

    return x;
}