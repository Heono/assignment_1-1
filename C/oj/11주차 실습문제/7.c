#include <stdio.h>

int is_prime(int x);
void print_prime(int n, int m);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    print_prime(n, m);

    return 0;
}

int is_prime(int x) {
    int i;
    // for (i = 2; i <= x; i++)  등호 필요 없음
    for (i = 2; i < x; i++)
        if (x % i == 0) break;
    
    /*
    if (x == i) return 1;
    else return 0;
    */

    return x == i;
}

void print_prime(int n, int m) {
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            /*
            if (cnt % m == 0 && cnt != 0)
                printf("\n");
            printf("%d ", i);
            cnt++;
            */
            printf("%d ", i);
            cnt++; // cnt++ 해주고 줄넘김 if문 쓰면 굳이 cnt != 0 조건 확인 할 필요 X
            if (cnt % m == 0) printf("\n");
        }
    }
}