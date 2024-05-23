//  시험에 종종 등장하는 문제

#include <stdio.h>
#include <limits.h>

#define SIZE 10

int main() {
    int a[SIZE];
    int cnt;

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    // 교수님 풀이 -> 앞에서 이미 나온 숫자면 cnt 값이 2보다 크다는 것을 이용함
    for (int i = 0; i < 10; i++) {
        cnt = 0;
        for (int j = 0; j <= i; j++) {
            if (a[i] == a[j]) cnt++;
        } 
        if (cnt == 1) printf(" %d", a[i]);
    }

    /* 이건 내풀이
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (a[i] == a[j]) a[j] = INT_MAX; 
        }
    }
    

    for (int i = 0; i < SIZE; i++) {
        if (a[i] == INT_MAX) continue;
        printf(" %d", a[i]);
    }
    */

    return 0;
}