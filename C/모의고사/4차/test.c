#include <stdio.h>
#define SIZE 9
 
 
// 인자에 배열 (inx x[])이 있는데 배열은 값이 들어가는게 아니라 주소값이 들어가서 인자(배열) 값을 수정하면 원래 배열의 값이 수정됨.
int DeleteArray(int x[], int n, int k) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % k != 0) {
            x[cnt++] = x[i];
        }
    }
    return cnt; // 삭제 후 남은 원소의 개수
}
 
int main(void) {
    int a[SIZE] = { 1,2,3,4,5,6,7,8,9 };
    int k; // 사용자로부터 입력 받는 자연수
    int n;
 
    printf("자연수를 입력하시오: ");
    scanf("%d", &k);
 
    n = DeleteArray(a, sizeof(a) / 4, k); // n에 cnt 값 저장되도록
 
 
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
 
    return 0;
}
