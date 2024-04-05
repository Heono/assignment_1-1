#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a); getchar();
    
    int b;
    scanf("%d", &b);
    
    if (b > a) printf("DOWN\n");
    else if (b < a) printf("UP\n");
    else {
        printf("RIGHT\n");
        return 0;
    }

    scanf("%d", &b);
    
    if (b > a) printf("DOWN\n");
    else if (b < a) printf("UP\n");
    else printf("RIGHT\n");

    return 0;
}