#include <stdio.h>

int main() {
    int a; // 변수 설정
    scanf("%d", &a);
    // 변수 a에 입력받은 값 저장
    char ch = (((a % 4 == 0) && !(a % 100 == 0)) || a % 400 == 0) * 'L' + // 윤년 판별
    !(((a % 4 == 0) && !(a % 100 == 0)) || a % 400 == 0) * 'C'; // 평년 판별
    //윤년이면 변수 ch에 L을 평년이면 C를 저장
    
    printf("%c", ch);
    //출력

    return 0;
}