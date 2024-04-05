#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d = (a + b + c) / 3.0;
    printf("%.2f\n", d);

    int cnt = (d >= 75) ? 1 : ((d >= 50) ? 2 : 3);

    
    switch (cnt)
    {
    case 1:
        printf("A");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("F");
        break;
    }
    

    /*
    if (d >= 75) printf("A");
    else if (d >= 50) printf("B");
    else printf("F");
    */
    

    return 0;
}