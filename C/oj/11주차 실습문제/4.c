#include <stdio.h>

int count_3(int x);

int main() {
    int a;
    int cnt = 0;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
        cnt += count_3(i);
        

    printf("%d", cnt);

    return 0;
}

int count_3(int x) {
    int cnt = 0;
    while (x) {
        if (x % 10 == 3) cnt++;
        x /= 10;
    }

    return cnt;
}