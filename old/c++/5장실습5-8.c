#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    if (a % 4 != 0 ) printf("common year");
    else {
        if (a % 100 != 0) printf("leap year");
        else {
            if (a % 400 == 0) printf("leap year");
            else printf("common year");
        }
    }    
}