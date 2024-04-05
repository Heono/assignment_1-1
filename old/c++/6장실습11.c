#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                if (a == i + j + k) printf("%d %d %d\n", i, j, k);
            }
        }
    }
}