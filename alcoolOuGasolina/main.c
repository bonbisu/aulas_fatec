#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
	// seleciona idioma portugues para aceitar acentos
	setlocale(LC_ALL, "Portuguese");
	
	float gasolina, alcool, parcial;
	
	printf("Qual combustível é mais vantajoso?\n\n");
	
	printf("Insira o valor da Gasolina: ");
	scanf("%f",&gasolina);
	printf("Insira o valor do Álcool: ");
	scanf("%f",&alcool);
	// calcular 70% da gasolina
	
	parcial = (gasolina * 70)/100;
	
	if (parcial < alcool) {
		printf("O combustível mais vantajoso é a Gasolina.");
	} else {
		printf("O combustível mais vantajoso é o Álcool. ");
	};
	
	
	
	

	return 0;
}
