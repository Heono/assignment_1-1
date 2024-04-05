#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    if (b > a) printf("DOWN");
    else if (b == a) {
        printf("RIGHT");
        return 0;
    }
    else printf("UP");
    scanf("%d", &c);
    if (c > a) printf("DOWN");
    else if (c == a) {
        printf("RIGHT");
        return 0;
    }
    else printf("UP");
    
}