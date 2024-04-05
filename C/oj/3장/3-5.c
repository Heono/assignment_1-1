#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    int b = a + 0.5;
    printf("rounded up to %d", b);
    return 0;
}