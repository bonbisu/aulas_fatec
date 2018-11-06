#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Crie dois vetores do tipo inteiro com a capacidade de 10 posições, leia números
// que serão armazenados sequencialmente no primeiro vetor, faça um novo laço que
// armazene no segundo vetor o valor do primeiro multiplicado por 2 quando o
// índice for par, e multiplique por 3 quando o índice for impar.


int main(int argc, char *argv[]) {
  int normal[10], multiply[10];

  printf("Multiplicador de vetor\n");
  for (int x=0; x<10; x++) {
    printf("Insira um numero : ");
    scanf("%d", &normal[x]);

    int modulo = normal[x] % 2;

    if (modulo == 0) {
      multiply[x] = normal[x] * 2;
    } else {
      multiply[x] = normal[x] * 3;
    }
    system("clear");
  }

  for (int x=0; x<10; x++) {
    printf("%d\n", multiply[x] );
  }
}
