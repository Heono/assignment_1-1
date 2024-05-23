#include <stdio.h>

int main() {
    int n, m;
    int x[100];
    double avg;
    int max, min;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i += m) {
        avg = 0;
        int j;

        // j < n 꼭 하자
        for (j = i; j < i + m && j < n; j++) {
            avg += x[j];
        }
        avg /= (double)(j - i);

        // j < n 꼭 하자
        for (int j = i; j < i + m && j < n; j++) {
            if (x[j] >= avg) printf(" %d", x[j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i += m) {
        max = x[i];
        // j < n 꼭 하자
        for (int j = i; j < i + m && j < n; j++) {
            if (max < x[j]) max = x[j];
        }
        printf(" %d", max);
    }
    printf("\n");
    for (int i = 0; i < n; i += m) {
        min = x[i];
        // j < n 꼭 하자
        for (int j = i; j < i + m && j < n; j++) {
            if (min > x[j]) min = x[j];
        }
        printf(" %d", min);
    }
    printf("\n");
    return 0;
}