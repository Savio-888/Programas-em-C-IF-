#include <stdio.h>
int main(){
    int cont = 1;
    do {
        if(cont % 2 == 0){
            printf("%d, é par.\n", cont);
        } else {
            printf("%d, é impar.\n", cont);
        }
        cont++;
    } while(cont <= 20);
    return 0;
}