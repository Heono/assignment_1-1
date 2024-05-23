#include <stdio.h>

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int first = a[0];
    int second = a[1]; // a[0] 말고 a[1] 넣고 for 문을 0 부터 4까지 돌리면서 비교하면 됨
    
    for (int i = 1; i < 5; i++) {
        if (a[i] > first) { 
            second = first;
            first = a[i];
        }
        else if (first > a[i] && a[i] > second) second = a[i];
    }

    printf("%d\n%d", first, second);

    return 0;
}