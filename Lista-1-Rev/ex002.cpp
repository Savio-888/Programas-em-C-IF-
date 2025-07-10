#include <stdio.h>
int main(){
	int A[5], i, j, aux;
	for(i = 0; i < 5; ++i){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &A[i]);
	} for(i = 0; i < 4; ++i){
		for(j = i+1; j < 5; ++j){
			if(A[i] > A[j]){
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	} printf("em ordem crescente:\n")
	for(i = 0; i < 5; ++i){
		printf("[%d] ", A[i]);
	}
	return 0;
}
