#include <stdio.h>

int main() {
    int a, b;
    b = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        if (a > 0)
            b += a;
    }
    printf("%d", b);
    return 0;

}