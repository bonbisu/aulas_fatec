#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2,operacao,resultado;
	printf("Insira o primeiro numero:\n");
	scanf("%f", &n1);
	printf("\nSelecione a operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
	scanf("%f", &operacao);
	printf("\nInsira o segundo numero:\n");
	scanf("%f", &n2);
	if (operacao == 1){
		resultado = n1+n2;
		printf("Resultado da soma : %.2f", resultado);
			
	
	} else if (operacao == 2){
			resultado = n1 - n2;
			printf("Resultado da subtracao : %.2f", resultado);
	} else if (operacao == 3){
		resultado = n1 * n2;
		printf("Resultado da multiplicacao : %.2f", resultado);
	} else if (operacao == 4){
		resultado = n1 / n2;
		printf("Resultado da divisao : %.2f", resultado);
	
	}
return 0;

}
