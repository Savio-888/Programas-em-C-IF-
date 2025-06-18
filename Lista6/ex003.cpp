#include <stdio.h>
#include <math.h>
/*Ler uma matriz A de 1D com 10 elementos.
Criar uma matriz B de 2D com 3 colunas, onde:
- a 1ª coluna da matriz B é formada pelos elementos da matriz A somados com mais 5;
- a 2ª coluna é formada pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A;
- a 3ª coluna deverá ser formada pelos quadrados dos elementos correspondentes da matriz A.
Exibir a matriz B.*/
int main(){
    int A[10], B[10][3], i, j, l, fat;
    for (i = 0; i < 10; ++i){
        printf("Digite um valor: ");
        scanf(" %d", &A[i]);
        for (j = 0; j < 3; ++j){
            if (j == 0){
                B[i][j] = A[i] + 5;
            } else if (j == 1){
                B[i][j] = A[i];
                for (l = A[i] - 1; l > 0; --l){
                    B[i][j] = B[i][j] * l;
                }
            } else {
                B[i][j] = pow(A[i], 2);
            }
        }
    } for (i = 0; i < 10; ++i){
        for (j = 0; j < 3; ++j){
            printf("[%d] ", B[i][j]);
        }
        printf("\n");
    } return 0;
}