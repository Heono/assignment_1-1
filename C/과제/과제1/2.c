#include <stdio.h>

int main() {
    // 연도 입력 받는 변수
    int a;
    scanf("%d", &a);

    // 윤년인 경우 L을 평년인 경우 C를 출력
    // 4로 나누어떨어지고 100으로 안나누어떨어지는 경우거나 400으로 나누어떨어지는 경우 윤년
    ((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0) ? printf("L") : printf("C");

    return 0;
}