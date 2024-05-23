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
        t = t*10 + N%10;
        N /= 10;
    }

    return t;
}

int is_palindromic(int N) {
    return N == reverse_num(N);
}

int del_digit(int N, int T) {
    int x[9], y[9];
    int i = 0;
    int t = 0;

    if (is_palindromic(N)) {
        while (N) {
            x[i++] = N % 10;
            N /= 10;
        }
        t = i - 1 - (T - 1);
        for (int j = T - 1; j < i - 1; j++)
            x[j] = x[j+1];
        i--; t--;
        for (int j = t; j < i - 1; j++)
            x[j] = x[j+1];
        i--; t = 0;
        for (int j = 0; j < i; j++)
            t = t*10 + x[j];
    }
    else {
        while (N) {
            x[i++] = N % 10;
            N /= 10;
        }
        
        for (int j = T-1; j < i-1; j++)
            x[j] = x[j+1];
    
        i--;

        for (int j = i-1; j >= 0; j--)
            y[(i-1) - j] = x[j];

        for (int j = 0; j < i; j++)
            t = t*10 + y[j];
    }

    return t;
}