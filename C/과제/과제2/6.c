#include <stdio.h>

int main() {
    // 세개의 정수 선언
    int a, b, c;
    // 입력 받기
    scanf("%d %d %d", &a, &b, &c);

    // 더하기
    if (c == a + b) printf("+\n");
    // 빼기
    if (c == a - b) printf("-\n");
    // 곱하기
    if (c == a * b) printf("*\n");
    // 나누기
    if (c == a / b) printf("/\n");
    // 아무것도 아닐경우
    if (c != a + b && c != a - b && c != a * b && c != a / b) printf("Incorrect");

    return 0;
}