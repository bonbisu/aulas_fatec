#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Construa um programa em C que utiliza uma matriz 10×3 que armazene as
// temperaturas máxima e minima do dia, assim como a media de temperatura na
// ultima coluna.  Crie um menu de escolha que ofereça as seguintes informações:
//
// 1-temperatura minima de todos os dias.
// 2-temperatura máxima de todos os dias.
// 3-maior variação de temperatura de todos os dias.
// 4-Sair do programa.


int main(int argc, char *argv[]) {
  float temperaturas[10][3];
  int op;
  int x=0;
  float variation = 0;
  int day;

  printf("Resumo das temperaturas ao longo de 10 dias.\n");

  for (int i=0; i<2; i++) {
      printf("Insira a temperatura minima do dia %d : ", i+1);
      scanf("%f", &temperaturas[i][0]);
      printf("Insira a temperatura maxima do dia %d : ", i+1);
      scanf("%f", &temperaturas[i][1]);
      float media = (temperaturas[i][0] + temperaturas[i][1])/2;
      temperaturas[i][2] = media;
      system("clear");

    }
    printf("Selecione a operacao desejada:\n \
    1-Temperatura minima de todos os dias.\n \
    2-Temperatura máxima de todos os dias\n \
    3-Maior variação de temperatura de todos os dias.\n \
    4-Sair do programa.");
    scanf("%d", &op);
    switch (op) {
      case 1:
        for (x=0; x<2; x++) {
          printf("Temperaturas minima no dia %d : %.2f", x+1, temperaturas[x][0]);
        }
      break;

      case 2:
      for (x=0; x<2; x++) {
        printf("Temperaturas maxima no dia %d : %.2f", x+1, temperaturas[x][1]);
      }
      break;

      case 3:
      for (x=0; x<2; x++) {
        float variationNow = temperaturas[x][0] - temperaturas[x][1];

        if (variationNow > variation) {
          variation = variationNow;
        }
        day = x + 1;
        return variation, day;
      }

      printf("O dia %d teve a maior variacao de temperatura: %.2f C", x+1, variation);
      break;
      
      case 4:
        printf("Saindo do programa!");
      default:
        printf("Opção invalida!");
    }
  }
