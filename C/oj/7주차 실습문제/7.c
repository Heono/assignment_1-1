/*
#include <stdio.h>

int main() {
    char c1, c2, a, b, c;
    scanf("%c%c-%c%c%c", &c1, &c2, &a, &b, &c);
    int cnt = 0;
    char p = '0', q = '0', r = '0';

    for (char t1 = c1; t1 < c2 + 1; t1++) {
        for (char t2 = c1; t2 < c2 + 1; t2++) {
            for (char t3 = c1; t3 < c2 + 1; t3++) {
                if (t1 == t2 && t2 == t3) 
                    continue;
                
                if (!(t2 == 'a' || t2 == 'e' || t2 == 'i' || t2 == 'o' || t2 == 'u')) 
                    continue;
                
                if (!((t1 <= t2 && t2 <= t3) || (t3 <= t2 && t2 <= t1))) 
                    continue;
                
                cnt++;
                printf("%c%c%c\n", t1, t2, t3);

                if (t1 < a) {
                    p = t1, q = t2, r = t3;
                }
                else if (t1 == a) {
                    if (t2 < b) {
                        p = t1, q = t2, r = t3;
                    }
                    else if (t2 == b) {
                        if (t3 < c) {
                            p = t1, q = t2, r = t3;
                        }
                    }
                }
            }
        }
    }

    if (!cnt) printf("none\n");
    if (p == '0' && q == '0' && r == '0') printf("none\n");
    else printf("%c%c%c", p, q, r);
    return 0;
}
*/

#include <stdio.h>

int main() {
    
}