#include <stdio.h>

int main() {
    char a[10];
    scanf("%s", a);

    int cnt = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (a[i] == a[j]) cnt++;
        }
        printf("%d ", cnt);
        cnt = 0;
    }

    return 0;
}