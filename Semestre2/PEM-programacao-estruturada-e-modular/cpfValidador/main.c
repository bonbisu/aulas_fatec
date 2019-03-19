#include <stdio.h>
#include <stdbool.h>
#include <string.h> // for string manipulation (e.g. strlen() )

bool strIsNumber(char c)
{
  if (c >= '0' && c <= '9') // ao subtrair um numero como string é utilizado seu código ascii
  {
    return true;
  }
  else
  {
    return false;
  }
}

int convertNumber(char c)
{
  // o codigo ascii de '0' é igual 48.
  // Subtraindo 48 de 48 se encontra o inteiro 0. O mesmo se aplica para os demais numero/strings.
  // e.g. '3' = 51 => 51 - 48 = 3
  return c - '0';
}

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

void converter(char string[], int vet[])
{
  int i = strlen(string) - 1; // indice do ultimo char
  int j = 10;                 // indice do vetor numerico
  while (i >= 0)
  {
    if (strIsNumber(string[i]))
    {
      vet[j] = convertNumber(string[i]);
      j--;
    }
    i--;
  }
  while (j >= 0)
  {
    vet[j] = 0;
    j--;
  }
}

int main()
{
  int cpf[11];
  int m1[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
  int m2[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
  int i;
  char cpfstring[20];

  printf("Entre com o CPF: ");
  gets(cpfstring);
  converter(cpfstring, cpf);

  // verifica CPF

  if (verificaDigito(cpf, m1, 9) && verificaDigito(cpf, m2, 10))
    printf("\nCPF valido.");
  else
    printf("\nErro no CPF.");

  return 0;
}