#include <stdio.h>
int main(){
	int A[10], posi[10], i, x, flagzinhoinhozinhoinho;
	flagzinhoinhozinhoinho = 0;
	for(i = 0; i < 10; ++i){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &A[i]);
	} printf("Digite um numero a ser pesquisado: ");
	scanf("%d", &x);
	for (i = 0; i < 10; ++i){
		if(x == A[i]){
			printf("Valor achado na posição [%d].\n", i);
			flagzinhoinhozinhoinho = 1;
		} else if (i == 9 && x != A[i] && flagzinhoinhozinhoinho == 0){
			printf("Valor nao encontrado no vetor.");
		}
	}
	return 0;
}
