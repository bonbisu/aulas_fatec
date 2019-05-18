#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    // (int *) informa que é um ponteiro para inteiros
    // 10 bytes requisitados
    // sizeof(int) para descobrir o tamanho da palavra(ajuda no incremento)
    p = (int *)malloc(10 * sizeof(int));
    //o acima é mais ou menos equivalente a   int p[10];
    //só que é uma alocação dinâmica através de uma
    //chamada do sistema operacional (malloc)
    int i;
    for (i = 0; i < 10; i++)
    {
        // como é basicamente um vetor, a chama dos elementos pode ser a mesma
        p[i] = 2 * i;
        printf("%d - ", p[i]);
    }
    return 0;
}