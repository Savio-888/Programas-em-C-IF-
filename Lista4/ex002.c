#include <stdio.h>
/*
Descreva um programa em Linguagem C que leia o valor de um RA (número composto por 9 dígitos) e gere um novo RA pela inversão dos 4 dígitos menos significativos do RA inicial.
Exemplificando, se RA inicial for 972845236 então o RA novo deve ser 972846325.
Se RA inicial for 984475211 então o RA novo deve ser 984471125.
O algoritmo deve ler RA inicial e apresentar o RA novo.
*/
int main(){
    int RA[9], RAN[9], i;
    for (i = 0; i <= 8; i++){
        printf("Digite o %dº valor do RA do aluno: ", i+1);
        scanf("%d", &RA[i]);
        switch(i){
            case 5:
                RAN[8] = RA[i];
                break;
            case 6:
                RAN[7] = RA[i];
                break;
            case 7:
                RAN[6] = RA[i];
                break;
            case 8:
                RAN[5] = RA[i];
                break;
            default:
                RAN[i] = RA[i];
                break;
        }
    }
    for (i = 0; i <= 8; i++) {
        printf("%d", RAN[i]);
    }
}