#include <stdio.h>

int main() {
    int a, s = 0;
    scanf("%d", &a);

    for (int x = 1; ; x++) {
        if (x > a) break;
        s += x;
    }

    printf("%d", s);

    return 0;
}