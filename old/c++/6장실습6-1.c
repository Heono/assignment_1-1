#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j == i || j == a - i - 1) printf(" X");
            else printf(" O");
        }
        printf("\n");
    }
}