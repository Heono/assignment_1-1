#include <stdio.h>

int sum(int n);

int main() {
    int a;
    scanf("%d", &a);

    int t = 0;

    for (int i = 1; i <= a; i++)
        t += sum(i);

    printf("%d", t);

    return 0;
}

int sum(int n) {
    return n*(n+1) / 2;
}