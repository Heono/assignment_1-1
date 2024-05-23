#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x[n];
    int cnt = 1;
    int max = 0;
    int last = 0;


    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (x[i] * x[i+1] < 0) {
            cnt++;
            if (cnt >= max) {
                max = cnt;
                last = i + 1;
            }
        }
        else {
            cnt = 1;
        }
    }

    if (!max) printf("%d\n %d", 1, x[n-1]);
    else {
        printf("%d\n", max);
        for (int i = last - max + 1; i <= last; i++)
            printf(" %d", x[i]);
    }

    return 0;
}