#include <stdio.h>

int main() {
    int n = 0, t = 0, s = 0;
    scanf("%d", &n);

    while (n/10 != 0) {
        t = n;
        s = 0;
        while (t != 0) {
            s += t % 10;
            t /= 10;
        }
        n = s;
    }

    printf("%d", n);

    return 0;
}