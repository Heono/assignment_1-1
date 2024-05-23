#include <stdio.h>

char atoA(char a);

int main() {
    char a, c;
    int cnt = 0, i = 0, cnt2 = 0;;
    char b[101] = "";

    int x, y, z;

    while (1) {
        scanf("%c", &a);
        if (a == '*') break;

        c = atoA(a);

        if (c != '0') b[i++] = c; 

        cnt++;
        if (cnt == 100) break;
    }

    // 이런거 자주 나옴
    for (int j = 0; j < i; j++) {
        printf("%c", b[j]);
        
        if (j <= i - 3) {
            if ('A' <= b[j] && b[j] <= 'Z' && !(b[j] == 'A' || b[j] == 'E' || b[j] == 'I' || b[j] == 'O' || b[j] == 'U')) {
                if (b[j+1] == 'a' || b[j+1] == 'e' || b[j+1] == 'i' || b[j+1] == 'o' || b[j+1] == 'u') {
                    if ('a' <= b[j+2] && b[j+2] <= 'z' && !(b[j+2] == 'a' || b[j+2] == 'e' || b[j+2] == 'i' || b[j+2] == 'o' || b[j+2] == 'u')) {
                        cnt2++;
                    }
                }
            }
        }
    }

    printf("\n%d", cnt2);

    return 0;
}

char atoA(char a) {
    if ('a' <= a && a <= 'z')
        return a - 'a' + 'A';
    else if ('A' <= a && a <= 'Z')
        return a - 'A' + 'a';
    else 
        return '0';
}