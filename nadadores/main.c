#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  idade;
	
	/* Infantil A = 5 a 7 anos
Infantil B = 8 a 11 anos
Juvenil A = 12 a 13 anos
Juvenil B = 14 a 17 anos
Adultos = Maiores de 18 anos */

	printf("Insira a idade do nadador: ");
	scanf("%f",&idade);
	
	if (idade <= 18){
		if (idade >=5 && idade <=7){
			printf("Categoria Infantil A");
		}
		if (idade >= 8 && idade <= 11){
			printf("Categoria Infantil B");
		}
		if (idade >= 12 && idade <= 13){
			printf("Categoria Juvenil A");
		}
		if (idade >= 14 && idade <= 17){
			printf("Categoria Juvenil B");
		}
	} else {
		printf("Categoria Adultos");
	}


	return 0;
}
