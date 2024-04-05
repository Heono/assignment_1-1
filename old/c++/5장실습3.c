#include <stdio.h>

int main() {
    int a[5];
    int sum = 0;
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for (int i = 0; i < 5; i++) {
        if (a[i] > 0) sum = sum + a[i];
    }
    printf("%d", sum);
}