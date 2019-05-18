#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 2, b = 3;
    // variaveis de ponteiro
    int *p, *q;
    // passandoo endereço das variaveis para as var de ponteiro
    p = &a;
    q = &b;
    printf("Endereco da variavel a em hexadecimal = %p\n", p);
    printf("Endereco da variavel b em decimal = %d\n", q);
    printf("Endereco da variavel b em hexadecimal = %p\n", q);
    printf("Qual o conteudo do endereco %p? Resposta: %d\n", p, *p);
    printf("Qual o conteudo do endereco %p? Resposta: %d\n", q, *q);
    return 0;
}
