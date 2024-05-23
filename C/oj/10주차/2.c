#include <stdio.h>

int main() {
    char a[8];
    scanf("%s", a);

    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        if (a[i] == 'c' && a[i+1] == 'a' && a[i+2] == 't') cnt++;
    }

    printf("%d", cnt);

    return 0;
}