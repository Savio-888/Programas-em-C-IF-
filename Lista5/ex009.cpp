#include <stdio.h>
#include <string.h>
int main(){
    char A[5][30], aux[30], pesq[30];
	int i, j, acha;
	acha = 0;
	for (i = 0; i < 5; i++){
		printf("Digite o %dº nome: ", i+1);
		fgets(A[i], 30, stdin);
		fflush(stdin);
	}
	for (i = 0; i < 4; i++){
		for (j = i+1; j < 5; i++){
			if (strcmp(A[i], A[j]) > 0){
				strcpy(aux, A[i]);
				strcpy(A[i], A[j]);
				strcpy(A[j], aux);
			}
		}
	}
	for (i = 0; i < 5; i++){
		printf("%s", A[i]);
	}
	printf("Digite um nome a ser pesquisado: ");
	fgets(pesq, 30, stdin);
	for (i = 0; i < 5; i++){
		if (strcmp(A[i], pesq) == 0){
			printf("Nome achado na posicao numero %d.", i+1);
			acha = 1;
		}
	}
	return 0;
}