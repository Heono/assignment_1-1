#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int a = n; a > 0; a--) {
        for (int b = 0; b < a; b++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}