#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int i = 0;
    while (i < a) {
        for (int j = 1; j <= a; j++) {
            printf(" %d", (j+i)%10);
        }
        i++;
        printf("\n");
    }
}