#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float indice;
	printf("Insira o indice de poluicao:");
	scanf("%f",&indice);
	//indice = indice *10;
	
	if (indice >= 0.3) {
		printf("Notificar grupo 1 a parar as atividades\n");
		if (indice >= 0.4) {
			printf("Notificar grupo 2 a parar as atividades\n");
			if (indice >= 0.5) {
				printf("Notificar grupo 3 a parar as atividades\n");
			}			
		}
	} else{
		printf("Indice de poluição aceitavel");
	};
	
	return 0;
}
