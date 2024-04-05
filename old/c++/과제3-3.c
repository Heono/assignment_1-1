#include <stdio.h> 

int main() {
    int a, previous_num = 0, count = 1, MaxCount = 0;
    // a는 입력 값을 저장하는 변수, previous_num은 전에 입력받은 숫자를 저장, count는 같은 부호의 정수 개수 저장, MaxCount는 최대 회수 저장
    scanf("%d", &a); // 입력 받기
    previous_num = a; // 전에 입력 받은 수 저장

    while (1) { // 입력 받은 수가 0이 아닐 경우 반복
        scanf("%d", &a); // 입력 받기
        if (a == 0) { // 만약 입력 받은 수가 0일 경우
            if (count > MaxCount) // 현재 카운트가 최대 횟수 보다 클 경우
                MaxCount = count; // 현재 카운트를 최대 횟수로 설정
            break; // 반복문 종료
        } 
        if (previous_num * a > 0) count++; // 부호가 같은 경우 카운트 + 1
        else  { // 부호가 다를 경우
            if (count > MaxCount) // 현재 카운트와 최대 카운트 비교
                MaxCount = count; // 설정
            count = 1; // 카운트 초기화
        }
        previous_num = a; // 현재 수를 전에 입력 받은 수로 저장
    }

    printf("%d", MaxCount); // 결과 출력
    return 0; // 종료
}