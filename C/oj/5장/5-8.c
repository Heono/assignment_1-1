#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    
    /*
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) printf("leap year");
            else printf("common year");
        }
        else printf("leap year");
    }
    else printf("common year");
    */

    if (a % 4 != 0) {
        printf("common year");
        return 0;
    }
    if (a % 100 != 0) {
        printf("leap year");
        return 0;
    }
    if (a % 400 != 0) {
        printf("common year");
        return 0;
    }
    else printf("leap year");

    return 0;
}