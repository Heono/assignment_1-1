#include <stdio.h>

int main() {
    int a, b, r;
    scanf("%d %d", &a, &b);

    for (int x = a; x <= b; x++) {
        printf("%d!=", x);
        r = 1;
        for (int y = 1; y <= x; y++) {
            r *= y;
            if (y == x) printf("%d", y);
            else printf("%d*", y);
        }
        printf("=%d\n", r);
    }

    return 0;
}