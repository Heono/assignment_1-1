#include <stdio.h>
#pragma warning (disable:4996)

int main() {
    int N;
    scanf("%d", &N);
    int length = 0, maxlength = 0;
    int lastnum;
    int resultlastnum;
    int trycount = 0;
    int max, min;

    for (int i = 0; i < N; i++) {
        int num, count = 0;
        scanf("%d", &num);
        trycount++;
        if (num > 100 || num <= 1)
            count = 1;
        else {
            for (int j = 2; j < num; j++) {
                if (num % j == 0)
                    count++;
            }
        }

        if (trycount == 1) {
            max = num;
            min = num;
        }

        if (max < num) max = num;
        if (min > num) min = num;

        if (count == 0) {
            length++;
            lastnum = num;
        }
        else {
            if (length > maxlength) {
                maxlength = length;
                resultlastnum = lastnum;
            }
            length = 0;
        }
        if (i == N - 1 && count == 0 && maxlength == 0) {
            maxlength = length;
            resultlastnum = lastnum;
        }
    }

    if (maxlength == 0)
        printf("0\n");

    else {
        printf("%d\n%d\n%d %d", maxlength, resultlastnum, max, min);
    }

    return 0;
}