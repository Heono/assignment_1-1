#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    printf("%dTTHO", a/10000);
    a %= 10000;
    printf(" %dTHO", a/1000);
    a %= 1000;
    printf(" %dHUN", a/100);
    a %= 100;
    printf(" %dTEN", a/10);
    a %= 10;
    printf(" %d", a);

    return 0;
}