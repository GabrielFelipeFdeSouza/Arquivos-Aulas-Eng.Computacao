#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define INF -1 // Valor retornado quando não há arestas

typedef struct No
{
    int destino;
    int peso;
    struct No *prox;
} No;

typedef struct
{
    No *adj[MAX];
    int nVertices;
} Grafo;

void adicionarAresta(Grafo *g, int origem, int destino, int peso)
{
    No *novo = (No *)malloc(sizeof(No));
    novo->destino = destino;
    novo->peso = peso;
    novo->prox = g->adj[origem];
    g->adj[origem] = novo;
}

int encontrarMaiorArestaLista(Grafo *g, int origem)
{
    // Variaveis iniciais:
    int valorMaior = -1;
    int indiceMaior = -1;
    No *aux = g->adj[origem]; // Recebe o ponetiro para o primeiro nó

    // Procura pelo caminho de maior peso, somente se existir os caminhos:
    while (aux != NULL)
    {
        if (aux->peso >= valorMaior && aux->peso > -1)
        {
            valorMaior = aux->peso;
            indiceMaior = aux->destino;
        }

        aux = aux->prox; // Atualização do passo de checagem dos nós
    }

    return indiceMaior;
}

int main()
{

    Grafo g;
    g.nVertices = 5;

    // Inicializa lista de adjacência
    for (int i = 0; i < g.nVertices; i++)
    {
        g.adj[i] = NULL;
    }

    // Adiciona arestas (grafo direcionado e ponderado)
    adicionarAresta(&g, 0, 1, 10);
    adicionarAresta(&g, 0, 2, 25);
    adicionarAresta(&g, 0, 3, 5);
    adicionarAresta(&g, 1, 4, 20);
    adicionarAresta(&g, 2, 3, 8);

    int origem = 0;
    int destino = encontrarMaiorArestaLista(&g, origem);

    printf("%d", destino);
}