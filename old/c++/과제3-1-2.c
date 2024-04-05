#include <stdio.h>

int main() {
    int a = 0, count = 0, Max = 0, MaxNum = 0; // a는 입력값을 저장하는 변수, count는 약수 개수를 저장하는 변수, Max는 약수 개수를 비교하기 위한 변수, MaxNum은 약수 개수가 가장 큰 정수 값을 저장하는 변수

    scanf("%d", &a);

    int b[a]; // a개의 변수를 생성

    for (int i = 0; i < a; i++) { // a개의 정수를 입력 받음
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < a; i++) { // a개의 정수 개수만큼 반복
        printf("%d:", b[i]); // 정수 출력
        count = 0; // 카운트 초기화
        for (int j = 1; j <= b[i]; j++) { // 1부터 입력받은 정수 만큼 반복 
            if (b[i] % j == 0) { // 만약 입력받은 정수가 j로 나누어 떨어질 경우
                printf(" %d", j); // j (약수) 출력
                count++; // 약수 개수 + 1
            }
        }

        if (count > Max) { // 만약 현재 약수 개수가 최대 약수 개수보다 크다면
            Max = count; // 현재 약수 개수를 최대 약수 개수를 저장하는 변수에 저장
            MaxNum = b[i]; // 최대로 약수의 개수를 갖는 정수를 MaxNum에 저장
        }

        printf(" %d\n", count); // 약수 개수 출력
    }

    printf("%d", MaxNum); // 최대로 약수 개수를 갖는 정수를 출력

    return 0;
}