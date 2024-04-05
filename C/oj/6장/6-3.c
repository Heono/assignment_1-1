#include <stdio.h>

int main() {
    int a = 0;
    int g = 0;
    int cnt = 0;

    scanf("%d", &a);
    do {
        scanf("%d", &g);
        g == a ? printf("%d==?\n", g) : g < a ? printf("%d<?\n", g) : printf("%d>?\n", g);
        cnt++;
    } while (g != a);
    printf("%d", cnt);
    return 0;
}