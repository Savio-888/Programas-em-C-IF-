#include <stdio.h>
int main(){
    int cont;
    for(cont = 20; cont >= 1; cont--){
        if (cont % 2 == 0) {
            printf("%d, é par.\n", cont);
        } else {
            printf("%d, é impar.\n", cont);
        }
    }
    return 0;
}
