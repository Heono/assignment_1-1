#include <stdio.h>
int main() {
    char x;
    
    char lastlower = -1; // -1은 입력받을수 없으니까 이걸로 초기화
    char firstupper = -1;

    int isUpper = 0; // 처음 입력받은게 대문자인지 소문자인지 판단 

    while(1) {
        scanf("%c", &x);
        if (x=='0') break;

        if (lastlower == -1 && firstupper == -1) { // 처음 돌때만 이 if문 들어감
            if ('A' <= x && x <= 'Z') isUpper = 1; // 첫입력이 대문자면 isUpper가 1
        }

        if ('a' <= x && x <= 'z') {
            if (lastlower < x || lastlower == -1) lastlower = x;
            // 처음돌때는 ll가 -1 -> ll = x 로 초기화(입력받은거 중에 초기화를 해야됨!!)
            // 두번째 돌때부터는 x가 더 뒤에거면 ll 갱신

        }

        if ('A' <= x && x <= 'Z') {
            if (firstupper > x || firstupper == -1) firstupper = x;
            // 처음돌때는 fu가 -1 -> fu = x 로 초기화(입력받은거 중에 초기화를 해야됨!!)
            // 두번째 돌때부터는 x가 더 앞에거면 fu 갱신
        }
    }

    if (lastlower == -1 && firstupper != -1) printf("%c", firstupper); // fu만 바뀜 <=> 대문자만 입력되었다
    if (lastlower != -1 && firstupper == -1) printf("%c", lastlower); // ll만 바뀜 <=> 소문자만 입력되었다
    // 대소문자 혼합의 경우 -> isUpper 값에 따라 판단
    if (!isUpper && (lastlower != -1 && firstupper != -1)) printf("%c%c", lastlower, firstupper); // isUpper=0 일때 동작(첫입력이 소문자)
    if (isUpper && (lastlower  != -1 && firstupper != -1)) printf("%c%c", firstupper, lastlower); // isUpper=1 일때 동작(첫입력이 대문자)

    return 0;
    
}
