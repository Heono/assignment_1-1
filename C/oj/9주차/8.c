#include <stdio.h>
#include <limits.h>

#define SIZE 10

int main() {
    int a[SIZE];
    int b;
    int i;
    scanf("%d", &b);

    for (i = 0; b > 0; i++) {
        a[i] = b % 10;
        b /= 10;
    }

    for (int j = 0; j < i; j++) {
        printf(" %d", a[j]);
    }
    
    return 0;
}