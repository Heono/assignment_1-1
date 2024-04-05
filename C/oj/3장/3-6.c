#include <stdio.h>

int main() {
    char a[10] = {};
    scanf("%s", a);
    printf("year %c%c%c%c month %c%c date %c%c", a[0], a[1], a[2], a[3], a[5], a[6], a[8], a[9]);
    return 0;
}