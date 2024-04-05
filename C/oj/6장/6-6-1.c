#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int x = 0; x < a; x++) {
        for (int y = 0; y < a; y++) {
            if (y == x || y == a-x-1) printf(" X");
            else printf(" O");
        }
        printf("\n");
    }

    return 0;

}