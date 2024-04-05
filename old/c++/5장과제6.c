#include <stdio.h>

int main() {
    int a, b, c; // 입력 받을 세 변수 선언
    scanf("%d %d %d", &a, &b, &c); // 입력 받기

    // 만약 사칙연산에 속하지 않을 경우 
    if ((a + b != c) && (a - b != c) && (a * b != c) && (a / b != c)) {
        printf("Incorrect"); // 출력
        return 0; // 종료
    }

    if (a + b == c) printf("+\n"); // 더하기 일 경우
    if (a - b == c) printf("-\n"); // 빼기 일 경우
    if (a * b == c) printf("*\n"); // 곱하기 일 경우
    if (a / b == c) printf("/\n"); // 나누기 일 경우

    return 0; // 종료

}