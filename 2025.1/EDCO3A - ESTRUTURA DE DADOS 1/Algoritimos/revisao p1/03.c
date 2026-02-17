#include <stdio.h>
#include <stdlib.h>

// elemento usado (não modificar)
struct Pessoa_tipo
{
    char nome[50];
    int idade;
    struct Pessoa_tipo *prox;
};
typedef struct Pessoa_tipo pessoa;

// função a ser desenvolvida:
pessoa *remove_val(pessoa **p, int val)
{

    // Checa se o ponteiro duplo é nulo:
    if (p == NULL)
    {
        return NULL;
    }

    // Criando os ponteiros auxiliares e atribuindo:
    pessoa *aux_anterior, *aux_atual;
    aux_anterior = NULL;
    aux_atual = (*p);

    // Checa se o atual é nulo, ou seja se ha elementos:
    if (aux_atual == NULL)
    {
        return NULL;
    }

    // Loop até o atual ser nulo, ou seja chegar no fim da pilha:
    while (aux_atual != NULL)
    {
        //Se a idade do atual for a que quer remover:
        if (aux_atual->idade == val)
        {
            //Caso onde é o primeiro elemento, nesse caso devemos alterar o p** original para recevber o novo primeiro:
            if (aux_anterior == NULL)
            {
                aux_anterior = aux_atual; //Tecnica usada para nao perder o ponteiro para o primeiro

                p = &(aux_atual->prox);

                return aux_anterior; //Retorna o ponteiro do elemento excluido
            }   
            //Caso onde não é o primeiro:
            else
            {
                aux_anterior->prox = aux_atual->prox; //Ajusta o ponteiro do anterior para o elemento da frente do atual
                return aux_atual; //Retorna o ponteiro do elemento excluido
            }
        }

        //Passo do loop:
        aux_anterior = aux_atual;
        aux_atual = aux_atual->prox;
    }

    return NULL;
}

int main()
{

    pessoa p[3] = {{"ana", 20, NULL}, {"ze", 22, NULL}, {"bia", 18, NULL}};
    p[0].prox = &p[1];
    p[1].prox = &p[2];
    pessoa *pp = &p[0];
    pessoa *r = remove_val(&pp, 18);
    printf("%d", r->idade);

    return 0;
}