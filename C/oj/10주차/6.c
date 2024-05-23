#include <stdio.h>

int main() {
    char a[4];
    scanf("%s", a); getchar();

    char b;
    char g[] = " _ _ _";

    int try = 0;
    int i = 0;
    int j = 0;

    while (try < 5) {
        scanf("%c", &b); getchar();
        for (i = 0; i < 3; i++) {
            if (b == a[i]) {
                j = i*2 + 1;
                g[j] = a[i];
                a[i] = '0';
            }
        }

        printf("%s\n", g);

        if (g[1] != '_' && g[3] != '_' && g[5] != '_') break;
        else try++;
    }
    
}