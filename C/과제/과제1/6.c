#include <stdio.h>

int main() {
    // 정수 세 개 입력 받기
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 연산에 필요한 변수 설정 
    int p = 0, q = 0, r = 0;
    // a가 중앙값인지 판단
    p = ((b < a) && (a < c)) || ((c < a) && (a < b));
    // b가 중앙값인지 판단
    q = ((a < b) && (b < c)) || ((c < b) && (b < a));
    // c가 중앙값인지 판단
    r = ((b < c) && (c < a)) || ((a < c) && (c < b));
    
    // 결과 출력을 위한 변수 설정
    int o = 0;
    // 중앙값 출력
    o = a*p + b*q + c*r;
    printf("%d", o);
 
    return 0; 
}