#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < SIZE; i++) {
        if (a[0] < a[i]) a[0] = a[i]; 
    }

    printf("%d", a[0]);

    return 0;
}