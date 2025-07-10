#include <stdio.h>
int main(){
	int A[3][3], i, j;
	int soma = 0;
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j){
			printf("Digite o valor da %d linha, %d coluna: ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	} for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j){
			if (i == j){
				soma = soma + A[i][j];
			}
		}
	} printf("%d", soma);
	return 0;
}
