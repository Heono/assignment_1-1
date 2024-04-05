#include <stdio.h>
// a = 97 z = 122 A = 65 Z = 90
int main() {
    char a = 0;
    scanf("%c", &a);
    if (a >= 65 && a <= 90) printf("%c", a + 32);
    else if (a >= 97 && a <= 122) printf("%c", a - 32);
    else printf("none");

    // 교수님 방식
    char ch;
    scanf("%c", &ch);
    if (ch>='a' && ch<='z')
        printf("%c", ch-('a'-'A'));
    else if (ch>='A' && ch<='Z')
        prinf("%c", ch+('a' - 'A'));
    else 
        printf("none");

    return 0; 
}