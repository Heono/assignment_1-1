#include <stdio.h>

int main() {
    int a;
    int t;
    scanf("%d", &a);
    t = 2*a - 1;

    for (int x = 0; x < a; x++) {
        for (int y = 0; y < t; y++) {
            if ((t-1)/2 - x <= y && y <= (t-1)/2 + x) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }


    return 0;
    /*
    ##X##
    #XXX#
    XXXXX
    */
}