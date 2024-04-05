#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int c = 0;

    for (int x = 0; x < a; x++) {
        for (int y = 0; y <= x; y++) {
            c++;
            printf(" %d", c % 10);
        }
        printf("\n");
    }

    return 0;
}