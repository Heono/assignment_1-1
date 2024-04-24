#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int t = 0;
    int c1 = 0, c2 = 0;

    while (a) {
        t = t * 10 + a % 10;
        a /= 10;
    }

    for (int i = 1; i <= t; i++) {
        if (i % 2 == 0) c1++;
        if (i % 3 == 0) c2++;
    }

    printf("%d\n%d %d", t, c1, c2);

    return 0;
}