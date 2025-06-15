#include <stdio.h>
/*Ler 2 matrizes A e B, cada uma com 1D para 7 elementos.
Criar uma matriz C de 2D, onde a 1ª coluna deverá ser formada pelos elementos da matriz A e a 2ª coluna deverá ser formada pelos elementos da matriz B.
Exibir a matriz C.*/
int main(){
    int A[7], B[7], C[2][7], i, j;
    for (i = 0; i < 7; ++i){
        printf("Digite o %d valor da matriz A: ", i+1);
        scanf("%d", &A[i]);
    } for (i = 0; i < 7; ++i){
        printf("Digite o %d valor da matriz B: ", i+1);
        scanf("%d", &B[i]);
    } for (i = 0; i < 2; ++i){
        for (j = 0; j < 7; ++j){
            if (i == 0){
                C[i][j] = A[j];
            } else {
                C[i][j] = B[j];
            }
            
        }
    }
    for (i = 0; i < 2; ++i){
        if (i == 0){
            printf("Primeira Linha: \n");
        } else {
            printf("Segunda Linha: \n");
        }
        for (j = 0; j < 7; ++j){
            printf("[%d] ", C[i][j]);
        }
        printf("\n");
    }
    
}
