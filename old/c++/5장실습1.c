#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a < 0) printf("cold, indoor");
    else if (a >= 40) printf("hot, indoor");
    else printf("moderate, outdoor");
    return 0;
}