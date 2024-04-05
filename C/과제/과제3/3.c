#include <stdio.h>

int main() {
    // 입력받은 값, 전에 입력 받은 값 저장
    int n, n_pre = 0;
    // 카운터 변수, 최대 카운트 횟수 저장 변수
    int c = 1, cMax = 0;

    while (1) {
        // 정수 입력 받기
        scanf("%d", &n);
        // 종료 조건
        if (n == 0) {
            if (c > cMax) cMax = c;
            c = 1;
            break;
        }
        // 부호 같은 경우 카운트
        if (n * n_pre > 0) c++;
        // 부호 다른 경우
        // 지금까지 횟수를 최대 횟수와 비교후 저장
        // 카운트 변수 초기화
        else if (n * n_pre < 0) {
            if (c > cMax) cMax = c;
            c = 1;
        }
        // 처음 시작할때 카운트
        else c = 1;
        // 전에 입력한 정수에 저장
        n_pre = n;
    }

    // 출력
    printf("%d", cMax);

    return 0;
}