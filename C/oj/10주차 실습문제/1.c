#include <stdio.h> 

int main() {
    int same[100];
    int n, t1, t2 = 0, cnt = 0;

    while (1) {
        scanf("%d", &n);

        if (n <= 0) break;

        t1 = n;
        t2 = 0;

        while (t1) {
            t2 = t2*10 + t1 % 10;
            t1 /= 10;
        }

        if (n == t2) {
            same[cnt] = n;
            cnt++;
        }
    }

    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - 1; j++) {
            if (same[j] < same[j+1]) {
                t1 = same[j];
                same[j] = same[j+1];
                same[j+1] = t1;
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d ", same[i]);
    }
    
    return 0;
}