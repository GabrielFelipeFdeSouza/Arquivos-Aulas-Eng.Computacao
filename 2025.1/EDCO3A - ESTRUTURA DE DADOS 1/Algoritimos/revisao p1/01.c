#include <stdio.h>

#define MAX 10
// pilha
struct pilha_t
{
    int qtd;             // número de elemenotos na pilha
    char dados[MAX][50]; // array de dados
};
typedef struct pilha_t pilha;

// função a ser desenvolvida:
int conta_nomes(pilha *p)
{
    //Retorna 0 se qtd for 0:
    if (p->qtd == 0)
    {
        return 0;
    }

    //Declara as variaveis de contagem e passo:
    int contador = 0;
    int contador_str = 0;

    while (contador != p->qtd)
    {
        if (p->dados[contador][0] == 'a' || p->dados[contador][0] == 'A')
        {
            contador_str++;
        }
        contador++;
    } //Percorre todos os dados

    return contador_str; //Retorna o nº de strings que comçam com a
}

int main()
{

    pilha p = {2, {"ana", "pedro"}};
    printf("%d", conta_nomes(&p));

    return 0;
}