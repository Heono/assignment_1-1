#include <stdio.h>

int main() {
    int c = 0;
    scanf("%d", &c);
    printf("The %dth upper case letter in the English alphabet is %c.", c, c+'A');
    return 0;
}