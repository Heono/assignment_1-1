#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int t = 0;
    int tt = 0;
    int ttt = 0;

    while (a) {
        t *= 10;
        t += a % 10;
        a /= 10;
    }

    for (int i = 1; i < t + 1; i++) {
        if (i % 2 == 0) tt++;
        if (i % 3 == 0) ttt++;
    }

    printf("%d\n%d %d", t, tt, ttt);

    return 0;
}
