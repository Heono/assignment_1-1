// 순위 메기는 거 복습 *****************
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x[20], rank[20];
    for (int i = 0; i < n; i++)
        scanf("%d", &x[i]);

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (x[j] < x[j+1]) {
                int t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
        }
    }

    rank[0] = 1;

    for (int i = 0; i < n; i++) rank[i] = i+1;
    for (int i = 0; i < n-1; i++) {
        if (x[i] == x[i+1]) rank[i+1] = rank[i];
    }

    for (int i = 0; i < n; i++) {
        if (rank[i] <= n * 0.3) printf("%d %d A\n", x[i], rank[i]);
        else if (rank[i] <= n * 0.7) printf("%d %d B\n", x[i], rank[i]);
        else printf("%d %d F\n", x[i], rank[i]);
    }

    return 0;
}