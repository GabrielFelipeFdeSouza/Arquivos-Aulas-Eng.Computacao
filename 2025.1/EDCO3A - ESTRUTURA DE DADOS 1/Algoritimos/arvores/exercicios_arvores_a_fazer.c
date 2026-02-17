#include <stdio.h>
#include <string.h>

struct aluno_t
{
  char nome[30];
  int idade;
};
typedef struct aluno_t aluno;

// nó da árvore
struct no_t
{
  aluno dado;
  struct no_t *dir;
  struct no_t *esq;
};
typedef struct no_t no;

// exemplo: imprime nós da árvore
void imprime_arv(no *raiz)
{
  if (raiz == NULL)
    return;

  printf("%s\n", raiz->dado.nome);
  imprime_arv(raiz->esq);
  imprime_arv(raiz->dir);
}

// exemplo: contas folhas
int conta_folhas(no *raiz)
{
  // se ponteiro NULO
  if (raiz == NULL)
  {
    return 0;
  }

  // se folha
  if (raiz->esq == NULL && raiz->dir == NULL)
  {
    return 1;
  }
  else
  {
    int folhas = 0;
    folhas = folhas + conta_folhas(raiz->esq);
    folhas = folhas + conta_folhas(raiz->dir);
    return folhas;
  }
}

// exercício 1: soma idades
int soma_idades(no *raiz)
{
  if (raiz == NULL)
  {
    return 0;
  }

  return raiz->dado.idade + soma_idades(raiz->dir) + soma_idades(raiz->esq);
}

// exercício 2: busca idade por nome
int busca_idade(no *raiz, char *nome)
{
  if (raiz == NULL)
  {
    return -1;
  }

  if (strcmp(nome, raiz->dado.nome) == 0)
  {
    return raiz->dado.idade;
  }

  int idade1 = busca_idade(raiz->dir, nome);
  int idade2 = busca_idade(raiz->esq, nome);

  int saida;

  if (idade1 > -1)
  {
    return idade1;
  }

  if (idade2 > -1)
  {
    return idade2;
  }

  return -1;
}

// exercício 3: altura de cada nó
int altura_no(no *raiz)
{

}

int main()
{
  // cria uma árvore a partir de um array
  no lista[5] = {{"adao", 30, NULL, NULL},
                 {{"bia", 25}, NULL, NULL},
                 {{"caio", 15}, NULL, NULL},
                 {{"duda", 20}, NULL, NULL},
                 {{"emy", 20}, NULL, NULL}};

  lista[0].esq = &lista[1]; // filho esq do 'A' é o 'B'
  lista[0].dir = &lista[2]; // filho dir do 'A' é o 'C'
  lista[1].esq = &lista[3]; // filho esq do 'B' é o 'D'
  lista[1].dir = &lista[4]; // filho dir do 'B' é o 'E'

  imprime_arv(&lista[0]);

  printf("\n\nfolhas: %d\n", conta_folhas(&lista[0]));

  printf("\n\nsoma das idades: %d\n", soma_idades(&lista[0]));

  printf("\n\n Idade da %s: %d", "bia", busca_idade(&lista[0], "bia"));

  altura_no(&lista[0]);

  return 0;
}