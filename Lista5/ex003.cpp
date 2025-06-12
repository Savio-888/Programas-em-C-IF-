#include <stdio.h>
int main(){
	// ler 15 elementos de um vetor, e criar outro vetor de mesma dimensao com os numeros em fatorial. Exibir o segundo vetor em ordem crescente.
	int A[15], B[15], i, j, aux;
	for	(i = 0; i <= 14; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &A[i]);
		B[i] = A[i];
		for(j = A[i]-1; j > 0; j--){
			B[i] = B[i] * j;
		}
	}
	
	for(i = 0; i <= 13; i++){
		for(j = i+1; j <= 7; j++){
			if (B[i]>B[j]){
				aux = B[i];
				B[i] = B[j];
				B[j] = aux;
			}
		}
	}
	for(i = 0; i <= 4; i++){
		printf("[%d] ", B[i]); 
	}
	return 0;
}
