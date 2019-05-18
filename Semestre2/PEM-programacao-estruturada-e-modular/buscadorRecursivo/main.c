#include <stdio.h>
#include <stdlib.h>

/**
 * 3) Crie um método recursivo que procure um número dentro de um vetor, a partir de um dado índice. Se achar o mesmo, o método retorna o índice onde ele se encontra, senão, retorna -1 (busca linear recursiva).
	
-> Só para entendermos melhor o problema, a versão iterativa (não-recursiva) seria assim:

	int busca(int vet[ ], int inicio, int N, int procurado)
	{	int i;
		for(i=inicio; i < N; i++)
		{	if(procurado == vet[i])
			{	return i;
			}
		}
		return -1;
	}

	Agora vamos pensar na versão recursiva.... A versão recursiva terá um parâmetro a mais na função, o parâmetro índice, que diz onde a busca iniciará:

int buscaRecursiva(int vet[ ], int N, int indice, int procurado)
*/

int busca(int *vetor, int inicio, int fim, int procurado)
{
    if (inicio == fim)
        return -1;
    else
    {
        if (vetor[inicio] == procurado)
            return inicio;
        else
            return busca(vetor, inicio + 1, fim, procurado);
    }
}

int main(int argc, char const *argv[])
{
    int vetor[10] = {10, 80, 30, 60, 50, 40, 70, 20, 90, 7};
    printf("%d", busca(vetor, 2, 5, 60));
    return 0;
}
