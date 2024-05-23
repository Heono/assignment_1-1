#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE], b[SIZE], c[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        c[i] = a[i] + b[SIZE - 1 - i];
        printf(" %d", c[i]);
    }
    
    return 0;
}