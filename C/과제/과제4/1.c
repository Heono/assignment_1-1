// ************************
#include <stdio.h>

int main() {
    /*
    변수 설정
    xI = x의 인덱스
    yI = y의 인덱스
    t = 임시 변수
    f = 회문수임을 판단하는 플레그, 회문수일 경우 1 아님 0
    나머지는 문제에서 주어진 변수들
    */

    int m1, m2, n, x[100], y[100], xI = 0, yI = 0, t, f = 1;
    // 입력 받기
    scanf("%d%d", &m1, &m2);

    //  m1 이 m2 보다 클 경우 위치 바꾸기
    if (m1 > m2) {
        t = m1;
        m1 = m2;
        m2 = t;
    }

    // 같은 경우 m1만 사용하기 위함
    else if (m1 == m2) m2 = 101;

    while (1) {
        // 정수 입력 받기
        scanf("%d", &n);

        // 종료 조건
        if (n <= 0) break;

        // 플래그와 인덱스, 임시 변수 초기화
        f = 1;
        yI = 0;
        t = n;

        // 가장 마지막 자릿수부터 순차적으로 배열 y에 저장
        while (t) {
            y[yI] = t % 10;
            t /= 10;
            yI++;
        }

        // 임시 변수 초기화
        // m1만 지울 경우 인덱스 하나 지우고 m1, m2 모두 지울 경우 인덱스 두개 지우기
        t = yI;

        // m1 위치 값 지우기
        for (int j = m1; j < yI; j++) {
            y[j] = y[j+1];
            t = yI - 1;
        }

        // m2 위치 값 지우기
        for (int j = m2 - 1; j < yI-1; j++) {
            y[j] = y[j+1];
            t = yI - 2;
        }

        
        // 회문수 확인
        for (int j = 0; j < t / 2; j++) {
            if (!(y[j] == y[t - 1 - j])) f = 0;
        }

        // 회문수 인 경우 x 배열에 저장
        // 그리고 x 인덱스 + 1
        if (f) {
            x[xI] = n;
            xI++;
        }
    }

    // 내림차순 버블 정렬
    for (int j = 0; j < xI - 1; j++) {
        for (int k = 0; k < xI - 1; k++) {
            if (x[k] < x[k+1]) {
                t = x[k];
                x[k] = x[k+1];
                x[k+1] = t;
            }
        }
    }

    // 회문수가 하나도 없을 경우
    if (xI == 0) printf("none");
    // 아닌 경우
    else for (int j = 0; j < xI; j++) printf("%d ", x[j]);

    return 0;

}