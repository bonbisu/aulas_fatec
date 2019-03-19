#include <stdio.h>
#include <stdlib.h>

// Crie um programa que controle uma lista de inscritos em um vestibular,
// armazene em uma matriz 10×3 os seguintes dados: primeira coluna :
// cpf do inscrito , segunda coluna: idade do inscrito,
// terceira coluna: curso escolhido 1-ADS 2-GECOM 3-Eventos 4-RH
//
// somente insira a linha da matriz caso o CPF não tenha sido cadastrado anteriormente
// Exiba ao  final a quantidade de inscritos de cada curso
// Mostre a media de idade dos inscritos
// Caso ja exista um cpf, mostre a mensagem CPF ja cadastrado registro não inserido

int main(int argc, char const *argv[])
{
  int candidatos[10][3],i,j,x,y,cpf,idade,curso;
  float media,somaIdades=0,lenCand;
  // arrays para teste
  int tCpf[10] = {1,2,3,4,5,6,7,8,9,10};
  int tIdade[10] = {19,22,25,35,30,27,24,26,18,29};
  int tCurso[10] = {1,1,1,1,2,2,2,3,4,4};
  // contagem de cursos
  int ads=0,gecom=0,eventos=0,rh=0;

  // função para descobrir o SO
  // #ifdef WIN32
	// 	system("CLS");
	// #else
	// 	system("clear");
	// #endif

  // calcula o tamanho do array
  lenCand = sizeof(candidatos) / sizeof(candidatos[0]);


  // limpando o array
  for(i=0;i<lenCand;i++)
  {
    for(j=0;j<3;j++)
    {
      candidatos[i][j] = 0;
    }
  }

  // inicio do programa
  for(x=0;x<lenCand;x++)
  {
    // marca para salto
    inicio:
    printf("Insira o CPF do candidato : ");
    scanf(" %d", &cpf);
    // cpf = tCpf[x];

    // loop para verificar cpf já incluido
    i=0;
    j=0;
    while (i == 0 && j < lenCand)
    {
      if (cpf == candidatos[j][0])
      {
        i = 1;
      }
      j++;
    }

    if (i!=1)
    {
      candidatos[x][0] = cpf;
      printf("Insira a idade do candidato : ");
      scanf("%d", &idade);
      // idade = tIdade[x];

      candidatos[x][1] = idade;
      printf("Insira o curso escolhido\n1-ADS 2-GECOM 3-Eventos 4-RH : ");
      scanf("%d", &curso);
      // curso = tCurso[x];

      candidatos[x][2] = curso;
      system("cls");
    }
    else
    {
      printf("\nCandidato ja inserido! Tente outro CPF.\n");
      printf ("\n\nPressione [ENTER] para continuar...");
      // função pede qualquer tecla para continuar
      getchar ();
      getchar ();
      // limpa a tela
      system("cls");
      // salta para o inicio do programa, dentro do loop, no mesmo elemento do array
      goto inicio;
    }
  }
  for(x=0;x<lenCand;x++)
  {
    somaIdades = somaIdades + candidatos[x][1];
    switch (candidatos[x][2])
    {
      case 1:
      ads++;
      break;

      case 2:
      gecom++;
      break;

      case 3:
      eventos++;
      break;

      case 4:
      rh++;
      break;
    }
  }
  media = somaIdades / lenCand;
  printf("Candidatos por curso:\n -ADS: %d,\n -GECOM: %d,\n -EVENTOS: %d,\n -RH: %d\nMedia de idade dos candidatos: %.1f", ads, gecom, eventos,rh,media);
  for(x=0;x<10;x++)
  {
    printf("\n\nCandidato [%d] \n CPF: %d\n IDADE: %d\n CURSO: %d\n", x+1,candidatos[x][0],candidatos[x][1],candidatos[x][2] );
  }
}
