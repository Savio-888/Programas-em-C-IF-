#include <stdio.h>
int main(){
	int A[12], B[12], C[12], i, j, aux;
	for	(i = 0; i <= 11; i++){
		printf("Digite o %dº valor de A: ", i+1);
		scanf("%d", &A[i]);
	}
	for	(i = 0; i <= 11; i++){
		printf("Digite o %dº valor de B: ", i+1);
		scanf("%d", &B[i]);
	}
	for(i = 0; i <= 10; i++){
		for(j = i+1; j <= 7; j++){
			if (B[i]>B[j]){
				aux = B[i];
				B[i] = B[j];
				B[j] = aux;
			}
		}
	}
	for(i = 0; i <= 10; i++){
		for(j = i+1; j <= 7; j++){
			if (A[i]>A[j]){
				aux = B[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	}
	for(i = 0; i <= 11; i++){
		C[i] = A[i] + B[1];
	}
	for(i = 0; i <= 10; i++){
		for(j = i+1; j <= 7; j++){
			if (C[i]>C[j]){
				aux = C[i];
				C[i] = C[j];
				C[j] = aux;
			}
		}
	}
	for(i = 0; i <= 11; i++){
		printf("[%d] ", C[i]);
	}
	return 0;
}
