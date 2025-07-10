#include <stdio.h>
#include <string.h>
int main(){
	char nomes[5][80], pesq[80];
	int i;
	for (i = 0; i < 5; ++i){
		printf("Digite o %d nome: ", i+1);
		fgets(nomes[i], sizeof(nomes[i]), stdin);
		fflush(stdin);
	} printf("Digite um nome para buscar: ");
	fgets(pesq, sizeof(pesq), stdin);
	fflush(stdin);
	for (i = 0; i < 5; ++i){
		if (strcmp(nomes[i], pesq) == 0){
			printf("Nome encontrado na posição [%d]\n", i);
		}
	}
	return 0;
}
