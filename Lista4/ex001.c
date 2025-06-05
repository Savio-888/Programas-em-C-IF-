#include <stdio.h>
/*
    y1 = x1
    y2 = x2
    y3 = x8
    y4 = x7
    y5 = x5
    y6 = x6
    y7 = x3
    y8 = x4
    y9 = x9
*/
int main() {
    int RAV[9], RAC[9], i;
    for (i = 0; i <= 8; i++){
        printf("Digite o %dº valor do RA do aluno: ", i+1);
        scanf("%d", &RAV[i]);
        switch(i){
            case 2:
                RAC[7] = RAV[i];
                break;
            case 3:
                RAC[6] = RAV[i];
                break;
            case 6:
                RAC[2] = RAV[i];
                break;
            case 7:
                RAC[3] = RAV[i];
                break;
            default:
                RAC[i] = RAV[i];
                break;
        }
    }
    for (i = 0; i <= 8; i++) {
        printf("%d", RAC[i]);
    }
    return 0;
}