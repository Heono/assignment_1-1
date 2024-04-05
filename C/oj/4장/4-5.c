#include <stdio.h>

int main() {
    double a = 0;
    scanf("%lf", &a);
    a /= 6.28;
    double b = 0;
    b = a * a * 3.14;
    int c = 0;
    c = b + 0.5;

    printf("%d", c);
}