#include <stdio.h>

int main() {
    // 세 자리 양의 정수 입력받기
    int a;
    scanf("%d", &a);
    
    // 변수 설정
    int t1, t2, t3;

    // 일의 자리수 추출
    t1 = a % 10;
    a /= 10;
    // 십의 자리수 추출
    t2 = a % 10;
    a /= 10;
    // 백의 자리수 추출
    t3 = a;
    
    // 카운트 변수
    int c = 1;

    // 비교
    c += (t1 == t2) || (t1 == t3);
    c += (t2 == t3);

    // 결과 출력
    printf("%d", c);

    return 0;
    
}