#include <stdio.h>

int main() {
    int a;
    int c = 0;
    int t = 0;
    scanf("%d", &a);

    while (a != 0) {
        t = a%10;
        t == 3 ? c++ : printf("");
        a /= 10;
    }

    printf("%d", c);

    return 0;
}