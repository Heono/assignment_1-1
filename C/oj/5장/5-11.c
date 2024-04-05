#include <stdio.h> 

int main() {
    int a1, a2, a3;
    int g1, g2, g3;
    scanf("%d %d %d", &a1, &a2, &a3);
    scanf("%d %d %d", &g1, &g2, &g3);
    
    int s = 0, b = 0;
    if (g1 == a1 || g1 == a2 || g1 == a3) {
        if (g1 == a1) s++;
        else b++;
    }
    if (g2 == a1 || g2 == a2 || g2 == a3) {
        if (g2 == a2) s++;
        else b++;
    }
    if (g3 == a1 || g3 == a2 || g3 == a3) {
        if (g3 == a3) s++;
        else b++;
    }

    printf("%dS%dB", s, b);

    return 0;
}