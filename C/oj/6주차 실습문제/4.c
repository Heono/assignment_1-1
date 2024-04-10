#include <stdio.h>

int main() {
    int n, m;
    int t;
    int sum = 0;
    int is2 = 0, is3 = 0;
    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++) {
        t = i;
        sum = 0;
        while (t > 0) {
            sum += t % 10;
            t /= 10;
        }
        printf("%d\n", sum);
        if (sum % 2 == 0) is2++;
        if (sum % 3 == 0) is3++;
    }

    printf("%d %d", is2, is3);

    return 0;
}