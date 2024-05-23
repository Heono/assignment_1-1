#include <stdio.h>

int main() {
    double a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] > 0) printf(" %.1f", a[i]);
    }

    return 0;
}