#include <stdio.h>
#pragma warning(disable:4996)



int main() {
   int n;
   int a, b, c, m;
   int saram=0;
   int flag=1;
   int teksu = 1;
   int invalidcnt = 0;
   double max, min;
   int outcnt=0; 
   int numcnt=0;

   scanf("%d", &n);
   for (int i = 1; i <= n; i++) {
      scanf("%d %d %d %d", &a, &b, &c, &m);
      saram++;

      double avg = (a + b + c) / 3.0;

      if ((a < 0 || a > 100) || (b < 0 || b > 100) || (c < 0 || c > 100)) {
         printf("Invalid\n");
         invalidcnt = 1;
         outcnt = 1;
         flag = 0;
         teksu = 0;
      }

      if ((a < 70 && b < 70) || (b < 70 && c < 70) || (c < 70 && a < 70) && invalidcnt != 1) numcnt++;

      if (m < 12) {
         printf("FA");
         flag = 0;
         outcnt = 1;
      }

      if (flag) {
         if (avg >= 90) printf("A");
         else if (avg >= 80) printf("B");
         else if (avg >= 70) printf("C");
         else printf("F");
      }
      
      if(teksu) 
      printf(" %.2f\n", avg); 
      
      

      if (saram == 1) {
         max = avg;
         min = avg;
      }
      
      if ((avg > max) && outcnt != 1) 
         max = avg; 
      if ((avg < min) && outcnt != 1) 
         min = avg;

      flag = 1;
      teksu = 1;
      outcnt = 0;
      invalidcnt = 0;
 
   }
    
   printf("max=%.2f min=%.2f num=%d", max, min, numcnt);
   
   return 0;
}