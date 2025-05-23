#include <stdio.h>
int main(){
    int num, cont, res;
    printf("Digite um numero para a tabuada: ");
    scanf("%d", &num);
    for(cont = 0; cont <= 10; cont++){
        res = num * cont;
        printf("%dx%d=%d\n", num, cont, res);
    }
    return 0;
}