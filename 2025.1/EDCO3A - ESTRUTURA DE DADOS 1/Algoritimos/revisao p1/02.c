#include <stdio.h>
#include <stdlib.h>

// nó da lista (não modificar)
struct Pessoa_tipo
{
    char nome[50];
    int idade;
    struct Pessoa_tipo *prox;
    struct Pessoa_tipo *ant;
};
typedef struct Pessoa_tipo pessoa;

// lista dupla
struct deque_tipo
{
    pessoa *primeiro;
    pessoa *ultimo;
    int qtd;
};
typedef struct deque_tipo deque;

// função a ser desenvolvida:
void adiciona_segundo(deque *d, pessoa *novo)
{
    //Se a fila estiver vazia:
    if (d->qtd == 0)
    {
        return;
    }

    //Se a fila tiver apenas um elemento:
    if (d->qtd == 1)
    {
        d->ultimo = novo; //O ponteiro do ultimo da fila aponta para o novo nó
        d->primeiro->prox = novo; //O proximo do unico que tinha aponta para o novo
        d->ultimo->ant = d->primeiro; //O anterior do ultimo, agora aponta para nosso primeiro

        d->qtd++;
    }
    else
    {   
        //No caso de haver 2 ou mais elementos, nao há nescessidade de ajsutar o ponteiro de fim da fila, visto que ele se desloca com o de fato ultimo elemento:
        //Declarando ponteiro auxiliar:
        pessoa *aux;
        aux = d->primeiro->prox;

        d->primeiro->prox = novo; //O proximo do primeiro recebe o novo 
        novo->prox = aux; //O novo proximo recebe o auxiliar, que era o segundo, que vira agora terceiro
        aux->ant = novo; //O anterior do terceiro agora, recebe o ponteiro para o novo que é o segundo 
        novo->ant = d->primeiro; //Por fim o segundo novo recebe no ant o ponteiro para o primeiro

        d->qtd++;
    }

    return;
}

int main()
{

    pessoa p[3] = {{"ana", 20, NULL, NULL}, {"ze", 22, NULL, NULL}, {"ju", 26, NULL, NULL}};
    p[0].prox = &p[1];
    p[1].ant = &p[0];
    deque d = {NULL, NULL, 2};
    d.primeiro = &p[0];
    d.ultimo = &p[1];
    adiciona_segundo(&d, &p[2]);
    printf("%d", d.ultimo->ant->idade);

    return 0;
}