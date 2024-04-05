#include <stdio.h>

int main() {
    int a, b, c, M, m; // 앞의 세개 변수는 입력 받은 값을 저장할 변수, M은 최댓값, m은 최솟값을 저장할 변수 선언
    scanf("%d %d %d", &a, &b, &c); // 입력 받음

    if (a > b && a > c) M = a; // 에이가 클 경우
    else if (b > a && b > c) M = b; // 비가 클 경우
    else if (c > a && c > b) M = c; // 씨가 클 경우

    if (a < b && a < c) m = a; // 에이가 작을 경우  
    else if (b < a && b < c) m = b; // 비가 작을 경우
    else if (c < a && c < b) m = c; // 씨가 작을 경우

    if (a == b && b == c) { // 셋이 같을 경우
        M = a; // 최대 최소를 에이로 설정
        m = a;
    }
    
    int p = (a + b + c) / 3; // 평균
    if (p >= 90) printf("A"); // 90 이상
    else if (p >= 80) printf("B"); // 80 이상
    else if (p >= 70) printf("C"); // 70 이상
    else if (p >= 60) printf("D"); // 60 이상
    else printf("F"); // 나머지

    printf("\nmax: %d\nmin: %d", M, m); // 출력

}