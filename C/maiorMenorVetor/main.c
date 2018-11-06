#include <stdio.h>
#include <stdlib.h>

/*
faça um algoritmo que implemente um vetor de 20 posições,
leia as 20 posições e identifique em um novo laço,
qual o maior e menor numero informado
e qual a media dos números informados.
*/

int main(int argc, char *argv[]) {
	float menor, maior, media=0;
	float numeros[20];
	int x;
	for(x=0;x<20;x++){
		printf("Informe um numero[%d]=",x);
		scanf("%f", &numeros[x]);
	}
	for(x=0;x<20;x++){
		if(x==0){
			menor = numeros[0];
			maior = numeros[0];
		} else {
			if(numeros[x]<menor) menor = numeros[x];
			if(numeros[x]>maior) maior = numeros[x];
		}
		media+=numeros[x]; // media = media + numeros[x]
	}
	media = media / 20;
	printf("Menor=%.2f,Maior=%.2f,Media=%.2f",menor,maior,media);
	return 0;
}
