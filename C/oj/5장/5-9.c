#include <stdio.h>

int main() {
    int y1, y2, m1, m2, d1, d2;

    scanf("%d/%d/%d", &y1, &m1, &d1);
    scanf("%04d/%02d/%02d", &y2, &m2, &d2); // 굳이 입력 받을 때 04d, 02d 이럴 필요 x (교수님 말씀)

    /*
    if (y1 > y2) printf("%04d/%02d/%02d", y2, m2, d2);
    else if (y1 < y2) printf("%04d/%02d/%02d", y1, m1, d1);
    else {
        if (m1 > m2) printf("%04d/%02d/%02d", y2, m2, d2);
        else if (m1 < m2) printf("%04d/%02d/%02d", y1, m1, d1);
        else {
            if (d1 > d2) printf("%04d/%02d/%02d", y2, m2, d2);
            else if (d1 < d2) printf("%04d/%02d/%02d", y1, m1, d1);
            else printf("%04d/%02d/%02d*", y2, m2, d2);
        }
    }
    */
    
    
    
    if (y1 > y2) printf("%04d/%02d/%02d", y2, m2, d2);
    else if (y1 < y2) printf("%04d/%02d/%02d", y1, m1, d1);
    else if (m1 > m2) printf("%04d/%02d/%02d", y2, m2, d2);
    else if (m1 < m2) printf("%04d/%02d/%02d", y1, m1, d1);
    else if (d1 > d2) printf("%04d/%02d/%02d", y2, m2, d2);
    else if (d1 < d2) printf("%04d/%02d/%02d", y1, m1, d1);
    else printf("%04d/%02d/%02d*", y2, m2, d2);
    

    return 0;

}