#include <stdio.h>

int main() {
    // 변수 설정
    char x[101] = "", y[101] = "", t;
    int m, i, cnt = 0, yI = 0, flag = 1;

    // 종료 조건 전까지 입력 받기
    for (i = 0; i < 100; i++) {
        scanf("%c", &t);
        if (t == '!') break;
        x[i] = t;
    }

    // 중복 문자 제거 한 문자열을 배열 와이에 저장
    for (int j = 0; j < i; j++) {
        for (int k = 0; k <= j; k++) {
            if (x[j] == x[k]) cnt++;
        }
        if (cnt == 1) y[yI++] = x[j];
        cnt = 0;
    }

    // 배열 와이 출력
    printf("%s\n", y);

    // 정수 입력 받고 엔터키 버리기
    scanf("%d", &m); getchar();

    // 입력 받은 정수 + 1 만큼 문자열 배열 설정, 문자열 종료를 나타내는 문자까지 저장해야하므로 +1 함
    char z[m + 1];

    // 문자열 입력받아서 제트 배열에 저장
    scanf("%s", z);

    // 제트 배열에 저장된 문자열 찾기
    for (i = 0; i < yI; i++) {
        if (y[i] == z[0]) {
            for (int j = 0; j < m; j++) {
                if (!(y[i + j] == z[j])) flag = 0;
            }

            // 찾은 경우 인덱스 출력 후 종료
            if (flag) {
                printf("%d", i);
                return 0;
            }
        }
    }

    // 못 찾았을 경우 넌 출력
    if (!flag) printf("none");

    // 종료
    return 0;
}