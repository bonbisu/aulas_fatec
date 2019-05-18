/*
 Todos estes exercícios a seguir têm por base o código abaixo, que é um mini CRUD (Create-Read-Update-Delete, ou Criar-Ler-Atualizar-Remover).

1) Inclua novos campos, como endereço, e-mail, idade, etc.

2) Crie uma função procurar, com a assinatura abaixo, de modo que ela possa ser aproveitada tanto na funcionalidade procurar, quanto na excluir:

int procurar(char procurado[], struct ficha vetor[], int num_fichas)

 	O retorno dessa fext install be5invis.vscode-custom-cssunção será o índice do elemento encontrado, ou -1, caso o mesmo não tenta sido localizado.

3) Reimplemente a função procurar de modo recursivo (particularmente não há nenhuma vantagem nesta alteração, é só para treinarmos).

4) Refaça a funcionalidade de exclusão de modo a não ter que copiar todos os elementos abaixo do excluído.

5) Refaça o procurar de modo a trabalhar mesmo com pedaços de nomes (dica: pesquise uma função chamada "strstr").
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

// define uma estrutura(prototipo de objeto)
struct ficha
{
    char nome[40];
    char telefone[20];
    char endereco[50];
    char email[40];
    int idade;
};

int main()
{
    // define uma estrutura do tipo ficha como agenda, com 100 elementos
    struct ficha agenda[100];
    int fichas_existentes = 0, proxima = 0;
    // limpar o vetor
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
        fgets(opcao, 2, stdin);

        if (opcao[0] == '1') //inserir
        {
            printf("\nEntre com o nome:");
            fgets(agenda[proxima].nome, 40, stdin);
            printf("\nEntre com o telefone:");
            fgets(agenda[proxima].telefone, 20, stdin);
            printf("\nEntre com o endereço:");
            fgets(agenda[proxima].endereco, 50, stdin);
            printf("\nEntre com o email:");
            fgets(agenda[proxima].email, 40, stdin);
            printf("\nEntre com a idade:");
            fgets(agenda[proxima].idade, 3, stdin);
            fichas_existentes++;
            proxima++;
        }
        if (opcao[0] == '2') //procurar
        {
            char procurado[40];
            printf("\nEntre com o nome procurado:");
            fgets(procurado, 40, stdin);

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
                    break;
                }
            }
            if (achei == false)
            {
                printf("\n\nNome nao encontrado\n");
            }
        }
        if (opcao[0] == '3') //listar tudo
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
        if (opcao[0] == '4') //excluir
        {
            char procurado[40];
            printf("\nEntre com o nome que sera excluído:");
            fgets(procurado, 40, stdin);

            bool achei = false; //nao achei
            int i;
            for (i = 0; i < fichas_existentes; i++)
            {
                //Ignorando Maiusculas/Minusculas:
                //if(strcasecmp(procurado, agenda[i].nome) == 0)
                if (strcmp(procurado, agenda[i].nome) == 0)
                {
                    achei = true; //achei!!
                    printf("\n\nO telefone de %s, que é %s, será removido\n", agenda[i].nome, agenda[i].telefone);
                    int j;
                    for (j = i + 1; j < fichas_existentes; j++)
                    {
                        agenda[j - 1] = agenda[j];
                    }
                    fichas_existentes--;
                    proxima--;
                    break;
                }
            }
            if (achei == false)
            {
                printf("\n\nNome nao encontrado\n");
            }
        }
    }
    return 0;
}