#include <stdio.h>
int main(){
	// ler 8 valores em um vetor, e usar outro vetor de mesma dimensao com os elementos do primeiro multiplicados por 5. Exibir valores do segundo vetor em ordem crescente
	int A[8], B[8], i, j, aux, pesq, acha;
	acha = 0;
	for	(i = 0; i <= 7; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &A[i]);
		B[i] = A[i]*5;
	}
	for(i = 0; i <= 6; i++){
		for(j = i+1; j <= 7; j++){
			if (B[i]>B[j]){
				aux = B[i];
				B[i] = B[j];
				B[j] = aux;
			}
		}
	}
	for(i = 0; i <= 7; i++){
		printf("[%d] ", B[i]); 
	}
	printf("Pesquise um valor: ");
	scanf("%d", &pesq);
	for(i = 0; i <= 7; i++){
		if(B[i] == pesq){
			acha = 1;
			printf("O valor %d foi encontrado na posicao %d.", pesq, i+1);
			break;
		} else if (i == 7 && B[i] != pesq){
			printf("Valor nao encontrado.");
		}
	}
	return 0;
}
