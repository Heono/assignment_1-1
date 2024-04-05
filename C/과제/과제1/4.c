#include <stdio.h>

int main() {
    // 4자리 양수 입력받음
    int a;
    scanf("%d", &a);

    // 변수 설정
    int b = 0;
    int c = a;

    // 천의 자리 집어넣기
    b += (a % 10) * 1000;
    a /= 10;
    // 백의 자리 집어넣기
    b += (a % 10) * 100;
    a /= 10;
    // 십의 자리 집어넣기
    b += (a % 10) * 10;
    a /= 10;
    // 일의 자리 집어넣기
    b += a;

    // 절댓값 계산
    a = (b - c > 0) ? b - c : c - b;

    // 출력
    printf("%d", a);    
    return 0;
}