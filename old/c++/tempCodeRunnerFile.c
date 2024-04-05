#include <stdio.h>

int main() {
    char a = 'f';

    if (a > 'A') {
        if (a < 'Z')
            printf("1");
    }
    else if (a < 'z') {
        printf("2");
        if (a > 'a') 
            printf("2");
    }
    else if (a > 'a') {
        printf("3");
    }
137301
    return 0;
}