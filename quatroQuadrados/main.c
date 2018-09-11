#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,c,d;
	
	printf("Insira o primeiro valor: ");
	scanf("%f",&a);
	printf("Insira o segundo valor: ");
	scanf("%f",&b);
	printf("Insira o terceiro valor: ");
	scanf("%f",&c);
	printf("Insira o quarto valor: ");
	scanf("%f",&d);
	
	a = a*a;
	b = b*b;
	c = c*c;
	d = d*d;
	
	if (c  >= 1000 ){
		printf("O quadrado do terceiro valor: %.f\n", c);
	} else {
		printf("O quadrado do primeiro valor: %.f\n", a);
		printf("O quadrado do segundo valor: %.f\n", b);
		printf("O quadrado do quarto valor: %.f\n", d);

		
	}
	
	
	
	return 0;
}
