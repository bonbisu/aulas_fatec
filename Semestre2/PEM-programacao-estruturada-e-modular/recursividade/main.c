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

int main()
{
    contar(1, 10);
    return 0;
}
