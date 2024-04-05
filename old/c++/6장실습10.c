#include <stdio.h>

int main() {
    int a, b, sum = 0;
    scanf("%d", &a);
    while (a > 9) { // 6234 15
        b = a; // 6234 15
        while (b > 0) { // 6234 623 62 6 15
            sum += b % 10; // 4 3 2 6 
            b = (b - b%10) / 10; // 623 62 6 0
        }
        a = sum; // 15
        sum = 0;
    }
    

    printf("%d", a);

    return 0;
}