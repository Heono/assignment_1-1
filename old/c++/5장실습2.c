#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a/b == b) printf("%d*%d=%d", b, b, a);
    else if (b/a == a) printf("%d*%d=%d", a, a, b);
    else printf("none");
    return 0;
}