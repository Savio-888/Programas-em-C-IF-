#include <stdio.h>
int main(){
    char comando;
    float A, B, res;
    while(1){
        printf("Digite um comando a ser realizado:\n[+]Soma\n[-]Subtração\n[*]Multiplicação\n[/]Divisão\n[S]Sair do programa\n");
        printf(">>");
        scanf(" %c", &comando);
        if (comando == '+') {
            printf("Digite o primeiro valor: ");
            scanf("%f", &A);
            printf("Digite o segundo valor: ");
            scanf("%f", &B);
            res = A+B;
            printf("O resultado é: %f\n", res);
        } else if (comando == '-') {
            printf("Digite o primeiro valor: ");
            scanf("%f", &A);
            printf("Digite o segundo valor: ");
            scanf("%f", &B);
            res = A-B;
            printf("O resultado é: %f\n", res);
        } else if (comando == '*') {
            printf("Digite o primeiro valor: ");
            scanf("%f", &A);
            printf("Digite o segundo valor: ");
            scanf("%f", &B);
            res = A*B;
            printf("O resultado é: %f\n", res);
        } else if (comando == '/') {
            printf("Digite o primeiro valor: ");
            scanf("%f", &A);
            printf("Digite o segundo valor: ");
            scanf("%f", &B);
            res = A/B;
            printf("O resultado é: %f\n", res);
        } else if (comando == 'S') {
            printf("Saindo...");
            break;
        }
    }
    return 0;
}
