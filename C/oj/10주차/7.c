// ********************
#include <stdio.h>

int main() {
    int a[10];
    int b[10];
    int bC = 0;
    int cnt = 0;
    int flag = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        cnt = 0;
        flag = 0;

        if (i != 0) {
            for (int j = 0; j < bC; j++) {
                if (a[i] == b[j]) flag = 1;
            }
        }
        if (flag) continue;

        for (int j = 0; j < 10; j++) {
            if (a[i] == a[j]) {
                cnt++;
            }
        }
        b[bC] = a[i];
        printf("%d %d\n", a[i], cnt);
        bC++;
    }

    return 0;
}