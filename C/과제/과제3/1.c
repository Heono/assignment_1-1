#include <stdio.h>

int main() {
    // 변수 설정
    int n, m, c = 0, Max = 0, tmp;
    // 입력 받기
    scanf("%d", &n);

    // n번 반복
    for (int t = 0; t < n; t++) {
        // 정수 m 입력 받기
        scanf("%d", &m);
        // 정수 m 출력
        printf("%d:", m);

        // 약수 개수 저장하는 변수
        c = 0;

        // 약수 출력
        // 나누어 떨어지면 약수 이므로 출력
        // 약수 개수 카운트
        for (int i = 1; i <= m; i++) {
            if (m % i == 0) {
                printf(" %d", i); 
                c++;
            }
        }
        // 약수 개수 출력
        printf(" %d\n", c);

        // 약수 개수 가장 많은 정수 저장
        if (c > Max) {
            Max = c;
            tmp = m;
        }
    }

    // 약수 개수 가장 많은 정수 출력
    printf("%d", tmp);

    return 0;
}