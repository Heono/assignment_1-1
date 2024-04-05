#include <stdio.h>

int main() {
    int n;
    int c = 2;
    scanf("%d", &n);

    while (n != 1) {
        if (n % c == 0) {
            printf("%d ", c);
            n /= c;
            c = 2;
        }
        else c++;
    }

    return 0;
}