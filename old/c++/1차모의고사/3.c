#include <stdio.h>

int main() {
    char i;
    int dae = 0, so = 0, su = 0, other = 0;

    while (1) {
        scanf("%c", &i);
        if (i == '*') break;
        if (i >= 'A' && i <= 'Z') dae++;
        else if (i >= 'a' && i <= 'z') so++;
        else if (i >= '0' && i <= '9') su = su + i - '0';
        else other++;
    }

    printf("%d %d %d %d", dae, so, su, other);
}