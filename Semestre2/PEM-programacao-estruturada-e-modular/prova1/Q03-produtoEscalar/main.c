#include <stdio.h>

double produtoEscalar(double A[], double B[], int N)
{
    int i, soma = 0;
    for (i = 0; i < N; i++)
    {
        soma = soma + A[i] * B[i];
    }
    return soma;
}

int main(int argc, char const *argv[])
{
    double A[] = {0, 3, -2, 7, 9, 11, 15, 0, 0, 0, 0}, B[] = {25, 0, 1, 10, 2, 0, 0, 12, 4, 3, -2};
    printf("%f\n", produtoEscalar(A, B, 11));
    return 0;
}
