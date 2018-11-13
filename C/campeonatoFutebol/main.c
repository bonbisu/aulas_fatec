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
  int tabCampeonato[3][4],x,i,j,aux0,aux1,aux2,aux3;
  char times[3][15],auxTime[15];

  for (i=0;i<3;i++)
  {
    for (j=0;j<4;j++)
    {
      tabCampeonato[i][j] = 0;
    }
  }

  for (i=0;i<3;i++)
  {
    for (j=0;j<15;j++)
    {
      times[i][j] = 0;
    }
  }


  for (x=0;x<3;x++)
  {
    printf("Insira o nome do time: ");
    scanf("%s",times[x]);
    printf("Insira a quantidade de vitórias do %s : ", times[x]);
    scanf("%d", &tabCampeonato[x][0]);
    printf("Insira a quantidade de empates do %s : ", times[x]);
    scanf("%d", &tabCampeonato[x][1]);
    printf("Insira a quantidade de derrotas do %s : ", times[x]);
    scanf("%d", &tabCampeonato[x][2]);
    tabCampeonato[x][3] = (tabCampeonato[x][0] * 3) + tabCampeonato[x][1];
  }
  // system("clear");
  // for (x=0;x<3;x++)
  // {
  //   printf("\n%s obteve:\nPontos: %d, Vitoria: %d, Empates: %d, Derrotas: %d", times[x],tabCampeonato[x][3],tabCampeonato[x][0],tabCampeonato[x][1],tabCampeonato[x][2] );
  // }
  // reorganiza em ordem decrescente
  for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(tabCampeonato[i][3] < tabCampeonato[j][3])
            {
              aux0 = tabCampeonato[j][0];
              aux1 = tabCampeonato[j][1];
              aux2 = tabCampeonato[j][2];
              aux3 = tabCampeonato[j][3];
              scanf(auxTime, times[j]);

              tabCampeonato[j][0] = tabCampeonato[i][0];
              tabCampeonato[j][1] = tabCampeonato[i][1];
              tabCampeonato[j][2] = tabCampeonato[i][2];
              tabCampeonato[j][3] = tabCampeonato[i][3];
              scanf(times[j], times[i]);
              // times[j] = times[i];

              tabCampeonato[i][0] = aux0;
              tabCampeonato[i][1] = aux1;
              tabCampeonato[i][2] = aux2;
              tabCampeonato[i][3] = aux3;
              scanf(times[i], auxTime);
            }
        }
    }

    for (x=0;x<3;x++)
    {
      printf("\n%d colocado: %s, Pontos: %d, Vitoria: %d, Empates: %d, Derrotas: %d", x+1, times[x],tabCampeonato[x][3],tabCampeonato[x][0],tabCampeonato[x][1],tabCampeonato[x][2]);
    }

  return 0;
}
