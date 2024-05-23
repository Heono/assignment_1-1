#include <stdio.h>

int main() {
    char a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%c", &a[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if ('A' <= a[i] && a[i] <= 'Z') printf(" %c", a[i]);
    }

    return 0;
}