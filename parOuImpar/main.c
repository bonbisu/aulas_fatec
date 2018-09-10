#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int numero,parcial;
	printf("Par ou impar?\n");
	printf("Insira o numero: ");
	scanf("%i",&numero);
	
	parcial = numero % 2;
	
	if (parcial == 0) {
		printf("\nO numero %i é par.", numero);
	} else {
		printf("\nO numero %i é impar.", numero);
	}
	
	return 0;
}
