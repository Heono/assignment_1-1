// *********************** 이것도 9번하고 마찬가지로 꼭 나오는 문제
#include <stdio.h>

int main() {
    int arr[5];
    int tArr[5];
    int rank[5] = { 0, };
    int t;


    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        tArr[i] = arr[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[j] < arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    t = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i] == tArr[j] && rank[j] == 0) rank[j] = t; // rank[j] == 0 검사 안하면 1 6 4 9 6 입력시 9 6 6 4 1 에서 6이 공동 3등으로 출력됨
        }
        t++;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d=r%d ", tArr[i], rank[i]);
    }

    return 0;
}