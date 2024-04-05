#include <stdio.h>

int main() {
    int a = 1, b = 0;
    while (a != 0) {
        scanf("%d", &a);
        b += a;
    }
    printf("%d", b);
}