#include <stdio.h>

int reverse_num(int x);
int del_dupnum(int x);

int main() {
    int n, m, mn, max = 0, t;
    while (scanf("%d", &n) && n >= 0) {
        m = del_dupnum(reverse_num(n));
        printf(" %d", m);
        t = (n - m > 0 ? n - m : m - n);
        if (t > max){
            max = t;
            mn = n;
        }
    }

    printf("\n%d %d\n", mn, max);

    return 0;
}

int reverse_num(int x) {
    int t = 0;
    while (x) {
        t = t*10 + x%10;
        x /= 10;
    }
    return t;
}

int del_dupnum(int x) {
    int a[9], b[9];
    int i = 0, t = 0, tt = 0;

    while (x) {
        a[i++] = x % 10;
        x /= 10; 
    }
    for (int k = i - 1; k >= 0; k--)
        b[t++] = a[k];
    
    t = 0;

    for (int j = 0; j < i; j++) {
        for (int k = 0; k < j; k++) {
            if (b[j] == b[k]) {
                t = 1;
                break;
            }
        }
        if (!t) a[tt++] = b[j];
        t = 0;
    }
    t = 0;
    for (i = 0; i < tt; i++) {
        t = t * 10 + a[i];
    }

    return t;
}