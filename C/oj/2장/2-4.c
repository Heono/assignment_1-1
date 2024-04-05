#include <stdio.h>

void main() {
    int a;
    scanf("%d", &a);
    unsigned char b = a;
    printf("(int->int) %d\n(int->unsigned char->int) %d\n", a, b);
}