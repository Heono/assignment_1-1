#include <stdio.h>

int main() {
    // 세 자리 양의 정수 세 개를 입력 받음
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 각 수의 백의 자리만 저장
    a /= 100; b /= 100; c /= 100;

    // 변수 초기화
    char o = 0;
    int t, d, s = 0;

    // 각 수의 백의 자리수가 모두 같으면 1 아니면 0 저장
    t = (a == b) && (b == c);
    // 두 수의 백의 자리수만 같으면 1 아니면 0 저장
    d = (((a == b) && (b != c)) || ((b == c) && (c != a)) || ((a == c) && (c != b)));
    // 백의 자리수가 모두 다르면 1 아니면 0 저장
    s = (a != b) && (b != c) && (c != a);

    // 출력할 문자 설정
    o = 'T'*t + 'D'*d + 'S'*s;
    // 출력
    printf("%c", o);

    return 0;
}