#include <stdio.h>

int main() {
    // 변수 선언
    int a;
    // 5자리 양의 정수 입력 받기
    scanf("%d", &a);

    // 10000
    // 10100
    // 10200 인 경우 서울 출력
    // 10300
    // 10400 인 경우 부산 출력
    // 10500 인 경우 광주 출력
    // 그 외에는 넌 출력
    switch (a) {
        case 10000:
        case 10100:
        case 10200: printf("Seoul"); break;
        case 10300: 
        case 10400: printf("Busan"); break;
        case 10500: printf("Gwangju"); break;
        default: printf("none"); break;
    }
      
    return 0;
}