#include <stdio.h>

int main() {
    double a[10];
    int cnt;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        cnt = 0;
        for (int j = 0; j < 10; j++) {
            if (a[i] > a[j]) cnt++;
        }
        printf(" %d", cnt);
    }

    return 0;
}