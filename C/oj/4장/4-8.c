#include <stdio.h>

int main() {
    //조건연산자 
    // 조건 ? 참 : 거짓;
    
    int a = 0;
    scanf("%d", &a);
    (a % 2 == 0) ? printf("even") : printf("odd");
    return 0;
}