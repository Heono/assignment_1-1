#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    n /= 100;
    n %= 10;

    printf("%d", n);

    return 0;
}