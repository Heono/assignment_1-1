#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    int S = 0, B = 0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    if (a == d) S++;
    if (b == e) S++;
    if (c == f) S++;
    if (d == b || d == c) B++;
    if (e == a ||  e == c) B++;
    if (f == a || f == b) B++;
    printf("%dS%dB", S, B);
    
}