#include <stdio.h>
#include <string.h>
int main(){
	char nomes[10][80], aux[80];
	int i, j;
	for (i = 0; i < 10; ++i){
		printf("Digite o %d nome: ", i+1);
		fflush(stdin);
		fgets(nomes[i], sizeof(nomes[i]), stdin);
	} for (i = 0; i < 9; ++i){
		for (j = i+1; j < 10; ++j){
			if (strcmp(nomes[i], nomes[j]) >= 1){
				strcpy(aux, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], aux);
			}
		}
	} for (i = 0; i < 10; ++i){
		printf("%s\n", nomes[i]);
	}
	return 0;
}

