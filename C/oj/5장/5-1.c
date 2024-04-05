#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    if (a >= 40) 
        printf("hot, indoor");
    else if (a < 0)
        printf("cold, indoor");
    else 
        printf("moderate, outdoor");

    return 0;
}