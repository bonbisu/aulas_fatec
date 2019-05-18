#include <stdio.h>

//Isto ilustra a passagem de parâmetros POR VALOR,
//onde ocorre a cópia dos valores das variáveis.
//É sempre assim para tipos primitivos.

void troca(int x, int y) //isto nao funciona!!!! *x *y
{
    int aux;
    printf("ANTES:  x = %d, y = %d\n", x, y);
    aux = x;
    x = y;
    y = aux;
    printf("DEPOIS:  x = %d, y = %d\n", x, y);
}

void troca2(int *x, int *y) //isto nao funciona!!!! *x *y
{
    int aux;
    printf("ANTES:  x = %d, y = %d\n", x, y);
    aux = x;
    x = y;
    y = aux;
    printf("DEPOIS:  x = %d, y = %d\n", x, y);
}

int main()
{
    int a = 2, b = 3;
    printf("ANTES: a = %d, b = %d\n", a, b);
    troca(a, b);
    printf("DEPOIS: a = %d, b = %d\n", a, b);
    return 0;
}