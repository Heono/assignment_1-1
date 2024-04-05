#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;

    do {
        scanf("%d", &n);
        sum += n;
    } while(n);

    printf("%d", sum);

    return 0;
}