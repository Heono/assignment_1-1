#include <stdio.h>

int main() {
    int n, b;
    scanf("%d", &n);
    char a[n+1];
    scanf("%s", a);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b);
        printf("x[%d%%%d]=x[%d]=%c\n", b, n, b % n, a[b % n]);
    }
}