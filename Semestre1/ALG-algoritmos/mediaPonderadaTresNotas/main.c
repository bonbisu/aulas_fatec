#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float a,b,c,media;
	
	printf("Informa a nota da primeira prova: ");
	scanf("%f",&a);
	printf("Informa a nota da segunda prova: ");
	scanf("%f",&b);
	printf("Informa a nota da terceira prova: ");
	scanf("%f",&c);
	
	media = ((a*1)+(b*1)+(c*2))/4;
	  
	if (media >= 6) {
		printf("\nAluno aprovado com média: %.1f", media);		
	} else {
		printf("\nAluno reprovado com média: %.1f", media);	
	}
	
	
	return 0;
}
