#include <stdio.h>

int main() {
    // 찾기 원하는 정수 저장하는 변수
    int a;
    // 정수 입력 받기
    scanf("%d", &a);

    // 정수 저장하는 변수
    int n;
    // 임시 변수
    int t;

    // 업, 정답, 다운
    int u = 0, r = 0, d = 0;

    while (1) {
        // 정수 입력 받기
        scanf("%d", &n);
        // 종료 조건
        if (n == 0) {
            break;
        }

        // 정수를 임시 변수에 저장
        t = n;
        // 자리수 추출해서 찾기 원하는 정수와 비교
        while (t != 0) {
            // 자리수가 찾기 원하는 정수보다 클 경우
            if (a < t%10) {
                u++;
            }
            // 작을 경우
            else if (a > t%10) {
                d++;
            }
            // 같은 경우
            else {
                r++;
            }
            // 자리수 낮추기
            t /= 10;
        }
    }

    // 결과 출력
    printf("%d %d %d", r, d, u);

    return 0;
}