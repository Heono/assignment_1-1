#include <stdio.h>

int main() {
    int a;
    float b=0, c=0;
    
    while (1) {
        scanf("%d", &a);
        if (a <= 0) break;
        if (a > 100) continue;
        b += a;
        c++;
    }
    printf("%d %.2f %d", (int)b, b/c, (int)c);
    return 0;
}