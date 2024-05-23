#include <stdio.h>

int main() {
    char a[11];

    scanf("%s", a);

    int cnt;

    for (int i = 0; i < 10; i++) {
        cnt = 0;
        for (int j = 0; j < 10; j++) {
            if (a[i] == a[j]) cnt++;
        }
        if (cnt == 1) printf(" %c", a[i]);
    }

    return 0;
}