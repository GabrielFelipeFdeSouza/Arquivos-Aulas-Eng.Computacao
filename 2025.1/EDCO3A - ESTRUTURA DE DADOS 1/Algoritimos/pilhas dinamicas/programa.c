#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
ALGORITIMO -> PILHAS DINAMICAS!

AUTOR: GABRIEL FELIPE F. DE SOUZA;
CRIADO EM: 16/04/2025;
ESTRUTURA PADRAO DA OPERAÇÃO: Pessoa (Nome, idade);

Funções:
- Inserção (Push); - ok;
- Remoção do top (Pop) - ok;
- Olhar elemento do topo (Top) - ok;
- Listagem de elementos (List); - ok
- Buscar por nome (Search by name) - ok;
- Buscar por idade (Search by age) - ok;
- Remover elemento numa dada posição (Pop per position) - ok;
- Vereficar se esta vazia (Is empty); - ok
- Contagem de elementos (Count) - ok;
- Destruir pilha (Destroy) - ok;
*/

//----------------------
// Definição da estrutura:
//----------------------

typedef struct No No;
typedef struct Dado Dado;
typedef struct Raiz Raiz;

struct Dado
{
    int idade;
    char nome[50];
};

struct No
{
    Dado dado;
    No *prox;
};

struct Raiz
{
    No *inicio;
};

//----------------------
// Funções implementadas:
//----------------------

void inciar_pilha(Raiz *pilha)
{
    pilha->inicio = NULL;
} // Função responsavel por iniciar uma pilha

int esta_vazia(Raiz *pilha)
{
    if (pilha->inicio == NULL)
    {
        return 1;
    }

    return 0;
} // Função retorna se a pilha esta vazia

void imprimir_elementos(Raiz *pilha)
{
    No *aux = pilha->inicio;

    while (aux != NULL)
    {
        printf("Nome: %s - idade: %d\n", aux->dado.nome, aux->dado.idade);
        aux = aux->prox;
    }

    return;
} // Função que imprime todos os elementos da pilha

void inserir_elemento(Raiz *pilha, Dado *dado_inserir)
{
    No *aux = pilha->inicio;
    No *novo = calloc(1, sizeof(No)); // aloca memoria para o novo nó

    pilha->inicio = novo;
    novo->prox = aux;
    novo->dado = *dado_inserir;

    return;
} // Função que insere um novo dado ao topo da pilha

void remover_elemento_topo(Raiz *pilha, Dado *dado_removido)
{

    if (pilha->inicio == NULL)
    {
        printf("\nNão ha dados para remover! - pilha vazia!\n");
        return;
    }

    No *aux = pilha->inicio->prox;

    *dado_removido = pilha->inicio->dado;
    free(pilha->inicio);
    pilha->inicio = aux;

    printf("\nDado removido: Nome: %s - idade: %d\n", dado_removido->nome, dado_removido->idade);

    return;
} // Função que remove o dado do topo e manda para o dado_removido

void olhar_elemento_topo(Raiz *pilha, Dado *dado_olhado)
{

    if (pilha->inicio == NULL)
    {
        printf("\nNão ha dados para olhar! - pilha vazia!\n");
        return;
    }

    *dado_olhado = pilha->inicio->dado;
    printf("\nDado olhado: Nome: %s - idade: %d\n", dado_olhado->nome, dado_olhado->idade);

    return;
} // Olha o dado do topo, mandando para dado_olhado

int contar_elementos(Raiz *pilha)
{

    No *aux = pilha->inicio;
    int contagem = 0;

    while (aux != NULL)
    {
        contagem++;
        aux = aux->prox;
    }

    return contagem;
} // Função que conta quantos elementos ha na pilha

void destruir(Raiz *pilha)
{
    while (pilha->inicio != NULL)
    {
        No *atual = pilha->inicio;
        No *anterior = NULL;

        while (atual->prox != NULL)
        {
            anterior = atual;
            atual = atual->prox;
        }

        printf("\nDESTRUINDO ELEMENTO de nome %s\n", atual->dado.nome);

        // Se só há um nó
        if (anterior == NULL)
        {
            free(pilha->inicio);
            pilha->inicio = NULL;
        }
        else
        {
            free(atual);
            anterior->prox = NULL;
        }
    }
} // Função que destroi a pilha completamente

void remover_elemento_meio(Raiz *pilha, Dado *dado_removido, int posicao)
{
    int i = 0;
    No *aux = pilha->inicio;
    No *aux2;

    if (pilha->inicio == NULL)
    {
        printf("\nNão ha dados para remover! - pilha vazia!\n");
        return;
    }

    if (posicao <= 0)
    {
        printf("\nPosição inválida - posição deve ser maior que 0!\n");
        return;
    }

    while (i < posicao)
    {
        i++;
        aux2 = aux;
        aux = aux->prox;
        if (aux == NULL)
        {
            printf("\nNão ha dados para remover! - pilha vazia na posicao solicitada!\n");
            return;
        }
    }

    No *aux3 = aux->prox;

    *dado_removido = aux->dado;
    free(aux);
    aux2->prox = aux3;

    printf("\nDado removido: Nome: %s - idade: %d\n", dado_removido->nome, dado_removido->idade);

    return;
} // Função que remove o dado de uma posicao da pilha e manda para o dado_removido

int busca_idade(Raiz *pilha, int idade)
{
    No *aux = pilha->inicio;
    int i = 1;

    if (pilha->inicio == NULL)
    {
        printf("\nNão ha dados para encontrar! - pilha vazia!\n");
        return -1;
    }

    while (aux != NULL)
    {
        if (aux->dado.idade == idade)
        {
            return i;
        }
        i++;
        aux = aux->prox;
    }

    return -1;
} // Função que busca um elemento na pilha por idade, retorna a posicao dele (1º), se nao tiver retorna -1

int busca_nome(Raiz *pilha, char *nome)
{
    No *aux = pilha->inicio;
    int i = 1;

    if (pilha->inicio == NULL)
    {
        printf("\nNão ha dados para encontrar! - pilha vazia!\n");
        return -1;
    }

    while (aux != NULL)
    {
        if (strcmp(aux->dado.nome, nome) == 0)
        {
            return i;
        }
        i++;
        aux = aux->prox;
    }

    return -1;
} // Função que busca um elemento na pilha por nome, retorna a posicao dele (1º), se nao tiver retorna -1

//----------------------
// Main:
//----------------------

int main()
{
    Raiz pilha;
    inciar_pilha(&pilha);
    Dado auxiliar;

    printf("\nPrograma de teste de pilha dinamica:\n");

    inserir_elemento(&pilha, &(Dado){15, "Ana"});
    inserir_elemento(&pilha, &(Dado){27, "Mario"});
    inserir_elemento(&pilha, &(Dado){33, "Jose"});
    inserir_elemento(&pilha, &(Dado){55, "Rosa"});
    inserir_elemento(&pilha, &(Dado){10, "Thiago"});

    printf("\nImprimindo elementos 1:\n");
    imprimir_elementos(&pilha);

    remover_elemento_meio(&pilha, &auxiliar, 2);

    printf("\nImprimindo elementos 2:\n");
    imprimir_elementos(&pilha);

    printf("\nElemento de nome andre na posição %d\n", busca_nome(&pilha, "Mario"));

    return 0;
}