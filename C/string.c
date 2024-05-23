#include <stdio.h>
#include <string.h>
/*
strlne() : 문자열 길이 반환
strcmp() : 문자열 1이 문자열 2보다 사전적으로 앞에 있으면 음수, 뒤에 있으면 양수, 같으면 0 반환
strcpy() : 문자열 복사
strcat() : 문자열 1에 문자열 2 더함
strstr() : 문자열 1에 문자열 2가 어떻게 포함되어 있는지 반환;
*/

int main() {
    char a[100] = "", b[100] = "";
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    printf("%s\n%lu\n", a, sizeof(a));
    printf("%d", strcmp(a, b));
    return 0;
}