#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int i = 1;
    while (i <= a) {
        int c = i;
        for (int j = 1; j <= a; j++) {
            printf(" %d", c%10);
            c++;
        }
        printf("\n");
        i++;
    }

    return 0;
}