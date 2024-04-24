#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int pw;

    int isError = 0;

    int c1, c2, c3;

    for (int k = 0; k < n; k++) {
        scanf("%d", &pw);
        if (pw < 10000 || pw > 99999) isError = 1;
        if (k%100 != 0) isError = 1;
        if (0 > (k/100)%10 || (k/100)%10 > 5) isError = 1;
        
        c1 = k/10000;
        c2 = (k/1000)%10;
        c3 = (k/100)%10;

        if ((c1 == c2 && c2 == c3 && c3 == c1) || (c1 != c2 && c2 != c3 && c3 != c1)) isError = 1;
        
        if (isError) printf("Error\n");

        isError = 0;
    }
}