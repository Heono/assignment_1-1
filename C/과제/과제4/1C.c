#include <stdio.h>

int main(){
	int N, M1, M2, Nx, Ny, i, j, flag, temp, T, X[100], Y[10];

	scanf("%d%d", &M1, &M2);
    // M1 >= M2
	if (M1<M2){
		temp=M1;
		M1=M2;
		M2=temp;
	}

	i=0;
	scanf("%d", &N);
    // 종료 조건 : 0 또는 음수
	while (N>0){
		temp=N;		
		for (j=0; temp>0; j++){
			Y[j]=temp%10;
			temp/=10;
		}
		Ny=j;
		
        // M1 >= M2
        // 인덱스 삭제
		if (M1<Ny){
			for (j=M1; j<Ny; j++){
				Y[j]=Y[j+1];
			}
			Ny--;
		}
		if (M2<Ny){
			for (j=M2; j<Ny; j++){
				Y[j]=Y[j+1];
			}
			Ny--;
		}

        // 회문수 판별
		flag=0;
		for (j=0; j<Ny/2; j++){
			if (Y[j]!=Y[Ny-1-j]){
				flag=1;
				break;
			}
		}
		if (flag==0){
			X[i]=N;
			i++;
		}
		scanf("%d", &N);
	}
	Nx=i;

	if (Nx==0){
		printf("none\n");
	}
	else{
        // 내림차순 정렬
		for (i=0; i<Nx-1; i++){
            // Nx - 1로 해도 되긴 하는데 
            // 짜피 뒤쪽은 이미 정렬 됐으므로 
            // Nx-1-i로 하면 더 빠름
			for (j=0; j<Nx-1-i; j++){ 
				if (X[j]<X[j+1]){
					temp=X[j];
					X[j]=X[j+1];
					X[j+1]=temp;
				}
			}
		}

		for (i=0; i<Nx; i++){
			printf("%d ", X[i]);
		}
		printf("\n");
	}

	return 0;
}