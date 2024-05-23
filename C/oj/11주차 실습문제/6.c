//*************
#include <stdio.h>

char atoA(char a);

int main() {
    int n;
    scanf("%d", &n); 
    
    // 숫자 입력 후 엔터키 버리기
    getchar();

    char s[n];
    
    // 이렇게 입력 받으면 'Hello, World' 이렇게 입력시 공백 이후가 제대로 저장이 안됨 출력하면 'HELLO,' 여기까지만 나오고 뒤에는 쓰레기 값 나옴
    // scanf("%s", s);

    for (int i = 0; i < n; i++)
        scanf("%c", &s[i]);

    for (int i = 0; i < n; i++) 
        printf("%c", atoA(s[i]));

    return 0;
}

char atoA(char a) {
    if ('a' <= a && a <= 'z')
        return a - 'a' + 'A';
    else 
        return a;
}