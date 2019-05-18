/*
	No exemplo abaixo, tentamos escrever numa área de memória
	que não é destinada ao usuário. Portanto, o Sistema Operacional
	bloqueia o acesso e derruba o programa.
*/
#include <stdio.h>
int main()
{
    int *p;
    p = 1000;
    *p = 1;
    return 0;
}