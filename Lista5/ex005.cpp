#include <stdio.h>
int main(){
	int A[2], B[3], C[5], i, j, aux;
	for	(i = 0; i <= 1; i++){
		printf("Digite o %dº valor de A: ", i+1);
		scanf("%d", &A[i]);
	}
	for	(i = 0; i <= 2; i++){
		printf("Digite o %dº valor de B: ", i+1);
		scanf("%d", &B[i]);
	}
	for(i = 0; i <= 4; i++){
		if (i < 2){
			C[i] = A[i];
		}
		else{
			C[i] = B[i-2];
		}
	}
	for(i = 0; i <= 3; i++){
		for(j = i+1; j <= 4; j++){
			if (C[i]<C[j]){
				aux = C[i];
				C[i] = C[j];
				C[j] = aux;
			}
		}
	}
	for(i = 0; i <= 4; i++){
		printf("[%d] ", C[i]);
	}
	return 0;
}
