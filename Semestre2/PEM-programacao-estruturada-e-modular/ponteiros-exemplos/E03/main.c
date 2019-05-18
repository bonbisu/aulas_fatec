#include <stdio.h>

//Isto ilustra a passagem de parâmetros POR REFERÊNCIA,
//onde ocorre a cópia dos endereços das variáveis.

void troca(int *p, int *q) //isto funciona!!!!
{
    int aux;
    aux = *p; // *p refere-se ao valor de a dentro do main
    *p = *q;  // *q refere-se ao valor de b dentro do main
    *q = aux;
}
int main()
{
    int a = 2, b = 3;
    printf("ANTES: a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("DEPOIS: a = %d, b = %d\n", a, b);
    return 0;
}