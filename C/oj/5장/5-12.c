#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a); getchar();
    scanf("%d", &b);

    int t1 = 0, t2 = 0;
    
    switch(a) {
        case 1:
            printf("Americano\n");
            b -= 500;
            t1 = b / 500;
            t2 = (b % 500) / 100;
            printf("%d %d", t1, t2);
            break;
        case 2:
            printf("Cafe Latte\n");
            b -= 400;
            t1 = b / 500;
            t2 = (b % 500) / 100;
            printf("%d %d", t1, t2);
            break;
        case 3:
            printf("Lemon Tea\n");
            b -= 300;
            t1 = b / 500;
            t2 = (b % 500) / 100;
            printf("%d %d", t1, t2);
            break;
    }
    

    /*
    if (a == 1) {
        printf("Americano\n");
        b -= 500;
        t1 = b / 500;
        t2 = (b % 500) / 100;
        printf("%d %d", t1, t2);
    }
    else if (a == 2) {
        printf("Cafe Latte\n");
        b -= 400;
        t1 = b / 500;
        t2 = (b % 500) / 100;
        printf("%d %d", t1, t2);
    }
    else if (a == 3) {
        printf("Lemon Tea\n");
        b -= 300;
        t1 = b / 500;
        t2 = (b % 500) / 100;
        printf("%d %d", t1, t2);
    }
    */

    return 0;
}