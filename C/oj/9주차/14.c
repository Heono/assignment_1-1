#include <stdio.h>

int main() {
    char x[11], y[11]; // 문자열 종료 문자까지 저장하기 위해 열글자면 한글자 더 추가해서 배열 설정해야함

    scanf("%s", x);

    getchar();

    scanf("%s", y);

    for(int i = 0; i < 10; i++) {
        printf(" %c %c", x[i], y[i]);
    }

    return 0;
}