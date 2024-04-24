#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int pw;

    int isError = 0;
    int isError1 = 0;

    int c1, c2, c3;

    int sw = 0, ce = 0, ds = 0;
    int sw1 = 0, ce1 = 0, ds1 = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &pw);
        if (pw < 10000 || pw > 99999) isError = 1;
        if (pw%100 != 0) isError = 1;
        if (0 > (pw/100)%10 || (pw/100)%10 > 5) isError = 1;
        
        c1 = pw/10000;
        c2 = (pw/1000)%10;
        c3 = (pw/100)%10;

        if ((c1 == c2 && c2 == c3 && c3 == c1) || (c1 != c2 && c2 != c3 && c3 != c1)) isError = 1;
        if (!isError) {
            switch (c3) {
                case 0:
                case 1:
                case 2:
                    printf("CE\n");
                    if (!isError1) ce1++;
                    ce++;
                    break;
                case 3:
                case 4:
                    printf("SW\n");
                    sw++;
                    if (!isError1) sw1++;
                    break;
                case 5:
                    printf("DS\n");
                    if (!isError1) ds1++;
                    ds++;
                    break;
            
            default:
                break;
            }
        }
        else printf("none\n");

        isError1 = isError;
        isError = 0;
    }

    printf("%d %d %d\n%d %d %d", ce, sw, ds, ce1, sw1, ds1);
    return 0;
}