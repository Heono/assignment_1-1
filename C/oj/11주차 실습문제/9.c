#include <stdio.h>

int reverse_num(int x);

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", reverse_num(n));

    return 0;
}

int reverse_num(int x) {
    int t = 0;

    while (x) {
        t = t * 10 + x % 10;
        x /= 10;
    }

    return t;
}