#include <stdio.h>

int main() {
    int a, b;
    int max = 0;
    scanf("%d %d", &a, &b);
    if (a >= b) {}
    else {
        int tmp = a;
        a = b;
        b = tmp;
    }
    // a >= b
    /*
    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) max = i;
    }
    */

    int i = 1;

    while (i <= b) {
        if (a % i == 0 && b % i == 0) max = i;
        i++;
    }

    printf("%d", max);

    return 0;
}