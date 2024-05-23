#include <stdio.h>

int sum(int n);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", sum(b) - sum(a-1));

    return 0;
}

int sum(int n) {
    return n*(n+1) / 2;
}