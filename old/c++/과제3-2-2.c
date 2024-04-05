#include <stdio.h>

int main() {
    int a, b, t1 = 0, t2 = 0, Max = 0, divisor_num = 1, divisor_sum = 0, Max_divisor_num = 0, Max_divisor_sum = 0;
    // a에서 부터 b까지, t1, t2는 temp 변수, Max는 약수 개수가 가장 큰수를 저장할 변수, divisor_num은 약수의 개수를 저장할 변수, divisor_sum은 소인수의 지수 합을 저장할 변수
    scanf("%d %d", &a, &b); // 입력 받기

    for (; a <= b; a++) { // a에서 부터 b까지 반복
        
        //12 6 3
        t2 = a; // 임시변수 t2에 a값 저장 
        //printf("a : %d\n", a);
        for (int i = 2; i <= t2; i++) { // 소인수 분해 시작
            while (t2 % i == 0) { // 소인수로 나누어 질 경우
                t1++; // 소인수 지수 개수 + 1을 임시 변수 t1에 저장
                t2 = t2 / i; // 나눈 몫을 임시 변수 t2에 저장 
            }
            //printf("t2 : %d\n", t2);

            divisor_sum += t1; // 소인수 지수 개수 저장
            divisor_num *= (t1 + 1); // 소인수 지수 개수 + 1 값을 곱하여 약수 개수 저장
            //printf("sum:%d\nnum:%d\n", divisor_sum, divisor_num);
            t1 = 0; // 임시 변수 t1 값 초기화
        }
        if (divisor_num > Max_divisor_num) { // 만약 현재 약수 개수가 최대 약수 개수 보다 클 경우
            Max_divisor_num = divisor_num; // 현재 약수 개수를 최대 약수 개수로 설정
            Max_divisor_sum = divisor_sum; // 소인수 지수 합 저장
            Max = a; // 현재 수를 약수 개수가 가장 큰 수로 저장
        }
        divisor_num = 1; // 약수 개수 초기화
        divisor_sum = 0; // 소인수 지수 합 초기화
    }

    printf("%d %d %d", Max, Max_divisor_num, Max_divisor_sum); // 결과 출력
}