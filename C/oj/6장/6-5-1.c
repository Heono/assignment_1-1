#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++) {
        for (int b = 0; b <= a; b++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}