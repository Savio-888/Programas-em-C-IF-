#include <stdio.h>
int main(){
    int A[2], B[4], i, j, aux, pesq;
    for	(i = 0; i <= 1; i++){
		printf("Digite o %dº valor de A: ", i+1);
		scanf("%d", &A[i]);
        B[i] = A[i];
	}
    for	(i = 0; i <= 1; i++){
		printf("Digite o %dº valor de B: ", i+3);
		scanf("%d", &B[i+2]);
    }
    for(i = 0; i <= 3; i++){
		for(j = i+1; j <= 3; j++){
			if (B[i]>B[j]){
				aux = B[i];
				B[i] = B[j];
				B[j] = aux;
			}
		}
	}
    for(i = 0; i <= 3; i++){
		printf("[%d] ", B[i]);
	}
    printf("Pesquise um valor: ");
	scanf("%d", &pesq);
	for(i = 0; i <= 3; i++){
		if(B[i] == pesq){
			printf("O valor %d foi encontrado na posicao %d.", pesq, i+1);
			break;
		} else if (i == 3 && B[i] != pesq){
			printf("Valor nao encontrado.");
		}
	}
    return 0;
}