#include <stdio.h>

int main() {
    // 변수 설정
    int a, b, c;
    int s;
    int M = 0, m = 0;
    // 세 과목 점수 입력 받기
    scanf("%d %d %d", &a, &b, &c);

    // 평균 내기
    s = (a + b + c) / 3;

    // 에이 출력
    if (s >= 90) printf("A\n");
    // 비 출력
    else if (s >= 80) printf("B\n");
    // 씨 출력
    else if (s >= 70) printf("C\n");
    // 디 출력
    else if (s >= 60) printf("D\n");
    // 에프 출력
    else printf("F\n");

    // 최대 최소 찾기
    M = a;
    m = a;
    
    // 최대값 찾기
    M < b ? M = b : printf("");
    M < c ? M = c : printf("");

    // 최소값 찾기
    m > b ? m = b : printf("");
    m > c ? m = c : printf("");

    // 최대 최소 출력
    printf("max: %d\nmin: %d", M, m);

    return 0;
}