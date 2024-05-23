#include <stdio.h>

// 이런식으로 메인 함수를 맨위에 적지 않으면 시험때 감점됨
int add(int x, int y);

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++)
        sum = add(i, sum);

    printf("%d", sum);

    return 0;
}

int add(int x, int y) {
    return x + y;
}

