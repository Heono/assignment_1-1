#include <stdio.h>

int main() {
    int a, c = 0;
    scanf("%d", &a);

    for (int x = 1; x <= a; x++) {
        int t = x, b = 0;
        while (t != 0) {
            b = t % 10;
            b == 3 ? c++ : printf("");
            t /= 10;
        }
    }

    printf("%d", c);

    return 0;
}