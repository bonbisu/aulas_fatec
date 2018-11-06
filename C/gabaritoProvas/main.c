#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 2 – Armazene em uma matriz 10×5 o resultado de uma prova de alternativas:
//
// a – coluna 0
// b – coluna 1
// c – coluna 2
// d – coluna 3
// e – coluna 4
// Exemplo da resposta da primeira questão com a alternativa C:
//
// prova[0][0]=0 ; prova[0][1]=0; prova[0][2]=1;prova[0][3]=0;prova[0][4]=0;
//
// Com um gabarito já definido e armazenado em uma matriz, verifique a nota obtida pelo aluno


int main(int argc, char *argv[]) {
  int x,corretas=0;
  float notaFinal;
  int resposta;

  // definir aqui as respostas certas
  int prova[10][5] = {{0,0,1,0,0}, // questão 1
                      {1,0,0,0,0}, // questão 2
                      {0,0,0,1,0}, // questão 3
                      {0,1,0,0,0}, // questão 4
                      {0,0,1,0,0}, // questão 5
                      {1,0,0,0,0}, // questão 6
                      {0,1,0,0,0}, // questão 7
                      {0,1,0,0,0}, // questão 8
                      {0,0,0,1,0}, // questão 9
                      {1,0,0,0,0}}; // questão 10

  printf("Gabarito da prova.\n");
  for (x=0; x<10; x++) {
    printf("Insira a resposta da questao [%d]: ", x+1);
    scanf("%d", &resposta);

    switch (resposta) {
      case 1:
        if (prova[x][0] == 1) {
          corretas++;
        }
        break;

      case 2:
        if (prova[x][1] == 1) {
          corretas++;
        }
        break;

      case 3:
        if (prova[x][2] == 1) {
          corretas++;
        }
        break;

      case 4:
        if (prova[x][3] == 1) {
          corretas++;
        }
        break;

      case 5:
        if (prova[x][4] == 1) {
          corretas++;
        }
        break;
    }
  }
  printf("%d\n", corretas );


}
