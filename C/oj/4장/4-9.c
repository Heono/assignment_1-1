#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d %d", &a, &b);
    a > b ? printf("%d", a) : printf("%d", b);
    return 0;

}