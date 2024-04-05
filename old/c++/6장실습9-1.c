#include <stdio.h>

int main() {
    long a, count = 0;
    scanf("%ld", &a);
    
    while (a > 0) {
        if (a % 10 == 3) count++;
        a = (a - a%10) / 10;
    }

    printf("%ld", count);

    return 0;
}