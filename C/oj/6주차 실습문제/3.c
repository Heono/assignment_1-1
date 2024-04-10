// ***********

#include <stdio.h>

int main() {
    char a;
    int flag = 0;
    int isFU = 0;
    int isMix = 0;
    char lL = 'a';
    char fU = 'Z';

    while (1) {
        scanf("%c", &a);

        if (a == '0') break;
        if (!flag && 'A' <= a && a <= 'Z') {
            isFU = 1;
            flag = 1;
        }
        else if (!flag && 'a' <= a && a <= 'z') {
            flag = 1;
        }

        if (flag && !isFU && 'A' <= a && a <= 'Z') {
            isMix = 1;
        }
        if (flag && isFU && 'a' <= a && a <= 'z') {
            isMix = 1;
        }

        if ('A' <= a && a <= 'Z') {
            if (a < fU) fU = a;
        }
        else if ('a' <= a && a <= 'z') {
            if (a > lL) lL = a;
        }
    }

    if (!isFU && !isMix) printf("%c", lL);
    else if (isFU && !isMix) printf("%c", fU);
    else if (!isFU && isMix) printf("%c%c", lL, fU);
    else if (isFU && isMix) printf("%c%c", fU, lL);

    return 0;
}