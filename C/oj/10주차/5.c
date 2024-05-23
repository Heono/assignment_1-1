#include <stdio.h>

int main() {
    char a[6];
    scanf("%s", a);

    for (int i = 5; i > 0; i--) {
        for (int j = i; j < i + 5; j++) {
            printf("%c", a[j%5]);
        }
        printf("\n");
    }
    
    return 0;
}