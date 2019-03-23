#include <stdio.h>
void contar(int); // função prototipada, caso uma função deva ser declarada antes, mas não se pode, podemos declarar depois

int main()
{
    contar(10);
    return 0;
}

void contar(int i)
{
    if (i > 0)
    {
        printf("%d\n", i);
        contar(i - 1);
    }
}