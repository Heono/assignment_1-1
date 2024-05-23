#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if (a[i] % 2 == 0) printf(" %d", a[i]);
    }

    return 0;
}