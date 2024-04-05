#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int b = (a*2-1)/2 + 1;
    /*
    3
    ##0##
    #000#5
    00000
    */

    for (int i = 1; i <= a; i++) {  // 1 2 3
        for (int j = 1; j <= 2*a-1; j++) { // 12345
            if (j >= b - (i-1) && j <= b + (i-1)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}