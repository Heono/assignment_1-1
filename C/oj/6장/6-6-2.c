#include <stdio.h>

int main() {
    int a;
    int c = 0;
    scanf("%d", &a);

    for (int x = 0; x < a; x++) {
        for (int y = 0; y < a; y++) {
            c += 1;
            printf(" %d", c%10);
        }
        printf("\n");
    }

    return 0;
}