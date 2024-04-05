#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf("(%%c) %c\n(%%d) %d", a, a - '0');
    return 0;
}