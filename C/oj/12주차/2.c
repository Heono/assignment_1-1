#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int x[100];

    double avg = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &x[i]);

    for (int i = 0; i < n; i += m) {
        avg = 0;
        int j;
        for (j = i; j < i + m && j < n; j++) {
            avg += x[j];
        }
        avg /= (double)(j - i);

        for (j = i; j < i + m && j < n; j++) {
            if (x[j] >= avg) printf("%d ", x[j]);
        }
    }

    printf("\n");

    for (int i = 0; i < n; i += m) {
        int f = x[i];
        int s = 0;
        for (int j = i; j < i + m && j < n; j++) {
            if (x[j] > f) {
                s = f;
                f = x[j];
            }
            else if (f > x[j] && x[j] > s) s = x[j]; 
        }
        if (!s) printf("%d ", f);
        else printf("%d ", s);
    }
}