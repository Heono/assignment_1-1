#include <stdio.h>

int main() {
    int a[5];
    int t = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (a[i] > a[i+1]) {
            t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}