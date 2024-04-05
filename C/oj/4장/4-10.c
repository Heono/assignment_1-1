#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    int M, m;
     M = a >= b ? a : b; 
     m = a < b ? a : b;

     printf("%d\n%d", M/m, M%m);

     return 0;

}