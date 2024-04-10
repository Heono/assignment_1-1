//**
#include <stdio.h>

int main() {
    int a;
    int min = 100;
    int fCnt = 0;
    int isError = 0;
    double avg = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        if (a > 100 || a < 0) isError = 1;
        if (a < 40) fCnt++;
        avg += a;
        if (a < min) min = a;
    }
    if (isError) {
        printf("Invalid");
        return 0;
    }

    avg /= 5.0;

    if (fCnt >= 3) {
        printf("F\n");
        printf("avg=%.2f min=%d", avg, min);
        return 0;
    }
    

    if (avg >= 90) printf("A+\n");
    else if (avg >= 75) printf("A\n");
    else if (avg >= 65) printf("B+\n");
    else if (avg >= 50) printf("B\n");
    else printf("F\n");

    printf("avg=%.2f min=%d", avg, min);

    return 0;

}


/*
5주차 실습문제 3번

#include <stdio.h> 

int main() {
    int a;
    int sum = 0;
    int min = 100;
    int isF = 0;
    double avg = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        if (a > 100 || a < 0) {
            printf("Invalid");
            return 0;
        }
        if (a < 40) isF++;
        a < min ? min = a : printf("");
        sum += a;
    }

    avg = sum / 5.0; 

    if (isF >= 3) printf("F\n");
    else if (avg >= 90) printf("A+\n");
    else if (avg >= 75) printf("A\n");
    else if (avg >= 65) printf("B+\n");
    else if (avg >= 50) printf("B\n");
    else printf("F\n");

    printf("avg=%.2f min=%d", avg, min);

    return 0;
}

*/