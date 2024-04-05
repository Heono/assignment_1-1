#include <stdio.h>

int main() {
    // 높이 변수
    int h;
    
    while (1) {
        // 높이 입력
        scanf("%d", &h);

        // 종료 조건
        if (h <= 0 || h == 1 || h % 3 == 0) {
            break;
        }

        for (int y = 0; y < h; y++) {
            for (int x = 0; x < 2*h - 1; x++) {
                // 맨위, 맨아래 설정
                if (y == 0 || y == h - 1) {
                    // X 쌓기
                    if (h - 1 - y <= x && x <= h - 1 + y) printf("X");
                    // 빈칸 출력
                    else printf(" ");
                }
                else {
                    // X 쌓기
                    if (h - 1 - y == x || h - 1 + y == x) printf("X");
                    // O 쌓기
                    else if (h - 1 - y < x && x < h - 1 + y) printf("O");
                    // 빈칸 출력
                    else printf(" ");
                }
            }
            // 줄넘기기
            printf("\n");
        }
    }
    // 종료
    return 0;
}