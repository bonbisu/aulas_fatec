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
  float temp1,temp2,temperaturas[10][3],variation;
  int op,x,day;

  // Titulo do programa
  printf("Resumo das temperaturas ao longo de 10 dias.\n");

  for (x=0; x<10; x++) {
    // capturando as temperaturas maximas e minimas
      printf("Insira a temperatura minima do dia %d : ", x+1);
      scanf("%f", &temp1);
      printf("Insira a temperatura maxima do dia %d : ", x+1);
      scanf("%f", &temp2);

      // correção para caso o usuário insira os valores invertidos
      if (temp1 < temp2) {
        temperaturas[x][0] = temp1;
        temperaturas[x][1] = temp2;
      } else {
        temperaturas[x][0] = temp2;
        temperaturas[x][1] = temp1;
      }
      // calculo da variação da temperatura por dia
      float variation = temperaturas[x][1] - temperaturas[x][0];
      temperaturas[x][2] = variation;
      // limpar a tela a cada nova temperatura inserida
      system("clear");

    }

    // loop "infinito" para consultar todas opções sem
    // precisar reinserir os valores dos 10 dias
    while (op != 4) {
      printf("Selecione a operacao desejada:\n \
      1-Temperatura minima de todos os dias.\n \
      2-Temperatura máxima de todos os dias\n \
      3-Maior variação de temperatura de todos os dias.\n \
      4-Sair do programa.\n");
      // capta o input do usuário para cada uma das operações desejadas
      scanf("%d", &op);
      // seleciona a operação inserida
      switch (op) {
        case 1:
        printf("\n");
        // loop para imprimir cada dia com sua temperatura minima
        for (x=0; x<10; x++) {
          printf("Temperaturas minima no dia %d : %.2f\n", x+1, temperaturas[x][0]);
        }
        break;

        case 2:
        printf("\n");
        // loop para imprimir cada dia com sua temperatura maxima
        for (x=0; x<10; x++) {
          printf("Temperaturas maxima no dia %d : %.2f\n", x+1, temperaturas[x][1]);
        }
        break;

        case 3:
        printf("\n");
        variation = 0;
        // loop para comparar qual a maior variação de temperatura
        for (x=0; x<10; x++) {
          if (temperaturas[x][2] > variation) {
            variation = temperaturas[x][2];
            day = x+1;
          }
        }
        // imprime a maior temperatura
        printf("O dia %d teve a maior variacao de temperatura: %.2f C\n", day, variation);
        break;

      }
      // teste para entrar ou não no loop das opções
      if (op != 4){
        printf ("\n\nPressione [ENTER] para continuar...");
        // usar 2 getchar quando quiser pausar dentro de um loop
        // ou >> while(getchar()!='\n'); >> getchar ();
        // ou >> fflush(stdin);
        // estas opções 'limpam' o stdin
        getchar ();
        getchar ();
        system("clear");
      }

    }
  }
