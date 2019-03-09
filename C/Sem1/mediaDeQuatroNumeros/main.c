#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,d,media;
	
	printf("Insira do valor para a:");
	scanf("%f",&a);
	printf("Insira do valor para b:");
	scanf("%f",&b);
	printf("Insira do valor para c:");
	scanf("%f",&c);
	printf("Insira do valor para d:");
	scanf("%f",&d);
	
	media = (a+b+c+d)/4;
	
	printf("Media:%.2f", media);
	
	
	return 0;
}
