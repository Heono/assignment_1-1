#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf(" %d", b%10);
            b++;
        }
        printf("\n");
    }
}