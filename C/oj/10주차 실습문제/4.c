#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int first[n];
    int second[n];
    int rank[n];

    double td = 0;
    int ti = 0;

    double avg[n];

    for (int i = 0; i < n; i++) {
        rank[i] = 0;
        scanf("%d", &first[i]);
        avg[i] = first[i] * 0.4;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &second[i]);
        avg[i] += second[i] * 0.6;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (avg[j] < avg[j+1]) {
                td = avg[j];
                avg[j] = avg[j+1];
                avg[j+1] = td;

                ti = first[j];
                first[j] = first[j+1];
                first[j+1] = ti;

                ti = second[j];
                second[j] = second[j+1];
                second[j+1] = ti;
            }
        }
    }

    ti = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (avg[i] < avg[j]) rank[i]++;
        }
        rank[i]++;
    }

    char aa = 'F';
    for (int i = 0; i < n; i++) {
        if (rank[i] <= n * 0.3) aa = 'A';
        else if (rank[i] <= n * 0.7) aa = 'B';
        else if (second[i] >= 60) aa = 'B';
        else aa = 'F';
        printf("%d %d %.1f %d %c\n", first[i], second[i], avg[i], rank[i], aa);
    }

    return 0;
}