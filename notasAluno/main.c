#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p1,p2,p3,faltas,aulas,freq,media;
	
	aulas = 20;
	printf("Insira o numero de faltas do aluno:");
	scanf("%f",&faltas);	
	// calculo da porcentagem da frequencia do aluno
	freq = (faltas/aulas)*100;
	
	// teste de frequencia menor que 30 %
	if (freq <=30) {
		// aluno com boa frequencia, teste de notas
		printf("Insira a nota da P1:");
		scanf("%f",&p1);
		printf("Insira a nota da P2:");
		scanf("%f",&p2);
		media = (p1 + p2)/2;
		if (media >= 6){
			printf("Aluno aprovado");
		} else {
			printf("Insira a nota da P3:");
			scanf("%f",&p3);
			// caso aluno reprovado na media da p1 com a p2, pegar a maior nota para fazer nova media com p3
			if (p1>p2){
				media = (p1 + p3)/2;
			} else {
				media = (p2 + p3)/2;
			}
			if (media >= 6) {
				printf("Aluno aprovado no exame");
			} else {
				printf("Aluno reprovado");
			}
		}
		
	} else {
		printf("Aluno reprovado por falta");
	}
	
	
	
	
	return 0;
}
