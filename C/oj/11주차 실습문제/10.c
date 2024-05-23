#include <stdio.h>

int del_dupnum(int x);

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", del_dupnum(n));

    return 0;
}

int del_dupnum(int x) {
    int i = 0, cnt = 0, l = 0;
    int a[9], b[9];

    while (x) {
        a[i++] = x % 10;
        x /= 10;
    }

    for (int j = i - 1; j > -1; j--)
        b[cnt++] = a[j];

    cnt = 0;

    for (int j = 0; j < i; j++) {
        for (int k = 0; k < j; k++) {
            if (b[j] == b[k]) {
                cnt = 1;
                break;
            }
        }
        if (!cnt) a[l++] = b[j];
        cnt = 0;
    }

    i = 0;

    for (int j = 0; j < l; j++)
        i = i * 10 + a[j];

    return i;
}