#include <stdio.h>

int main() {
    int a[5];
    int avg = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        avg += a[i];
    }

    avg /= 5;

    for (int i = 0; i < 5; i++) {
        if (a[i] > avg) printf("%d\n", a[i]);
    }

    return 0;
}