#include <stdio.h>

void main() {
    int a;
    scanf("%d", &a);
    char b = a;
    printf("(int->int) %d\n(int->char->int) %d\n", a, b);
}