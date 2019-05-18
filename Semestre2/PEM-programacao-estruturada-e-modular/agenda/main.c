/*

https://www.youtube.com/watch?v=SesJ4hjt5B4
não abra!


Todos estes exercícios a seguir têm por base o código abaixo, que é um mini CRUD (Create-Read-Update-Delete, ou Criar-Ler-Atualizar-Remover).

# 1) Inclua novos campos, como endereço, e-mail, idade, etc. 

2) Crie uma função procurar, com a assinatura abaixo, de modo que ela possa ser aproveitada tanto na funcionalidade procurar, quanto na excluir:

int procurar(char procurado[], struct ficha vetor[], int num_fichas)

 	O retorno dessa função será o índice do elemento encontrado, ou -1, caso o mesmo não tenta sido localizado.

3) Reimplemente a função procurar de modo recursivo (particularmente não há nenhuma vantagem nesta alteração, é só para treinarmos).

4) Refaça a funcionalidade de exclusão de modo a não ter que copiar todos os elementos abaixo do excluído.

5) Refaça o procurar de modo a trabalhar mesmo com pedaços de nomes (dica: pesquise uma função chamada "strstr").

_____________________________________________________
Código:

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

// define variaveis globais
int fichas_existentes = 0, proxima = 0;

// struct é um prototipo de objeto
struct ficha
{
    char nome[40];
    char telefone[20];
    char endereço[40];
    char email[30];
    char idade[3];
};

void inserir()
{
    printf("\nEntre com um nome:");
    fgets(agenda[proxima].nome, 40, stdin);
    printf("\nEntre com um telefone:");
    fgets(agenda[proxima].telefone, 20, stdin);
    fichas_existentes++;
    proxima++;
}

int procurar(char procurado[], struct ficha vetor[], int num_fichas)
{
    bool achei = false; //nao achei
    int i;

    for (i = 0; i < fichas_existentes; i++)
    {
        //Ignorando Maiusculas/Minusculas:
        //if(strcasecmp(procurado, agenda[i].nome) == 0)pr
        if (strcmp(procurado, agenda[i].nome) == 0)
        {
            achei = true; //achei!!
            printf("\n\nO telefone de %s é %s\n",
                   agenda[i].nome, agenda[i].telefone);
            //depois de achar nao preciso procurar mais
            return i;
        }
    }
    if (achei == false)
    {
        printf("\n\nNome nao encontrado\n");
        return -1;
    }
}

void listar()
{
    printf("\n\n");
    int i;
    for (i = 0; i < fichas_existentes; i++)
    {
        printf("O telefone de %s é %s\n",
               agenda[i].nome, agenda[i].telefone);
    }
    if (fichas_existentes == 0)
        printf("A base de dados está vazia!\n");
}

void excluir(char procurado[], struct ficha vetor[], int num_fichas)
{
    bool achei = false; //nao achei
    int i;
    int j;
    procurar(procurado, vetor, num_fichas);
    for (j = i + 1; j < fichas_existentes; j++)
    {
        agenda[j - 1] = agenda[j];
    }
    fichas_existentes--;
    proxima--;
    break;

    if (achei == false)
    {
        printf("\n\nNome nao encontrado\n");
        break;
    }
}

int main()
{
    struct ficha agenda[100];
    char opcao[10] = "0";
    setlocale(LC_ALL, "Portuguese");

    while (opcao[0] != '5')
    {
        printf("\nEntre com a opção desejada:\n");
        printf("\n1) Inserir ficha:");
        printf("\n2) Procurar por nome:");
        printf("\n3) Listar toda a base:");
        printf("\n4) Excluir por nome:");
        printf("\n5) Sair\n\n");
        gets(opcao);

        if (opcao[0] == '1')
        {
            inserir();
        }
        if (opcao[0] == '2')
        {
            char procurado[40];
            printf("\nEntre com o nome procurado:");
            fgets(procurado, 40, stdin);
            procurar(procurado, agenda, fichas_existentes);
        }
        if (opcao[0] == '3')
        {
            listar();
        }
        if (opcao[0] == '4')
        {
            char procurado[40];
            printf("\nEntre com o nome que sera excluído:");
            fgets(procurado, 40, stdin);
            excluir(procurado, agenda, fichas_existentes);
        }
    }
    return 0;
}
''