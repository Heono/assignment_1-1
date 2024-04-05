#include <stdio.h>

int main() {
    // 정수 저장 변수
    int n;
    // 정수 입력 받기
    scanf("%d", &n);

    // 홀수만 역수
    int oRev = 0;
    // 짝수만 역수
    int eRev = 0;

    while (n > 0) {
        // 짝수 만 역수
        if ((n % 10) % 2 == 0) {
            eRev *= 10; // 이거 먼저 실행 시켜야함
            // 짝수 저장
            eRev += n % 10;
        }
        // 홀수 만 역수
        else {
            oRev *= 10; // 이거 먼저 실행 시켜야함
            // 홀수 저장
            oRev += n % 10;
        }
        // 정수 나누기
        n /= 10;
    }

    // 출력
    printf("%d %d", eRev, oRev);

    return 0;
}