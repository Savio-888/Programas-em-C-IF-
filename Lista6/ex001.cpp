#include <stdio.h>
int main(){
    int A[5][3], B[5][3], C[5][3];
    int i, j;
    for (i = 0; i<5; i++){
        printf("Digite os 3 valores da %d linha da matriz A: ", i+1);
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }
    for (i = 0; i<5; i++){
        printf("Digite os 3 valores da %d linha da matriz B: ", i+1);
        scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}
