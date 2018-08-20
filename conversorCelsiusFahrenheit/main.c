#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c,f;
	printf("Insira o valor em Celsius:");
	scanf("%f",&c);
	
	f = ((9*c)+160)/5;
	
	printf("Valor em Fahrenheit:%.2f",f);
	return 0;
}
