#include <stdio.h>

int main() {
    int a, sum = 0;
    scanf("%d", &a);
    while (a > 0) {
        sum += a % 10;
        a = (a - a%10) / 10;
    }

    printf("%d", sum);

    return 0;
}