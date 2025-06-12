#include <stdio.h>
#include <math.h>
int main(){
    int A[3], B[3], i, pesq;
    for	(i = 0; i <= 2; i++){
		printf("Digite o %dº valor de A: ", i+1);
		scanf("%d", &A[i]);
        B[i] = pow(A[i], 3);
	}
    for(i = 0; i <= 2; i++){
		printf("[%d] ", B[i]);
	}
    printf("Pesquise um valor: ");
	scanf("%d", &pesq);
	for(i = 0; i <= 2; i++){
		if(B[i] == pesq){
			printf("O valor %d foi encontrado na posicao %d.", pesq, i+1);
			break;
		} else if (i == 2 && B[i] != pesq){
			printf("Valor nao encontrado.");
		}
	}
    return 0;
}