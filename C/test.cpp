#include <stdio.h>

int main() {
   
   int n = 12; // 소인수 분해 할 수

   for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
        // i가 n의 약수일 경우
        printf("%d ", i);
        n /= i;
    }
}

   return 0;

}