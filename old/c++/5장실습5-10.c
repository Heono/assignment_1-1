#include <stdio.h>

int main() {
    int a, b, c = 0;
    float d = 0;
    scanf("%d %d %d", &a, &b, &c);
    d = (a + b + c) / 3;
    if (d >= 91.5) printf("A");
    else if (d >= 85.5 && d < 91.5) printf("B");
    else if (d >= 80.5 && d < 85.5) printf("C");
    else printf("F");

    if (a == 100 || b == 100 || c == 100) printf("Good");
    if (a < 60 || b < 60 || c < 60) printf("Bad");
}