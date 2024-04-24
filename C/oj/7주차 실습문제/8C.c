#include <stdio.h>

int main() {
    int N, i, code, c1, c2, c3;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d", &code);

        c1 = code / 10000;
        c2 = (code / 1000) % 10;
        c3 = (code / 100) % 10;

        if (code < 10000 || code > 99999 || code % 100 != 0 ||
        c1 == c2 && c2 == c3 || c1 != c2 && c2 != c3 && c1 != c3 || c3 > 5)
            printf("none\n");
        else if (c3 == 0 || c3 == 1 || c3 == 2)
            printf("CE\n");
        else if (c3 == 3 || c3 == 4)
            printf("SW\n");
        else if (c3 == 5)
            printf("DS\n");
    }

    return 0;
}