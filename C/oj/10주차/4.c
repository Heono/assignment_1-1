#include <stdio.h>

int main() {
    int a[10];
    int c[3] = { 0, };

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] == 1) c[0]++;
        else if (a[i] == 2) c[1]++;
        else if (a[i] == 3) c[2]++;
    }

    for (int i = 0; i < 3; i++) {
        printf("%d:", i+1);
        for (int j = 0; j < c[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}