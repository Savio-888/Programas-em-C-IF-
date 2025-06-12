#include <stdio.h>
int main(){
    int i, j;
    float A[4], pesq, aux;
    for	(i = 0; i <= 3; i++){
		printf("Digite a nota do %dº aluno", i+1);
		scanf("%f", &A[i]);
	}
    for(i = 0; i <= 3; i++){
		for(j = i+1; j <= 3; j++){
			if (A[i]>A[j]){
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	}
    for(i = 0; i <= 3; i++){
		printf("[%.2f] ", A[i]);
	}
    printf("Pesquise um valor: ");
	scanf("%f", &pesq);
	for(i = 0; i <= 3; i++){
		if(A[i] == pesq){
			printf("A nota %.2f foi encontrado na posicao %d.", pesq, i+1);
			break;
		} else if (i == 3 && A[i] != pesq){
			printf("Valor nao encontrado.");
		}
	}
    return 0;
}