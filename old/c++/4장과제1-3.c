#include <stdio.h>

int main() {
    int a, b, c, A, B, C; // 변수 설정
    scanf("%d %d %d", &a, &b, &c);
    // 입력 받은 값 저장
    A = a/100, B = b/100, C = c/100; // 각 수의 백의 자리수 추출
    char ch = ((A == B) && (B == C))*'T' +  // 각 수의 백의 자리수가 모두 같은 경우
                (((A == B) || (B == C) || (A == C)) && !((A == B) && (B == C)))*'D' + // 두 수의 백의 자리수만 같은 경우
                ((A != B) && (B != C) && (A != C))*'S'; // 백의 자리수가 모두 다른 경우
    printf("%c", ch); // ch 출력
    return 0;
}