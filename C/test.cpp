#include <stdio.h>

int main() {
   
   int n = 11; // 소인수 분해 할 수
   int exp = 0; // 지수
   int total = 1; // 약수 개수, 0으로 초기화 하면 연산 결과 곱했을 때 0 돼버리므로 1로 초기화

   // divisor 는 나누는 수 
   for (int divisor = 2; divisor <= n; divisor++) {
      while (n % divisor == 0) { // divisor가 n의 인수일 경우 반복
         n = n / divisor; // 소인수 분해 할 수를 인수로 나누기
         exp++; // 지수에 1 더하기
      }
      total *= (exp + 1);
      exp = 0;
   }

   printf("%d", total);

   return 0;

}