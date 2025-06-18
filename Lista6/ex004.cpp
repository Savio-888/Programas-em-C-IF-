#include <stdio.h>
/* Ler 2 matrizes A e B, cada uma com 1D para 4 elementos. 

Criar uma matriz C de 2D, onde a 1ª coluna da matriz C deverá ser formada pelos elementos da matriz A multiplicados por 2 
e a 2ª coluna deverá ser formada pelos elementos da matriz B subtraídos de 5. 

Exibir a matriz C.
*/
int main(){
    int A[4], B[4], C[4][2], i, j;
    printf("*Matriz A*\n");
    for (i = 0; i < 4; ++i){
        printf("Digite um valor:\n>>");
        scanf(" %d", &A[i]);
    } printf("*Matriz B*\n");
    for (i = 0; i < 4; ++i){
        printf("Digite um valor:\n>>");
        scanf(" %d", &B[i]);
        for (j = 0; j < 2; ++j){
            if (j == 0){
                C[i][j] = A[i] * 2;
            } else {
                C[i][j] = B[i] - 5;
            }
        }
    } for (i = 0; i < 4; ++i){
        for (j = 0; j < 2; ++j) {
            printf("[%d] ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// facil dms essa lista professora