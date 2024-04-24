// *****
#include <stdio.h>

int main() {
    char a;
    char fC = 'z', sC = 'z';

    while (1) {
        scanf("%c", &a);
        if ('A' <= a && a <= 'Z') break;
        if (a < fC) {
            sC = fC;
            fC = a;
        }
        else if (a < sC && fC < sC) sC = a; // 이거 중요
    }
    printf("%c%c", fC, sC);

    return 0;
}