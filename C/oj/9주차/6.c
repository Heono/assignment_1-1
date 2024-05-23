#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    int cnt = 0;

    for (int j = 0; j < SIZE; j++) {
        for (int i = 0; i < SIZE; i++) {
            if (a[j] < a[i]) cnt++; 
        }
        printf(" %d", cnt);
        cnt = 0;
    }

    return 0;
}