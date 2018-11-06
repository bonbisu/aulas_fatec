#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Faça um algoritmo que armazene um vetor de inteiros de 20 posições,
// identifique  o percentual de números impares e de números pares informados.

int main(int argc, char *argv[]) {
  printf("Conta pares.\n");
  int numbers[20];
  int par = 0;
  int impar = 0;
  float ppar,pimpar;
  for (int x=0; x<20; x++) {
    printf("Insira um numero inteiro: ");
    scanf("%d", &numbers[x]);
    int modulo = numbers[x] % 2;
    // printf("%d\n", modulo ); // just to check if even or odd
    if (modulo == 0) {
      par++;
    } else {
      impar++;
    }
    system("clear");
  }
  ppar = (par*100)/20;
  pimpar = (impar*100)/20;
  printf("Pares : %.2f %% | Impares : %.2f %% ", ppar, pimpar);
}
