#include <stdio.h>

int main() {
    int a;
    int sum = 0;
    int cnt = 0;
    
    while (1) {
        scanf("%d", &a);
        if (a <= 0) break;
        if (a > 100) continue;

        sum += a;
        cnt++;
    }

    printf("%d %.2f %d", sum, (double)sum/cnt, cnt);

    return 0;
}