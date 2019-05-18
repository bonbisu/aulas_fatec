#include <stdio.h>
#include <stdlib.h>

/*

6) Torre de Hanói

"Édouard Lucas teve inspiração de uma lenda para construir o jogo das Torres de Hanói em 1883[1]. Já seu nome foi inspirado na torre símbolo da cidade de Hanói, no Vietnã[2]. Existem várias lendas a respeito da origem do jogo, a mais conhecida diz respeito a um templo Hindu, situado no centro do universo. Diz-se que Fuças supostamente havia criado uma torre com 64 discos de ouro e mais duas estacas equilibradas sobre uma plataforma. Fuças ordenara-lhes que movessem todos os discos de uma estaca para outra segundo as suas instruções. As regras eram simples: apenas um disco poderia ser movido por vez e nunca um disco maior deveria ficar por cima de um disco menor. Segundo a lenda, quando todos os discos fossem transferidos de uma estaca para a outra, o templo desmoronar-se-ia e o mundo desapareceria. Dessa forma criaria-se um novo mundo, o mundo de Hanói." (Wikipedia)
      É possível fazer uma solução recursiva para o problema de um jeito bem simples:

Base da Recursão: resolver o quebra-cabeças com um disco é trivial, bastando fazer um movimento e pronto!
Caso Geral: se sei resolver o quebra-cabeças para N-1 discos fica fácil resolvê-lo para N discos. Transporto N-1 discos para o pino auxiliar (eu disse que sabia resolver para N-1 discos!), transporto o disco maior que sobrou para o pino destino e, finalmente, transporto os N-1 discos do pino auxiliar para o pino destino (novamente eu disse que sabia resolver para N-1 discos!).

      Veja como fica a assinatura do procedimento:

void hanoi (int n, char origem, char destino, char auxiliar) 

*/

void hanoi(int n, char origem, char destino, char auxiliar)
{
    if (n == 1)
        printf("Mova o disco do pino %c para o pino %c\n", origem, destino);
    else
    {
        hanoi(n - 1, origem, auxiliar, destino);
        printf("Mova o disco do pino %c para o pino %c\n", origem, destino);
        hanoi(n - 1, auxiliar, destino, origem);
    }
}

int main(int argc, char const *argv[])
{
    hanoi(64, 'A', 'B', 'C');
    return 0;
}
