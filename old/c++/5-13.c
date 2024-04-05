#include <stdio.h>

int main() {
    double a, b, c, d;
    char e;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (a + b + c) / 3;
    printf("%.2lf\n", d);
    
    if (d >= 75) e = 'A';
    else if (d >= 50 && d < 75) e = 'B';
    else if (d < 50) e = 'F';
    
    switch (e) {
        case 'A':
            printf("A");
            break;
        case 'B':
            printf("B");
            break;
        case 'F':
            printf("F");
            break;
    }
}