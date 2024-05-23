#include <stdio.h>

int main() {
    double a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }

    for (int i = 1; i < 10; i++) {
        if (a[0] > a[i]) a[0] = a[i];
    }

    printf("%.1f", a[0]);

    return 0;
}