#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p;

    int key = 0;
    int ten = 0;
    int one = 0;
    int tt = 0;
    int t = 0;


    for (int i = 0; i < n; i++) {
        scanf("%d", &p);

        if (10000 > p || p > 99999) {
            printf("none\n");
            continue;
        }



        one = p % 10; p /= 10;
        ten = p % 10; p /= 10;
        key = p % 10; p /= 10;
        t = p % 10; p /= 10;
        tt = p;

        if ((tt == t && t == key) || (tt != t && t != key && tt != key)) {
            printf("none\n");
            continue;
        }

        if (!(one == 0 && ten == 0)) {
            printf("none\n");
            continue;
        }

        switch (key) {
            case 0:
            case 1:
            case 2:
                printf("CE\n");
                break;
            case 3:
            case 4:
                printf("SW\n");
                break;
            case 5: 
                printf("DS\n");
                break;
            default:
                printf("none\n");
        }
    }

    return 0;
}