#include <stdio.h>

/*
12'3'45 -> 중간값 : 3
##X## 3*2-1
#XOX#
XXXXX

1234'5'6789 -> 중간값 : 5
####X#### 5*2 -1 
###XOX###
##XOOOX##
#XOOOOOX#
XXXXXXXXX
*/

int main() {
    int a; // 높이를 저장하는 변수
    int middle; // (2*a - 1) 의 중간 값을 저장할 변수 
    while (1) { // 무한 루프
        scanf("%d", &a); // 입력 받기
        if (a == 0 || a == 1 || a < 0 || a%3 == 0) break; // 만약 a의 값이 종료 조건을 만족할 경우
        middle = a; // 중간 값 설정

        for (int y = 1; y <= a; y++) { // y좌표 증가(위 : - / 아래 : +)
            for (int x = 1; x <= a*2 - 1; x++) { // x좌표 증가  
                if (x >= middle - (y - 1) && x <= middle + (y - 1)) { // 탑 쌓기
                    if ((x >= middle - (y - 2) && x <= middle + (y - 2)) && (y != a)) printf("O"); // 가운데에 O 넣기
                    else printf("X"); // 탑 쌓기
                }
                else // 탑이 아닌경우
                    printf(" "); // 공백 문자 추가
            }
            printf("\n"); // 줄 바꿈
        }
    }

    return 0; // 종료
}