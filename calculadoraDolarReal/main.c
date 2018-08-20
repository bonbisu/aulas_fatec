#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float dolar,real;
	
	printf("Insira o valor em dolar:");
	scanf("%f", &dolar);
	
	real = dolar*3.97;
	printf("Valor em real:%f",real);
	return 0;
}
