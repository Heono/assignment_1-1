#include <stdio.h>
int main()
{
        int a[100],  b[100], c[200];
        int i,  j, cnt1 = 0, cnt2 = 0, cnt3= 0;
        int  n;
        while (1)
        {
                scanf("%d", &n);
                if (n < 0) break;
                // 중복 제거 ************ 이거 기억해두자 
                for (i=0;i<cnt1;i++)
                        if (n == a[i])  break;
                if (cnt1==i) a[cnt1++] = n;
        }

        while (1)
        {
                scanf("%d", &n);
                if (n < 0) break;
                // 중복 제거 ************ 이거 기억해두자
                for (i=0;i<cnt2;i++)
                        if (n == b[i])  break;
                if (cnt2==i) b[cnt2++] = n;
        }

        // c 배열에 넣을 때도 중복 확인 하면서 넣기
        for (i=0;i<cnt1;i++)
        {
                for (j=0;j<cnt3;j++)
                        if (a[i] == c[j])  break;
                if (j == cnt3) c[cnt3++] = a[i];
        }
        for (i=0;i<cnt2;i++)
        {
                for (j=0;j<cnt3;j++)
                        if (b[i] == c[j])  break;
                if (j == cnt3) c[cnt3++] = b[i];
        }

        //sort c
        //오름차순, 버블 정렬
        for (i=0;i< cnt3; i++)
        {
                for (j=0;j<cnt3-i-1;j++)
                        if (c[j] > c[j+1])
                        {
                                int t;
                                t = c[j]; c[j] = c[j+1]; c[j+1] = t;
                        }
        }
        for (i=0;i<cnt3;i++)
                printf(" %d", c[i]);
}