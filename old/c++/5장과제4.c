#include <stdio.h>

int main() {
    int a; // 변수 선언
    scanf("%d", &a); // 입력 받음

    if (a < 10 || a > 99) { // 입력된 정수가 두 자리수 인지 판단
        printf("none"); // 출력 후
        return 0; // 종료
    }

    if (a == 10) printf("ten"); // 10일 경우
    else if (a == 11) { // 11일 경우
        printf("eleven"); // 출력
        return 0; // 종료
    }
    else if (a == 12) { // 12일 경우
        printf("twelve"); // 출력
        return 0; // 종료
    }
    else if (a == 13) { // 13일 경우
        printf("thirteen"); // 출력
        return 0; // 종료
    }
    else if (a == 14) { // 14일 경우
        printf("fourteen"); // 출력
        return 0; // 종료
    }
    else if (a == 15) { // 15일 경우
        printf("fifteen"); // 출력
        return 0; // 종료
    }
    else if (a == 16) { // 16일 경우
        printf("sixteen"); // 출력
        return 0; // 종료
    }
    else if (a == 17) { // 17일 경우
        printf("seventeen"); // 출력
        return 0; // 종료
    }
    else if (a == 18) { // 18일 경우
        printf("eighteen"); // 출력
        return 0; // 종료
    }
    else if (a == 19) { // 19일 경우
        printf("nineteen"); // 출력
        return 0; // 종료
    }
    else if (a >= 20 && a <= 29) printf("twenty"); // 20대일 경우 
    else if (a >= 30 && a <= 39) printf("thirty"); // 30대일 경우
    else if (a >= 40 && a <= 49) printf("forty"); // 40대일 경우
    else if (a >= 50 && a <= 59) printf("fifty"); // 50대일 경우
    else if (a >= 60 && a <= 69) printf("sixty"); // 60대일 경우
    else if (a >= 70 && a <= 79) printf("seventy"); // 70대일 경우
    else if (a >= 80 && a <= 89) printf("eighty"); // 80대일 경우
    else if (a >= 90 && a <= 99) printf("ninety"); // 90대일 경우

    if (a % 10 == 1) printf("-one"); // 일의자리수가 1일 경우
    else if (a % 10 == 2) printf("-two"); // 2일 경우
    else if (a % 10 == 3) printf("-three"); // 3일 경우
    else if (a % 10 == 4) printf("-four"); // 4일 경우
    else if (a % 10 == 5) printf("-five"); // 5일 경우
    else if (a % 10 == 6) printf("-six"); // 6일 경우
    else if (a % 10 == 7) printf("-seven"); // 7일 경우
    else if (a % 10 == 8) printf("-eight"); // 8일 경우
    else if (a % 10 == 9) printf("-nine"); // 9일 경우

    return 0; // 종료
}