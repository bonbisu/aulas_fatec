#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Crie um programa que armazene em uma matriz 10×3 em cada uma das colunas
// armazene o tamanho de uma aresta de um triangulo, ao final exiba o
// percentual de triângulos isoceles, equiláteros e escalenos

// Triângulo equilátero: possui os três lados com medidas iguais.
// Triângulo isósceles: possui dois lados com medidas iguais.
// Triângulo escaleno: possui os três lados com medidas diferentes.

int main(int argc, char *argv[]) {
  int triangulos[10][3];
  int x,y,equil,isoce,escal;
  printf("Reconhecedor de triangulos\n");

  for (x=0;x<10;x++) {
    printf("Triangulo [%d] : \n", x+1);
    for (y=0;y<3;y++) {
      printf("Insira o tamanho da aresta [%d] : ", y+1);
      scanf("%d", &triangulos[x][y]);
    }
  }
  for (x=0;x<10;x++) {
    if (triangulos[x][0] == triangulos[x][1] && triangulos[x][0] == triangulos[x][2]) {
      equil++;
    }
    else if ((triangulos[x][0] == triangulos[x][1] || triangulos[x][0] == triangulos[x][2]) && (triangulos[x][0] != triangulos[x][1] || triangulos[x][0] != triangulos[x][2])) {
      isoce++;
    }
    else if (triangulos[x][0] != triangulos[x][1] && triangulos[x][0] != triangulos[x][2]) {
      escal++;
    }
  }

  printf("Isosceles : %d  Equilateros : %d  Escalenos : %d", isoce,equil,escal);
  // for (x=0;x<3;x++) {
  //   for (y=0;y<3;y++) {
  //     printf("%d\n", triangulos[x][y]);
  //   }
  // }

}
