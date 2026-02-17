#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
ALGORITIMO -> FILAS ESTATICAS!

AUTOR: GABRIEL FELIPE F. DE SOUZA;
CRIADO EM: 02/05/2025;
ESTRUTURA PADRAO DA OPERAÇÃO: Pessoa (Nome, idade);

Funções:
- Inserção (Push) - ok;
- Remover (Pop) - ok;
- Listagem de elementos (List) - ok;
- Buscar por nome (Search by name);
- Buscar por idade (Search by age);
- Remover elemento numa dada posição (Pop per position);
- Vereficar se esta vazia (Is empty);
- Contagem de elementos (Count);
- Destruir fila (Destroy);
- Inverter fila - ok;
- Adicionar Penultimo elemento;
*/

//----------------------
// Definição da estrutura:
//----------------------

#define MAX 10

typedef struct Dado Dado;
typedef struct Fila Fila;

struct Dado
{
    int idade;
    char nome[50];
};

struct Fila
{
    Dado dados[MAX];
    int inicio;
    int fim;
    int quantidade;
};

void inciar_fila(Fila *fila)
{
    fila->inicio = 0;
    fila->fim = 0;
    fila->quantidade = 0;
    return;
}

int insere_elemento(Fila *fila, Dado dado)
{
    // Verifica se a fila nao existe:
    if (fila == NULL)
    {
        return -1;
    }

    // Verifica se a fila ja esta cheia:
    if (fila->quantidade >= MAX)
    {
        return -1;
    }

    fila->dados[fila->fim] = dado;     // Insere o dado na regiao livre
    fila->fim = (fila->fim + 1) % MAX; // Atualiza o ponteiro de fim
    fila->quantidade++;
    return 1;
}

int remover_elemento(Fila *fila)
{
    // Verifica se a fila nao existe:
    if (fila == NULL)
    {
        return -1;
    }

    // Verifica se a fila esta vazia:
    if (fila->quantidade == 0)
    {
        return -1;
    }

    fila->fim = (fila->fim - 1 + MAX) % MAX; // Ajuste do ponteiro do fim
    fila->quantidade--;
    return 1;
}

void imprimir_elementos(Fila *fila)
{

    // Verifica se a fila nao existe:
    if (fila == NULL)
    {
        return;
    }

    int i = fila->inicio;

    while (i != fila->fim)
    {
        printf("%s - %d\n", fila->dados[i].nome, fila->dados[i].idade);
        i = (i + 1) % MAX;
    }

    return;
}

void inverter_fila(Fila *fila)
{

    // Verifica se a fila nao existe:
    if (fila == NULL)
    {
        return;
    }

    if (fila->quantidade < 2)
    {
        return;
    } // Impossivel inverter fila vazia ou com 1 elemento

    // Armazena ponteiros de fim e inicio, e quantidade com contador para o loop:
    int fim = fila->fim - 1;
    int inicio = fila->inicio;
    int quantidade = fila->quantidade;
    int contador = 0;

    while (contador != quantidade / 2)
    {
        Dado temp = fila->dados[inicio];
        fila->dados[inicio] = fila->dados[fim];
        fila->dados[fim] = temp;

        fim = (fim - 1 + MAX) % MAX;
        inicio = (inicio + 1) % MAX;
        contador++;
    }
}

int main()
{

    Dado aux;

    Fila fila;
    inciar_fila(&fila);

    insere_elemento(&fila, (Dado){13, "Jose"});
    insere_elemento(&fila, (Dado){27, "Maria"});
    insere_elemento(&fila, (Dado){44, "Gabriel"});
    insere_elemento(&fila, (Dado){7, "Antonio"});
    // insere_elemento(&fila, (Dado){55, "Robson"});

    printf("\nPrint elementos 1:\n");
    imprimir_elementos(&fila);

    inverter_fila(&fila);

    printf("\nPrint elementos 2:\n");
    imprimir_elementos(&fila);

    return 0;
}