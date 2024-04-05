#include <stdio.h>

int main() {
    int a; // 입력 받을 변수 선언
    scanf("%d", &a); // 입력 받기
    if (a == 10000 || a == 10100 || a == 10200) printf("Seoul"); // 서울 일 경우
    else if (a == 10300 || a == 10400) printf("Busan"); // 부산 일 경우
    else if (a == 10500) printf("Gwangju"); // 광주 일 경우
    else printf("none"); // 셋중 하나도 아닐 경우
    return 0;// 종료
}