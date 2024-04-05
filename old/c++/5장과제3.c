#include <stdio.h>

int main() {
    char a; // 문자를 저장 할 변수 선언
    int b; // 숫자를 저장 할 변수 선언
    scanf("%c %d", &a, &b); // 입력 받기

    if (a >= 'A' && a <= 'Z') // 대문자일 경우
        printf("%c", 'A' + (a + b - 'A') % ('Z' - 'A' + 1)); // 변환 후 출력
    else if (a >= 'a' && a <= 'z') // 소문자일 경우
        printf("%c", 'a' + (a + b - 'a') % ('z' - 'a' + 1)); // 변환 후 출력
    else // 나머지 특수문자일 경우
        printf("%c", a); // 그냥 출력
    
    return 0; // 종료
}
