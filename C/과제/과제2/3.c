#include <stdio.h>

int main() {
    // 문자 저장 변수
    char a;
    // 정수 저장 변수
    int b;
    // 문자랑 정수 입력 받음
    scanf("%c %d", &a, &b);

    // 문자가 대문자인 경우
    if ('A' <= a && a <= 'Z') {
        // 계산
        a = (a - 'A' + b) % ('Z' - 'A' + 1) + 'A';
        // 출력
        printf("%c", a);
    }
    // 문자가 소문자인 경우
    else if ('a' <= a && a <= 'z') {
        // 계산
        a = (a - 'a' + b) % ('z' - 'a' + 1) + 'a';
        // 출력
        printf("%c", a);
    }
    // 알파벳이 아닌 경우 출력
    else printf("%c", a);

    return 0;
}