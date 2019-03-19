#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// Crie uma tabela de um campeonato de futebol, com 10 times e 4 colunas
//
// Na coluna 0 e o total de vitorias (multiplique por 3 pontos)
// Na coluna 1 o total de empates (multiplique por 1 ponto)
// Na coluna 2 o total de derrotas (multiplique por 0 pontos)
// Na coluna 3 , calcule o total de pontos
// Mostre ao final, o três primeiros colocados da tabela

int main(int argc, char const *argv[])
{
  // inserido uma o quinto elemento do registro para identificar os times
  int tabCampeonato[10][5],x,i,j,aux0,aux1,aux2,aux3,aux4;

  // zerar o array
  for (i=0;i<10;i++)
  {
    for (j=0;j<5;j++)
    {
      tabCampeonato[i][j] = 0;
    }
  }

  for (x=0;x<10;x++)
  {
    // Implementação futura, não está organizando o array de nomes
    // printf("Insira o nome do time: ");
    // scanf("%s",times[x]);
    tabCampeonato[x][0] = x+1;
    printf("Insira a quantidade de vitórias do time [%d] : ", tabCampeonato[x][0]);
    scanf("%d", &tabCampeonato[x][1]);
    printf("Insira a quantidade de empates do time [%d] : ", tabCampeonato[x][0]);
    scanf("%d", &tabCampeonato[x][2]);
    printf("Insira a quantidade de derrotas do time [%d] : ", tabCampeonato[x][0]);
    scanf("%d", &tabCampeonato[x][3]);
    // logica da pontuação
    tabCampeonato[x][4] = (tabCampeonato[x][1] * 3) + tabCampeonato[x][2];
    system("cls");
  }

  // reorganiza em ordem decrescente
  for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(tabCampeonato[i][4] < tabCampeonato[j][4])
            {
              // coleta o maior (j)
              aux0 = tabCampeonato[j][0];
              aux1 = tabCampeonato[j][1];
              aux2 = tabCampeonato[j][2];
              aux3 = tabCampeonato[j][3];
              aux4 = tabCampeonato[j][4];

              // troca o valor maior pelo menor
              tabCampeonato[j][0] = tabCampeonato[i][0];
              tabCampeonato[j][1] = tabCampeonato[i][1];
              tabCampeonato[j][2] = tabCampeonato[i][2];
              tabCampeonato[j][3] = tabCampeonato[i][3];
              tabCampeonato[j][4] = tabCampeonato[i][4];

              // troca o valor maior pelo coletado (j)
              tabCampeonato[i][0] = aux0;
              tabCampeonato[i][1] = aux1;
              tabCampeonato[i][2] = aux2;
              tabCampeonato[i][3] = aux3;
              tabCampeonato[i][4] = aux4;

            }
        }
    }

    for (x=0;x<3;x++)
    {
      printf("\n%d colocado: %d, Pontos: %d, Vitoria: %d, Empates: %d, Derrotas: %d", x+1, tabCampeonato[x][0],tabCampeonato[x][4],tabCampeonato[x][1],tabCampeonato[x][2],tabCampeonato[x][3]);
    }

  return 0;
}
