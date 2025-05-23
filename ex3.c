#include <stdio.h>
int main(){
    int cont = 1;
    while(cont<=20){
        if(cont % 2 == 0){
            printf("%d, é par.\n", cont);
        } else {
            printf("%d, é impar.\n", cont);
        }
        cont++;
    }
    return 0;
}