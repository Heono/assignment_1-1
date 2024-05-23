#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE], b[SIZE], c[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
        printf(" %d", c[i]);
    }
    
    return 0;
}