#include <stdio.h>
#include <stdlib.h>

/**
 *5) Crie um método recursivo que retorne o maior elemento de um vetor.

-> Só para entendermos melhor o problema, a versão iterativa (não-recursiva) seria assim:

	int maior(int vet[ ], int N)
	{	int i, m = vet[0];
		for(i=1; i < N; i++)
		{	if(vet[i] > m)
			{	m = vet[i];
			}
		}
		return m;
	}

	Agora vamos pensar na versão recursiva....
*/
int maior(int *vetor, int vetorLength, int indice)
{
    if (indice == vetorLength - 1)
        return vetor[indice];
    else
    {
        int maiorDoResto = maior(vetor, vetorLength, indice + 1);
        if (vetor[indice] > maiorDoResto)
            return vetor[indice];
        else
            return maiorDoResto;
    }
}
int main(int argc, char const *argv[])
{
    int vetor[10] = {10, 80, 30, 60, 50, 40, 70, 20, 90, 7};
    int vetorLength = sizeof(vetor) / sizeof(vetor[0]);
    printf("%d", maior(vetor, vetorLength, 0));
    return 0;
}
