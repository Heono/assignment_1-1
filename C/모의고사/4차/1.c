#include <stdio.h>

int isVowel(char ch);

int main() {
    char x[101] = "", ch;
    int xI = 0;
    int cnt = 0;
    int max = 0;

    while (scanf("%c", &ch) && ch != '*') {
        if ('A' <= ch && ch <= 'Z')
            x[xI++] = ch - 'A' + 'a';
        else if('a' <= ch && ch <= 'z')
            x[xI++] = ch - 'a' + 'A';
    }

    for (int i = 0; i < xI - 2; i++) {
        if ((x[i] <= 'Z' && !isVowel(x[i])) 
            && (x[i+1] >= 'a' && isVowel(x[i+1])) 
            && (x[i+2] >= 'a' && !isVowel(x[i+2]))) {
            cnt++;
            i += 2;
        }
    }
    printf("%s\n%d", x, cnt);
    return 0;
}

// 복습하기
int isVowel(char ch) {
    char v[] = { "AEIOUaeiou" };
    for (int i = 0; i < 10; i++) {
        if (v[i] == ch) return 1;
    }
    return 0;
}