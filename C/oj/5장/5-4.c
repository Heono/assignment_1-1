#include <stdio.h>

int main() {
    char a = 0;
    scanf("%c", &a);

    if (a >= 'a' && a <= 'z')
        printf("%c", a - ('a' - 'A'));
    else if (a >= 'A' && a <= 'Z')
        printf("%c", a + ('a' - 'A'));
    else
        printf("none");

    return 0;
}