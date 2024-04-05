#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    double d = (a + b + c) / 3.0;

    if (d >= 91.5) printf("A");
    else if (d >= 85.5) printf("B");
    else if (d >= 80.5) printf("C");
    else printf("F");

    if (a == 100 || b == 100 || c == 100) printf("Good");
    if (a < 60 || b < 60 || c < 60) printf("Bad");

    return 0;

}