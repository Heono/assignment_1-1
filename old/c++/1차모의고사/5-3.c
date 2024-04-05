#include <stdio.h>

int main() {
    int a, b, c = 0;
    int conti = 0;
    int MaxConti = 0;
    int sosu = 0;
    int lastSosu = 0;
    int M = 0, m = 100000;
    
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        scanf("%d", &b);

        for (int j = 1; j <= b; j++) {
            if (b % j == 0) c++;
        }

        if (c == 2 && b < 100) {
            conti++;
            sosu = b;

            // 소수만 나올 떄도 이거 해줘야함...
            if (conti > MaxConti) {
                MaxConti = conti;
                lastSosu = sosu;
            }
        }
        else {
            if (conti > MaxConti) {
                MaxConti = conti;
                lastSosu = sosu;
            }
            conti = 0;
        }
        c = 0;

        if (b > M) M = b;
        if (b < m) m = b;
        
    }

    if (MaxConti == 0 && lastSosu == 0) {
        M = 0;
        m = 0;
    }
    printf("%d\n%d\n%d %d", MaxConti, lastSosu, M, m);
}