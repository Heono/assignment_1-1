#include <stdio.h>

int main() {
    // 두 개의 양의 정수 
    int n, m;
    // 입력 받기
    scanf("%d %d", &n, &m);

    int i; // n과 m 사이의 수
    int c; // i를 나누는 수. 그래서 2부터 시작
    int t1; // c의 지수. i가 c로 몇번 나눠떨어졌는지 저장
    int t2; // 약수의 개수를 저장하는 변수 
    int t2Max = 0; // 약수 개수의 최대값을 저장하는 변수
    int t3; // i를 소인수 분해 하기 위해 i값을 저장하는 변수
    int t3Max = 0; // 약수 개수가 최대인 정수를 저장하는 변수
    int sum; // 소인수 지수의 합을 저장하는 변수
    int sumMax = 0; // 약수 개수가 최대인 정수의 소인수 지수의 합을 저장하는 변수

    // 소인수 분해 + 약수 개수가 가장 큰 수 구하기 + 소인수 지수 합 구하기
    for (i = n; i <= m; i++) {
        // 변수 값 초기화
        t2 = 1; c = 2; t3 = i; sum = 0;
        while (t3 != 1) {
            t1 = 0;
            while (t3 % c == 0) {
                t3 /= c;
                t1++;
            }
            t2 *= t1 + 1;
            sum += t1;
            c++;
        }

        if (t2 > t2Max) {
            // 최대값 저장
            t2Max = t2; t3Max = i; sumMax = sum;
        }
    }

    // 결과 출력
    printf("%d %d %d", t3Max, t2Max, sumMax);

    // 0값 리턴
    return 0;
}