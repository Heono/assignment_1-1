#include <stdio.h>

int is_vowel(char c);
int is_alpha(char c); // 알파벳인지
int is_lower(char c); // 소문자인지
int is_upper(char c); // 대문자인지
char to_upper(char c);
char to_lower(char c);


int main () {
    char ch, arr[100];
    int i = 0, count = 0;

    while (scanf("%c", &ch) && ch != '*') {
        if (is_lower(ch))
            arr[i++] = to_upper(ch);
        else if (is_upper(ch)) 
            arr[i++] = to_lower(ch);
    }

    int N = i;

    for (i = 0; i < N; i++) 
        printf("%c", arr[i]);
    printf("\n");

    for (i = 0; i < N - 2; i++) {
        if ((is_upper(arr[i]) && !is_vowel(arr[i])) &&
            (is_lower(arr[i+1]) && is_vowel(arr[i+1])) &&
            (is_lower(arr[i+2]) && !is_vowel(arr[i+2])))
            count++;
    }

    printf("%d\n", count);

    return 0;
}

int is_vowel(char c) {
    char vowels[] = "AEIOUaeiou"; // 이런 방법이,,

    for (int i = 0; i < 10; i++) {
        if (c == vowels[i]) return 1;
    }

    return 0;
}

int is_alpha(char c) {
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int is_lower(char c) {
    return ('a' <= c && c <= 'z');
}

int is_upper(char c) {
    return ('A' <= c && c <= 'Z');
}

char to_upper(char c) {
    return c - 'a' + 'A';
}

char to_lower(char c) {
    return c - 'A' + 'a';
}