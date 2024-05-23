#include <stdio.h>

int main() {
    int a[5]; // N = 5;
    int t;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // 오름차순 정렬 (버블 정렬 -> 계속 나옴)
    for (int i = 0; i < 4; i++) { // N-1 번 반복 -> 큰 수들이 뒤로 감 -> 오름차순으로 정렬 됨
        for (int j = 0; j < 4; j++) { // 이거 다 돌고 나면 제일 큰 수가 맨 뒤로 감
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
}