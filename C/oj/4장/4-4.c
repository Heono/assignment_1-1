#include <stdio.h>

int main() {
    int a = 0;
    double b = 0;

    scanf("%d", &a);

    a += 500;
    a /= 1000;
    a *= 1000;

    printf("%d", a);
}