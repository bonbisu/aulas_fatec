#include <stdio.h>
#include <unistd.h> // for linux, for windows use #include <windows.h> and Sleep(int)

void contar(int inicio, int fim)
{
    if (inicio <= fim)
    {
        printf("%d\n", inicio * 7); // tabuada do 7 XD
        sleep(1);
        contar(inicio + 1, fim);
    }
}

int fatorial(int n)
{
    int fat;
    if (n == 0)
        return 1; // para corri
    else
    {
        if (n > 1)
        {
            fat = n * fatorial(n - 1);
        }
    }
}

int main()
{
    //contar(1, 10);
    printf("Fatorial de 7 eh %d", fatorial(7));
    return 0;
}
