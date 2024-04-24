#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int t;
    int flag = 1;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);

        for (int j = 2; j < t; j++) { 
            if (t % j == 0) flag = 0;
        }

        if (t == 1) flag = 0;

        if (flag) cnt++;
        
        if (flag && cnt <= m) {
            printf(" %d", t);
        }

        flag = 1;
    }

    if (cnt == 0) printf("0");

    return 0;
}

