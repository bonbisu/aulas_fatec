#include <stdio.h>
#include <stdlib.h>
/*
1. (MAT 89) Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus
divisores positivos diferentes de n.
Exemplo: 6 é perfeito, pois 1+2+3 = 6.
Dado um inteiro positivo n, verificar se n é perfeito.
*/

int nPerfeito(int n)
{
    int i, soma = 0;
    for (i = 1; i < n; i++)
    {
        int divisivel = n % i;
        if (divisivel == 0)
        {
            soma = soma + i;
        }
    }
    if (soma == n)
    {
        printf("%i é perfeito\n", n);
    }
}

int main(int argc, char const *argv[])
{
    int i;
    for (i = 1; i < 100; i++)
    {
        nPerfeito(i);
    }
    return 0;
}
