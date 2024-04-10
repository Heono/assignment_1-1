//*****
#include <stdio.h>

int main() {
    int isU = 0;
    int isFU = 0;
    int flag = 0;
    char a;

    while (1) {
        scanf("%c", &a);

        if (a == '0') break;

        if (!flag && 'A' <= a && a <= 'Z') {
            isFU = 1;
            flag = 1;
        }
        else if (!flag) {
            flag = 1;
        }

        if (flag && ) isU = 1;

        // 처음 + 대문자 
        //




        if (!isU && !isMix) {

        }
        else if (isU && !isMix) {

        }
        else if (isMix && !isFU) {

        }
        else if (isMix && isFU) {

        }
    }
}