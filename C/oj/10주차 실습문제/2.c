#include <stdio.h>

int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int n;
    scanf("%d", &n);

    int t = 20;

    for (int i = 19; i > 20-n; i--) {
        a[i] = a[i-1];
    }
    a[20-n] = 20;

    for (int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}