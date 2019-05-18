#include <stdio.h>
int somaBorda(int L, int C, int mat[L][C])
{
    int i, soma = 0;
    for (i = 0; i < C; i++)
    {
        soma = soma + mat[0][i];
        soma = soma + mat[L - 1][i];
    }
    for (i = 0; i < L - 1; i++)
    {
        soma = soma + mat[i][0];
        soma = soma + mat[i][C - 1];
    }
    return soma;
}
int main(int argc, char const *argv[])
{
    int A[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printf("%d\n", somaBorda(4, 4, A));
    return 0;
}
