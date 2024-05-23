#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x[n];

    int result = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        result = result*10 + x[i];
    }

    printf("%d", result);

    return 0;
}