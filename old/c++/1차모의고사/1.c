#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    a = a * 0.4;
    b = b * 0.6;
    if (a + b >= 85.5) printf("A");
    else if (a + b >= 75.5) printf("B");
    else if (a + b >= 60) printf("C");
    else printf("F");

    if (a + b >= 60 || b / 0.6 >= 90) printf(" PASS");
    else printf(" FAIL");
}