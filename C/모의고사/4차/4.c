// *******************
// 복습하기
#include <stdio.h>

int reverse_num(int N);
int is_palindromic(int N);
int del_digit(int N, int T);

int main() {
    int n, t;
    scanf("%d%d", &n, &t);

    printf("%d %d %d %d", n, reverse_num(n), is_palindromic(n), del_digit(n, t));

    return 0;
}

int reverse_num(int N) {
    int t = 0;
    while (N) {
        t = t * 10 + N % 10;
        N /= 10;
    }
    return t;
}

int is_palindromic(int N) {
    return N == reverse_num(N);
}

int del_digit(int N, int T) {
    int x[9];
    int index = 0, t = 0;
    
    if (is_palindromic(N)) {
        while (N) {
            x[index++] = N % 10;
            N /= 10;
        }
        /*
        T-1 < index - 1 - (T - 1) 이고 배열을 다음 인덱스의 값을 현재 인덱스 값에 덮어쓰기 하여 배열을 삭제하므로
        index - T 부터 먼저 왼쪽으로 한칸씩 옮기고 
        그다음에 T 부터 왼쪽으로 한칸씩 옮기기.
        ex) n = 345543, t = 3, index = 6
        t - 1 = 2 < index - t = 3

        012345 (index)
        345543 (N)
        123456 (T)

        1) index - T ( = 3 ) 지우기

        012345 (index)
        345433 (N)
        123456 (T)

        2) T - 1 ( = 2 ) 지우기

        012345 (index)
        344333 (N)
        123456 (T)

        */
        for (int i = index - T; i < index; i++) {
            x[i] = x[i+1];
        }

        index--;

        for (int i = T-1; i < index; i++) {
            x[i] = x[i+1];
        }

        index--;

        for (int i = 0; i < index; i++) {
            t = t * 10 + x[i];
        }
    }
    else {
        while (N) {
            x[index++] = N % 10;
            N /= 10;
        }

        for (int i = T - 1; i < index; i++) {
            x[i] = x[i+1];
        }
        index--;
        for (int i = index - 1; i >= 0; i--) {
            t = t * 10 + x[i];
        }
    }

    return t;
}