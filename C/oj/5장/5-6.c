#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int Max, min;
    Max = a;
    if (b > Max) Max = b;
    if (c > Max) Max = c;
    min = a;
    if (min > b) min = b;
    if (min > c) min = c;

    printf("%d %d", Max, min);
    return 0;
}