#include <stdio.h>

int main() {
    int a = 0;
    int min = -1, max = -1;
    int t = 0;
    int cnt = 0;

    while (1) {
        scanf("%d", &a);

        if (a == 0) break;

        t = a;
        cnt = 0;

        while (t) {
            a *= 10;
            a += t%10;
            t /= 10;
        }

        printf("%d ", a);

        /*
        if (min == -1 && max == -1) {
            min = a;
            max = a;
        }

        min > a ? min = a : printf("");
        max < a ? max = a : printf("");
        */

        // 이게 훨씬 간결함
        if (min == -1 || min > a) min = a;
        if (max == -1 || max < a) max = a;

        while (a) {
            if ((a%10) == 3) cnt++;
            a /= 10;
        }
        
        printf("%d ", cnt);
    }


    printf("\n%d %d", min, max);

    return 0;
}