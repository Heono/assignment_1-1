#include <stdio.h>

int main() {
    int n, m, i, j, count = 0, num;
    int max = 0, maxprime = -1;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num >= 100) {
            count = 0; break;
        }

        for (j = 2; j < num; j++) 
            if (num % j == 0) break;

        if (j == num) { // j 가 num이랑 같으면 소수임 
            count++;
            if (max < count) {
                max = count;
                maxprime = num;
            }
        }
        else count = 0;
    }
    if (max == 0) printf("0");
    else {
        printf("%d\n", max);
        printf("%d", maxprime);
    }

    return 0;
}