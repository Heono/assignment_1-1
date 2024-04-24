#include <stdio.h>

int main() {
    int n;
    int a;
    int j;
    int cnt = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        for (j = 2; j < a; j++) {
            if (a % j == 0) break;
        }
        
        if (j == a) {
            printf("%d ", a);
            cnt++;
            if (cnt % 3 == 0) printf("*\n");
        }
        if (cnt % 3 != 0 && i == n - 1) printf("*\n");
    }
    return 0;
}
