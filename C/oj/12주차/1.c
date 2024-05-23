#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int index = 0;
    int x[100];
    int isE = 0;

    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        if (t > 0) x[index++] = t;
    }

    isE = index % 2 == 0 ? 1 : 0;

    for (int i = 0; i < index - 1; i++) {
        for (int j  = 0; j < index - 1; j++) {
            if (isE && x[j] < x[j+1]) {
                int t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
            else if (!isE && x[j] > x[j+1]) {
                int t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
        }
    }
    int max = 1;
    int cnt = 1;
    int last = 0;
    for (int i = 0; i < index - 1; i++) {
        if (x[i] % 2 == 1 && x[i+1] % 2 == 1) {
            cnt++;
            if (cnt > max) {
                max = cnt;
                last = i+1;
            }
        }
        else cnt = 1;
    }

    printf("%d\n", index);

    for (int i = 0; i < index; i++)
        printf("%d ", x[i]);

    printf("\n%d", max);

    return 0;
}