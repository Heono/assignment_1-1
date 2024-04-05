#include <stdio.h>

int main() {
    char c = 0;
    scanf("%c", &c);

    printf("%d", ((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')));

    return 0;
}