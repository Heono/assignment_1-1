#include <stdio.h>

int main() {
    char x[101] = "", y[101] = "", ch;
    int xI = 0, yI = 0, t;

    while (scanf("%c", &ch) && ch != '*') {
        x[xI++] = ch;
    }
    while (scanf("%c", &ch) && ch != '*') {
        y[yI++] = ch;
    }

    t = (xI > yI ? yI : xI);

    for (int i = 0; i < t; i++) {
        if (x[i] < y[i]) {
            printf("%s", x);
            return 0;
        }
        else if (x[i] > y[i]) {
            printf("%s", y);
            return 0;
        }
    }

    // aa 가 aaa 보다 먼저 나타남.
    if (t == xI) printf("%s", x);
    else if (t == yI) printf("%s", y);

    return 0;
}