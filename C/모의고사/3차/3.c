#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int flag = 1;
    int cnt = 0;
    int maxCnt = 0;
    int last = 0;
    int max = -1, min = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        // 최대 최소 초기값 설정할때 이렇게 하자 
        // max = 0, min = 0 이러고 최소값 비교하면 2 입력 받을때 최소값 처리가 안됨
        if (max == -1 && min == -1) {
            max = a;
            min = a;
        }

        flag = 1;

        max < a ? max = a : printf("");
        min > a ? min = a : printf("");

        if (a >= 100 || a < 0) { 
            flag = 0;
        }

        for (int j = 2; j < a; j++) {
            if (a % j == 0) flag = 0;
        }

        if (flag) {
            cnt++;
        }
        else {
            cnt = 0;
        }

        if (maxCnt < cnt) {
            maxCnt = cnt;
            last = a;
        }
    }

    if (maxCnt == 0) printf("0");
    else printf("%d\n%d\n%d %d", maxCnt, last, max, min);

    return 0;
}