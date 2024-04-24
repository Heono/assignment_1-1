#include <stdio.h>

int main() {
    int n, m, num, i, j, count = 0;
    int flag = 0;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        flag = 0;
        for (j = 2; j < num; j++)
            if (num % j == 0)
                break;

        if (j == num) {
            count++;
            printf(" %d", num);
        }
        if (count >= m)
            break;
    }

    if (count == 0)
        printf("0");

    return 0;
}