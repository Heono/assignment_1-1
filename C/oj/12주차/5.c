#include <stdio.h>

int reverse_num(int num);
int is_prime(int num);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n%d", reverse_num(n), is_prime(reverse_num(n)));

    return 0;
}

int reverse_num(int num) {
    int t = 0;
    while (num) {
        t = t * 10 + num % 10;
        num /= 10;
    }
    return t;
}

int is_prime(int num) {
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) break;
    }
    return i == num;
}