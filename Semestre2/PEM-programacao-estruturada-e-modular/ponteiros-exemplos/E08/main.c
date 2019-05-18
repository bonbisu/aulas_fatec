#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(10000 * sizeof(int));

    int i;
    for (i = 0; i < 10; i++)
    {
        p[i] = 2 * i;
        printf("%d - ", p[i]);
    }
    printf("\nO vetor acima esta no endereco %d\n\n", p);
    //agora vamos aumentar o vetor com realloc
    p = (int *)realloc(p, 20000 * sizeof(int));
    for (i = 10; i < 20; i++)
    {
        p[i] = 2 * i;
    }
    printf("\nAumentando o vetor para 20 elementos:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d - ", p[i]);
    }
    printf("\nO novo vetor esta no endereco %d\n\n", p);
    return 0;
}