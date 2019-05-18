#include <stdio.h>
int main()
{
    int vet[5] = {7, 2, 4, 9, 6};
    int *p = vet;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Endereco = %d, Valor = %u\n", p, *p);
        p++; // quantos bytes foram pulados aqui??? (int = 4 bytes)
    }

    double vet2[5] = {7, 2, 4, 9, 6};
    double *q = vet2;
    for (i = 0; i < 5; i++)
    {
        printf("Endereco = %d, Valor = %f\n", q, *q);
        q++; // quantos bytes foram pulados aqui??? (double = 8 bytes)
    }

    char vet3[5] = {'a', 'b', 'c', 'd', 'e'};
    char *r = vet3;
    for (i = 0; i < 5; i++)
    {
        printf("Endereco = %d, Valor = %c\n", r, *r);
        r++; // quantos bytes foram pulados aqui??? (char = 1 bytes)
    }

    return 0;
}