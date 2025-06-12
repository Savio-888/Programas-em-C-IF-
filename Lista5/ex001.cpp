#include <stdio.h>
int main(void){
	// ler 12 elementos de um vetor, coloca-los em ordem descrescente e apresentar os elementos ordenados.
	int A[12], i, j, aux;
	for	(i = 0; i <= 11; i++){
		scanf("%d", &A[i]);
	}
	for(i = 0; i <= 10; i++){
		for(j = i+1; j <= 11; j++){
			if (A[i]<A[j]){
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	}
	for(i = 0; i <= 11; i++){
		printf("%d", A[i]); 
	}
	return 0;
}
