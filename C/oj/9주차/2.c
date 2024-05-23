#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE];
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}