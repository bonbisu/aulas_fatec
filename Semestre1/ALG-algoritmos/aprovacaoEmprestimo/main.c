#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario,prestacao,relation;
	printf("Insira o salário: ");
	scanf("%f", &salario);
	
	printf("Insira o valor da prestacão: ");
	scanf("%f", &prestacao);
	
	relation = (salario*20)/100;	

	if (prestacao > relation) {
		printf("\nEmpréstimo não concedido");
	} else {
		printf("\nEmpréstimo concedido");
	}
	
	
	
	
	return 0;
}
