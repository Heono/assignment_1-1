#include <stdio.h>

int main() {
    int a;
    int isSam = 0;
    int currentNum = 0;
    int M = 0;
    int m = 1000000; // 100000에서 1000000으로 올리니깐 됨...
    int tmp = 0;

    while (1) {
        scanf("%d", &a);
        if (a == 0) break;
        //printf("%d", a);
        currentNum = a;
        while (a) {
            currentNum = currentNum*10 + a%10;
            a = (a - a%10) / 10;
        }
        tmp = currentNum;
        if (currentNum > M) M = currentNum;
        if (currentNum < m) m = currentNum;
        while (currentNum) {
            if (currentNum%10 == 3) isSam++;
            currentNum = (currentNum - currentNum%10) / 10;
        }
        printf("%d ", tmp);
        printf("%d ", isSam);
        isSam = 0;
    }
    if (m == M) printf("\n0 0");
    else printf("\n%d %d", m, M);
}