#include <stdio.h>

int main() {
    // 배열 및 변수 설정
    int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int f, r, m, t;

    // 입력 받기
    scanf("%d%d%d", &f, &r, &m);

    // 끝의 값 임시 변수 티에 저장
    t = a[r];

    // 오른쪽으로 쉬프트
    for (int i = r; i > r - m; i--) {
        if (i == r - m + 1) a[i] = t;
        else a[i] = a[i-1];
    }

    //결과 출력
    for (int i = 0; i < 20; i++) printf("%d ", a[i]);

    // 종료
    return 0;
}