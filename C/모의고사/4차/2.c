#include <stdio.h>

int reverse_num(int n);
int del_dupnum(int n);

int main() {
    int n, m, mn, max = 0, t;
    
    while (scanf("%d", &n) && n >= 0) {
        m = del_dupnum(reverse_num(n));
        printf(" %d", m);
        t = n - m > 0 ? n - m : m - n;
        if (t > max) {
            max = t;
            mn = n;
        }
    }

    printf("\n%d %d", mn, max);
    return 0;
}

int reverse_num(int n) {
    int t = 0;
    while (n) {
        t = t * 10 + n % 10;
        n /= 10;
    }
    return t;
}

int del_dupnum(int n) {
    int x[9], y[9], i = 0, ii = 0, f = 0;
    while (n) {
        x[i++] = n % 10;
        n /= 10;
    }

    for (int j = 0; j < i; j++) {
        y[j] = x[i - 1 - j];
    }

    for (int j = 0; j < i; j++) {
        for (int k = 0; k < j; k++) {
            if (y[j] == y[k]) {
                f = 1;
                break;
            }
        }
        if (!f) {
            x[ii++] = y[j];
        }
        f = 0;
    }

    n = 0;
    for (i = 0; i < ii; i++)
        n = n * 10 + x[i];
    
    return n;
}