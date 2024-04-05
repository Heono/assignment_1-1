#include <stdio.h>
int main() {
    int a, b, c = 0;
    scanf("%d", &a);
    do {
        c++;
        scanf("%d", &b);
        if (b > a) printf("%d>?\n", b);
        else if (b < a) printf("%d<?\n", b);
        else {
            printf("%d==?\n", b);
            break;
        }
    } while (1);
    printf("%d", c);
}