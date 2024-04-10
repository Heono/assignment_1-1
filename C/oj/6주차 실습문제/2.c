#include <stdio.h>

int main() {
    char a;
    int isU = 0;
    char f = 'Z';
    char l = 'a';

    while (1) {
        scanf("%c", &a);

        if (a == '0') break;
        if ('A' <= a && a <= 'Z') {
            isU = 1;
            if (a < f) f = a;
        }
        else if ('a' <= a && a <= 'z') {
            if (a > l) l = a;
        }
    }

    if (isU) printf("%c", f);
    else printf("%c", l);

    return 0;
}