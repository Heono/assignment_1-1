//************** 복습하기
#include <stdio.h>

int main() {
    char x[101] = "", y[101] = "", t;
    int i, m, cnt = 0, yI = 0;
    int s1 = 0, s2 = 0, e1 = 0, e2 = 0;

    for (i = 0; i < 100; i++) {
        scanf("%c", &t);
        if (t == '!') break;
        x[i] = t;
    }
    
    scanf("%d", &m);

    for (int j = 0; j < i; j++) {
        for (int k = 0; k <= j; k++) {
            if (x[j] == x[k]) cnt++;
        }
        if (cnt == 1) {
            y[yI] = x[j];
            yI++;
        }
        cnt = 0;
    }

    printf("%s\n", y);

    // m만큼 증가된 문자를 대소문자로 변환
    for (i = 0; i < yI; i++) {
        if ('A' <= y[i] && y[i] <= 'Z') { 
            y[i] = (y[i] - 'A' + m) % ('Z' - 'A' + 1) + 'a';
            printf("%c", y[i]);
        }
        else {
            y[i] = (y[i] - 'a' + m) % ('z' - 'a' + 1) + 'A'; // 변환 방식 외우기
            printf("%c", y[i]);
        }
    }

    printf("\n");

    // 요거 기억하자 
    for (i = 0; i < yI; i++) {
        if (!((y[i] <= 'Z' && y[i+1] >= 'a') || (y[i] >= 'a' && y[i+1] <= 'Z'))) {
            e1 = i;

            if (e1 - s1 > e2 - s2) {
                e2 = e1;
                s2 = s1;
            }

            s1 = i + 1;
        }
    }

    if (s2 == 0 && e2 == 0) {
        printf("none");
        return 0;
    }

    for (i = s2; i <= e2; i++) {
        printf("%c", y[i]);
    }

    return 0;
}