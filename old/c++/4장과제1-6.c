#include <stdio.h>

int main() {
    int a, b, c, result, t; // 변수 선언
    scanf("%d %d %d", &a, &b, &c); // 입력 받은 값 저장
    ((a > b) && (b > c) || (b > a) && (b < c)) ? (result = b) : (t = 0); // a > b > c 이거나 c > b > a인 경우 t = 0은 문법 상 들어가는 공백 채우기 용
    ((b > a) && (a > c) || (a > b) && (a < c)) ? (result = a) : (t = 0); // b > a > c 이거나 c > a > b인 경우
    ((a > c) && (c > b) || (a < c) && (c < b)) ? (result = c) : (t = 0); // a > c > b 이거나 b > c > a인 경우
    printf("%d", result); // 출력
    return 0; // 종료
}