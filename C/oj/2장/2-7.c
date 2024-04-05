#include <stdio.h>

int main() {
    char c = 0;
    scanf("%c", &c);
    printf("%c is the %dth lower case letter in the English alphabet.", c, c-'a');
    return 0;
}