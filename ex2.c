#include <stdio.h>

int main() {
    int cont = 1;
    while(cont <= 20) {
        if(cont % 2 == 0) {
            printf("%d\n", cont);
        }
        cont++;
    }
    return 0;
}