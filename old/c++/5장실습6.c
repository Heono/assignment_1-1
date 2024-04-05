#include <stdio.h>

int main() {
    int a, b, c;
    int m, M;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) M = a;
    else if (b > a && b > c) M = b;
    else if (c > a && c > b) M = c;
    if (a < b && a < c) m = a;
    else if (b < a && b < c) m = b;
    else if (c < a && c < b) m = c;
    if (a == b && b == c) M = m = a;

    printf("%d %d", M, m);
}