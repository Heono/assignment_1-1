#include <stdio.h>

int main() {
    int t; // 변수 선언
    scanf("%d", &t); // 입력받은 값 저장
    int a, b, c, d; // 변수 선언
    a = t/1000; // 천의 자리수 저장
    b = t/100 - a*10; // 백의 자리수 저장
    c = t/10 - a*100 - b*10; // 십의 자리수 저장
    d = t%10; // 일의 자리수 저장
    int reverse = d * 1000 + c * 100 + b * 10 + a; // 뒤집은 숫자 저장
    int result = ((t - reverse) >= 0) ? t - reverse : (t - reverse)*-1; // 원래 수와 뒤집은 숫자와의 차의 절댓값 저장
    printf("%d", result); // 출력
    return 0; // 종료 
}