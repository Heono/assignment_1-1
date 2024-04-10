#include <stdio.h>

int main() {
    char a;
    int u = 0, l = 0, o = 0, sum = 0;

    while (1) {
        scanf("%c", &a);
        if (a == '*') break;
        else if ('A' <= a && a <= 'Z') u++;
        else if ('a' <= a && a <= 'z') l++;
        else if ('0' <= a && a <= '9') {
            sum += a - '0';
        }
        else o++;
    }

    printf("%d %d %d %d", u, l, sum, o);

    return 0;
}