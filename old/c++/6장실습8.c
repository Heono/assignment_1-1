#include <stdio.h>

int main() {
    int a, b;
    int r = 1;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        printf("%d!=", i);
        r = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) printf("*");
            else printf("=");
            r *= j;
        }
        printf("%d\n", r);
    }
}