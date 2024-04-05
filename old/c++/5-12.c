#include <stdio.h>

int main() {
    int a, b;
    int c = 0, d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    /*
    if (a == 1) {
        b -= 500;
        printf("Americano\n");
    }
    else if (a == 2) {
        b -= 400;
        printf("Cafe Latte\n");
    }
    else {
        b -= 300;
        printf("Lemon Tea\n");
    }
    */
    switch (a)
    {
    case 1:
        b -= 500;
        printf("Americano\n");
        break;
    case 2:
        b -= 400;
        printf("Cafe Latte\n"); 
        break;
    case 3:
        b -= 300;
        printf("Lemon Tea\n");
        break;
    default:
        break;
    }

    c = b / 500;
    d = b % 500 / 100;
    printf("%d %d", c, d);

}