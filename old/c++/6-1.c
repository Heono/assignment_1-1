#include <stdio.h>

int main() {
    int a, b = 1;
    scanf("%d", &a);
    while (b <= a) {
        if (a % b == 0) printf("%d ", b);
        b++;
    }
}