// 순위 결정하는 방식 복습하기
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int first[N], second[N], rank[N], t;
    double avg[N], temp;
    for (int i = 0; i < N; i++) scanf("%d", &first[i]);
    for (int i = 0; i < N; i++) scanf("%d", &second[i]);
    for (int i = 0; i < N; i++) {
        avg[i] = first[i] * 0.4  + second[i] * 0.6;
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (avg[j] < avg[j+1]) {
                temp = avg[j];
                avg[j] = avg[j+1];
                avg[j+1] = temp;
                temp = first[j];
                first[j] = first[j+1];
                first[j+1] = temp;
                temp = second[j];
                second[j] = second[j+1];
                second[j+1] = temp;
            }
        }
    }
    
    // 이 방법 외우기
    rank[0] = 1;
    for (int i = 1; i < N; i++) {
        if (avg[i-1] > avg[i]) {
            rank[i] = i+1;
        }
        else {
            rank[i] = rank[i-1];
        }
    }
    char ch;
    for (int i = 0; i < N; i++) {
        if (rank[i] <= N * 0.3) ch = 'A';
        else if (rank[i] <= N * 0.7 || second[i] >= 60) ch = 'B';
        else ch = 'F';
        printf("%d %d %.1f %d %c\n", first[i], second[i], avg[i], rank[i], ch);
    }

    return 0;
}