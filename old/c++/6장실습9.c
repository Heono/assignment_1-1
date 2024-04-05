#include <stdio.h>

int main() {
    int a, b, count = 0;
    scanf("%d", &a);
    
    for (int i = 1; i <= a; i++) {
        b = i;
        while (b > 0) {
            if (b % 10 == 3) count++;
            b = (b - b%10) / 10;
        }
    }

    printf("%d", count);
}