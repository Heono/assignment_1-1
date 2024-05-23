#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    int max = 0;
    int min = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i += 3) {
        max = a[i];
        for (int j = i+1; j < i+3 && j < n; j++) {
            if (a[j] > max) max = a[j]; 
        }
        printf("%d ", max);
    }

    printf("\n");

    for (int i = 0; i < n; i += 3) {
        min = a[i];
        for (int j = i+1; j < i+3 && j < n; j++) { // 배열을 자동으로 0으로 초기화해서 j < n 조건도 추가해줘야함
            if (a[j] < min) min = a[j]; 
        }
        printf("%d ", min);
    }

    return 0;
}