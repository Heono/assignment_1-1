#include <stdio.h>

int main() {
    char a;
    int count = 0;
    int isSo = 0;
    int isDae = 0;
    int firstChar = 0;
    char lastSo = 'a';
    char firstDae = 'Z';


    while (1) {
        scanf("%c", &a);
        // 밑에 if 문을 if-else if로 안묶으면 에러남
        if (a == '0') break;
        else if (a >= 'a' && a <= 'z') {
            if (a > lastSo) lastSo = a;
            isSo++;
        }
        else if (a >= 'A' && a <= 'Z') {
            if (count == 0) firstChar = 1;
            if (a < firstDae) firstDae = a;
            isDae++;
        }

        count++;
    }

    if (isSo > 0 && isDae == 0) printf("%c", lastSo);
    else if (isDae > 0 && isSo == 0) printf("%c", firstDae);
    else if (firstChar == 0 && isSo > 0 && isDae > 0) printf("%c%c", lastSo, firstDae);
    else if (firstChar == 1 && isSo > 0 && isDae > 0) printf("%c%c", firstDae, lastSo);
}