#include <stdio.h>

int main() {
	int A[20], N=20, M, F, R, cnt, i, temp;

	for (i=0; i<N; i++) A[i]=i+1;
    
	scanf("%d %d %d", &F, &R, &M);

	temp = A[R];
	i = R;
	cnt = M-1;
	while (cnt != 0) {
	   A[i] = A[i-1];
	   i--;
	   cnt--;
	}
	A[R-M+1] = temp;

	for (i=0; i<N; i++) printf("%d ", A[i]);

	return 0;
}