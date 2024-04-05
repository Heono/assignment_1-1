#include <stdio.h>

int main() {
    // 변수 선언
    int a;
    // 정수 입력 받기
    scanf("%d", &a);

    /*
    두자리 정수인 경우
        십의 자리수가 1인경우
            ten, eleven 처럼 따로 출력하고 프로그램 종료
        십의 자리수가 1이 아닌경우
            십의 자리수에 따라 십의 자리를 영어로 출력
            일의 자리수에 따라 일의 자리를 영어로 출력
    두자리 정수가 아닌 경우
        넌 출력
    */


   /*
   스위치문 사용법 

   switch (expression)
   {
   case  constant-expression :
    code 
   break;
  
   default:
    break;
   }
   
   */

    if (10 <= a && a <= 99) {
        switch (a / 10) {
            case 1:
                switch (a) {
                    case 10: printf("ten"); break;
                    case 11: printf("eleven"); break;
                    case 12: printf("twelve"); break;
                    case 13: printf("thirteen"); break;
                    case 14: printf("fourteen"); break;
                    case 15: printf("fifteen"); break;
                    case 16: printf("sixteen"); break;
                    case 17: printf("seventeen"); break;
                    case 18: printf("eighteen"); break;
                    case 19: printf("nineteen"); break;
                }
                return 0;
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }
        switch (a % 10) {
            case 0: break;
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
        }
    }
    else printf("none");

    return 0;
}