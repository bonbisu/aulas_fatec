#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c,n,e,s;
	
	printf("Insira o codigo do operario: ");
	scanf("%f",&c);
	printf("Insira o numero de horas trabalhadas: ");
	scanf("%f",&n);
	
	if (n > 50) {
		e = (n - 50)*20;
		s = 50 * 10;
		printf("Salario total: %.2f \nSalario excedente: %.2f", s,e);
	} else {
		e = 0;
		s = n * 10;
		printf("Salario total: R$%.2f \nSalario excedente: R$%.2f", s,e);		
	}
	
	
	
	return 0;
}
