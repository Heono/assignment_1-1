// 짝수 홀수 or 소문자 대문자 이런식으로 나올 수도 있음
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s1 = 0, e1 = 0, s2 = 0, e2 = 0, c = 1;

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] * a[i+1] > 0 || i == n - 1) { 
            e1 = i;
            if (e1 - s1 >= e2 - s2) {
                e2 = e1; 
                s2 = s1; 
            }
            s1 = i + 1; 
        }
    }

    printf("%d\n", e2 - s2 + 1);

    for (int i = s2; i <= e2; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}