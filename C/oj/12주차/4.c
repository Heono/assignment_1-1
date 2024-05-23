#include <stdio.h>

int isVowel(char ch);

int main() {
    char x[100] = "", y[100] = "", ch;
    int xI = 0, yI = 0;


    while (scanf("%c", &ch) && ch != '!') {
        x[xI++] = ch;
    }

    int flag = 0;

    for (int i = 0; i < xI; i++) {
        for (int j = 0; j < i; j++) {
            if (x[i] == x[j]) {
                flag = 1;
                break;
            }
        }

        if (!flag) {
            y[yI++] = x[i];
        }
        flag = 0;
    }

    printf("%s\n", y);

    int max = 0;
    int last = 0;
    int cnt = 1;
    for (int i = 0; i < yI - 1; i++) {
        if ((isVowel(y[i]) && !isVowel(y[i+1])) || (!isVowel(y[i]) && isVowel(y[i+1]))) {
            cnt++;
            if (cnt > max) {
                max = cnt;
                last = i + 1;
            }
        }
        else cnt = 1;
    }

    if (!max) printf("none");
    else {
        for (int i = last - max + 1; i <= last; i++)
            printf("%c", y[i]);
    }
}

int isVowel(char ch) {
    char vowels[] = "AEIOU";
    for (int i = 0; i < 5; i++) {
        if (ch == vowels[i]) return 1;
    }
    return 0;
}