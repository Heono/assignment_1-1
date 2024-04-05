#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    if (a%2==0 && a%3==0 && a%5 == 0) printf("A");
    else if (a%2==0 && a%3==0) printf("B");
    else if (a%2==0 && a%5==0) printf("C");
    else if (a%3==0 && a%5==0) printf("D");
    else if (a%2==0 || a%3==0 || a%5 ==0) printf("E");
    else printf("N");
}