#include <stdio.h>
#include <stdbool.h>

bool verificaDigito(int cpf[], int multiplicador[], int N)
{
  // @cpf inserir array com os digitos do cpf
  // @multiplicador array de multiplicadores
  // @N numero de loops

  int i, soma = 0;
  for (i = 0; i < N; i++)
  {
    soma = soma + cpf[i] * multiplicador[i];
  }
  int verif = ((soma * 10) % 11) % 10;

  if (verif == cpf[N])
    return true;
  else
    return false;
}

int main()
{
  int cpf[11];
  int m1[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
  int m2[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
  int i;
  printf("Entre com os 11 digitos do CPF:");
  for (i = 0; i < 11; i++)
  {
    scanf("%d", &cpf[i]);
  }

  // verifica CPF

  if (verificaDigito(cpf, m1, 9) && verificaDigito(cpf, m2, 10))
    printf("\nCPF valido.");
  else
    printf("\nErro no CPF.");

  return 0;
}