#include <stdio.h>

int main() {
    int x[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
    }

    int cnt[6] = { 0, }; // 배열 전체를 0으로 초기화

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 10; j++) {
            if (x[j] == i) cnt[i]++;
        }
        printf("%d ", cnt[i]);
    }

    return 0;
}