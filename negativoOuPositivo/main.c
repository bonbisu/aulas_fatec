#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// programa para identificar se o numero inserido é positivo ou negativo

int main(int argc, char *argv[]) {
	float numero;
	
	printf("Negativo ou positivo?\n");
	printf("Insira o numero: ");
	scanf("%f",&numero);
	
	if (numero >= 0) {
		printf("O numero inserido e positivo");
	} else {
		printf("O numero inserido e negativo");
	}
	
	return 0;
}
