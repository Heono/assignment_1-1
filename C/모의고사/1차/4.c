//*****
#include <stdio.h>

int main() {
    char a;

    char ll = -1;
    char fu = -1;

    int flag = 0;

    while (1) {
        scanf("%c", &a);

        if (a == '0') break;

        if (ll == -1 && fu == -1) {
            if ('A' <= a && a <= 'Z') flag = 1;
        }

        if ('a' <= a && a <= 'z') {
            if (ll < a || ll == -1) ll = a;
        }
        if ('A' <= a && a <= 'Z') {
            if (fu > a || fu == -1) fu = a;
        }
    }

    if (ll == -1 && fu != -1) printf("%c", fu);
    if (ll != -1 && fu == -1) printf("%c", ll);
    if (!flag && ll != -1 && fu != -1) printf("%c%c", ll, fu);
    if (flag && ll != -1 && fu != -1) printf("%c%c", fu, ll);

    return 0;
}