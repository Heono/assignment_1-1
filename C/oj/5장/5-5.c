#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    int b, c, d;
    b = (a%2 == 0);
    c = (a%3 == 0);
    d = (a%5 == 0);

    if (b && c && d) printf("A");
    else if (b && c) printf("B");
    else if (b && d) printf("C");
    else if (c && d) printf("D");
    else if (b || c || d) printf("E");
    else printf("N");

    return 0;
}