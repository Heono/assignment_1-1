#include <stdio.h>

int main(){
	char ch, X[100], Y[100], Z[100];
	int i, j, k, flag, N, Ny, M;

	scanf("%c", &ch);
	i=0;
    // 종료 조건 
	while(ch!='!'){
		X[i]=ch;
		i++;
		scanf("%c", &ch);
	}

    // 중복 제거
	N=i;
	k=0;
	for (i=0; i<N; i++){
		flag=0;
		for (j=0; j<i; j++){
			if (X[i]==X[j]){
				flag=1;
				break;
			}
		}
		if (flag==0){
			Y[k]=X[i];
			k++;
		}
	}
	Ny=k;

	for (i=0; i<Ny; i++){
		printf("%c", Y[i]);
	}
	printf("\n");

	scanf("%d", &M);
	getchar(); // 엔터키 씹기
	for (i=0; i<M; i++){
		scanf("%c", &Z[i]);
	}

    // 문자열 찾기
	for (i=0; i<N-M+1; i++){
		flag=0;
      		for (j=0; j<M; j++){
            		if (Y[i+j]!=Z[j]){
                  		flag=1;
            		}
      		}
      		if (flag==0){
           		printf("%d\n", i);
			break;
		}
	}
	if (flag!=0)
		printf("none\n");

	return 0;
}