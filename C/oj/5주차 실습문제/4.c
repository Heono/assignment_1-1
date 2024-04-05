#include <stdio.h>

int main() {
    char a;
    int u = 0, l = 0, n = 0, e = 0;

    while (1) {
        scanf("%c", &a);
        if (a == '*') break;
        else if ('A' <= a && a <= 'Z') u++;
        else if ('a' <= a && a <= 'z') l++;
        else if ('0' <= a && a <= '9') n += a - '0';
        else e++;
    }

    printf("%d %d %d %d", u, l, n, e);

    return 0;
}