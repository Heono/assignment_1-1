#include <stdio.h>

int main() {
    // 변수 설정
    int n, t = 0;
    // 정수 입력 받음
    scanf("%d", &n);

    // 배열 설정
    int a[n], b[n], max[(n/3) + 1], min[(n/3) + 1];

    // 배열에 입력
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    // 역순 출력
    for (int i = n - 1; i > -1; i--) printf(" %d", a[i]);
    
    /*
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) printf("\n");
        printf(" %d", a[i]);
    }
    */

    // 배열 복사
    for (int i = 0; i < n; i++) b[i] = a[i];

    // 줄넘기
    printf("\n");

    // 엔이 일인 경우 밑의 반복문이 안돌아 따로 설정
    if (n == 1) {
        printf(" %d\n %d", a[0], a[0]);
        return 0;
    }

    // 엔이 일이 아닐 때
    while (n != 1) {

        // 앞에서 부터 3개씩 나눠 최대값, 최소값 배열에 저장
        for (int i = 0; i < n; i += 3) {
            max[i/3] = a[i];
            min[i/3] = b[i];
            for (int j = i; j < i + 3 && j < n; j++) {
                if (a[j] > max[i/3]) max[i/3] = a[j];
                if (b[j] < min[i/3]) min[i/3] = b[j];
            }
            // 배열 원소 개수 카운트
            t++;
        }

        // 맥스 출력
        for (int i = 0; i < t; i++) printf(" %d", max[i]);

        printf("\n");

        // 미니멈 출력
        for (int i = 0; i < t; i++) printf(" %d", min[i]);

        // 새롭게 엔 값 설정
        n = t;
        // 카운터 변수 초기화
        t = 0;

        // 배열 복사 붙여넣기
        for (int i = 0; i < n; i++) {
            a[i] = max[i];
            b[i] = min[i];
        }

        // 줄넘기
        printf("\n");
    }

    // 종료
    return 0;
}