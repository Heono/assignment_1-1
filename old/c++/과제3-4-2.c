#include <stdio.h>

int main() {
    int treasure, input, up = 0, down = 0, answer = 0;
    // treasure : 찾기 원하는 수, input : 입력 받은 수, up : 찾기 원하는 수보다 큰 경우의 횟수 저장, down :  작은 경우 저장, answer : 같은 경우 저장
    scanf("%d", &treasure); // 입력 받기
    while (1) { // 무한 반복
        scanf("%d", &input); // 입력 받기

        if (input == 0) break; // 입력 받은 수가 0일 경우 반복문 종료

        while (input > 0) { // 입력 받은 수가 0보다 클 경우 반복
            if (input % 10 > treasure) up++; // 입력 받은 수의 일의자리수가 정답보다 클 경우 카운트 
            else if (input % 10 < treasure) down++; // 작을 경우 카운트
            else answer++; // 같을 경우 카운트

            input = (input - input%10) / 10; // 일의 자리수 지우기
        }
    }

    printf("%d %d %d", answer, down, up); // 결과 출력
    return 0; // 종료
}