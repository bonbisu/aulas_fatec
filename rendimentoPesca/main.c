#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p, e, m;
	p, e, m = 0;
	
	// printf("%f , %f , %f", p, e, m);
	
	printf("Insira a pesagem dos peixes em kilos: ");
	scanf("%f",&p);
	
	if (p <= 50){
		printf("Pescados %.f \nExcedendes: %.f \nMulta: %.f", p,e,m);
	} else {
		e = p - 50;
		m = e * 4;
		printf("Pescados %.f \nExcedendes: %.f \nMulta: %.f", p,e,m);		
	}
	
	
	return 0;
}
