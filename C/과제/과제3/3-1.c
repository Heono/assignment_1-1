#include <stdio.h>

int main() {
    int p, c, cnt = 1, max = 0;

    scanf("%d", &p);

    while (1) {
        scanf("%d", &c);

        if (c == 0) {
            if (cnt > max) max = cnt;
            break;
        }

        if (p*c > 0) cnt++;
        else {
            if (cnt > max) max = cnt;
            cnt = 1;
        }

        p = c;
    }

    printf("%d", max);

    return 0;
}