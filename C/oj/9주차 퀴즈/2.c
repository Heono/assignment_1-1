#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    if (!(1 <= n && n <= 100)) {
        printf("ERROR");
        return 0;
    }

    int p[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if (!(1 <= p[i] && p[i] <= 100)) {
            printf("ERROR");
            return 0;
        }
    }

    while (n > 1) {
        for (int i = 0; i < n; i += 2) {
            if (p[i] < p[i+1]) p[i/2] = p[i+1];
            else p[i/2] = p[i];
            printf("%d ", p[i/2]);
            cnt++;
        }
        printf("\n");
        n = cnt;
        cnt = 0;
    }

    return 0;
}